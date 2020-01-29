#include<stdlib.h>
#include<stdio.h>
#include<iostream>
//#include<conio2.h>
#include<windows.h>
#include<string.h>
#include<conio.h>
#define n 13
#define p 4
#define j 5
#define k 150

int ep;                       //variabile indicante la grandezza dell'espondente del polinomio
int gm;                      //variabile indicante la grandezza del messaggio
int i;                      //indice generale
int i2;                    //indice del messaggio
int bint[k];              //vettore di interi del messaggio
int point[k];            //vettori di interi del polinomio generatore
int crc[k];             //vettore del resto e del CRC
int c;                 //contatore di numeri da portare giù
int c1;               //variabile di comodo
char bits[k];        //vettore di caratteri del messaggio
char poli[k];       //vettore di caratteri del polinomio generatore
bool ctrl=true;    //controllo del primo input
bool ctrl2=true;  //controllo del secondo input

void div() {
	for(i=0; i<ep+1; i++) {
		if(point[i]==crc[i]) {
			crc[i]=0;
		} else {
			crc[i]=1;
		}
	}
}

void input() {
	//input grandezza del messaggio
	do {
		system("cls");
		printf("\n Immettere la grandezza del messaggio: ");
		fflush(stdin);
		scanf("%d",&gm);
	} while(gm<6 || gm >40);
	//input messaggio
	do {
		system("cls");
		printf("\n Immettere il messaggio da trasferire: ");
		gets(bits);
		ctrl=true;
		for(i=0; i<gm; i++) {
			if(bits[i] != '0' && bits[i] != '1') {
				ctrl=false;
			}
		}
	} while(ctrl==false || strlen(bits)!=gm );
	//input esponente del polinomio
	do {
		system("cls");
		printf("\n Immettere l'esponente del polinomio': ");
		fflush(stdin);
		scanf("%d",&ep);
	} while(ep<2 || ep>12);
	for(i=1; i<ep+1; i++) {
		bits[gm+i]='0';
	}
	//input polinomio
	do {
		system("cls");
		printf("\n messaggio: ");
		puts(bits);
		printf("\n Immettere il polinomio generatore: ");
		gets(poli);
		ctrl2=true;
		for( i2 = 0; i2 < (ep+1); i2++) {
			if(poli[i2] != '0' && poli[i2] != '1') {
				ctrl2=false;
			}
		}
	} while(ctrl2==false || strlen(poli)!=ep+1 );
}

void convers() {
	for(i=0; i<gm; i++) {
		if(bits[i] == '1') {
			bint[i]=1;
		} else  {
			bint[i]=0;
		}
	}

	for(i2=0; i2<ep+1; i2++) {
		if(poli[i2]=='1') {
			point[i2]=1;
		} else {
			point[i2]=0;

		}
	}
	for(i=1; i<ep+1; i++) {
		bint[gm+i]=0;
	}
}

void calc() {
	for(i=0; i<ep+1; i++) {
		crc[i]=bint[i];
	}

	for(i2=ep+1; i2<gm+ep+1;) {
		div();
		c=0;
		while(crc[0]==0 && c<ep) {
			for(i=0; i<ep+1; i++) {
				crc[i]=crc[i+1];
			}
			c++;
		}
		c1=(ep+1)-c;
		for(i=0; i<c; i++,i2++,c1++) {
			crc[c1]=bint[i2];
		}

	}
}

void output() {
	printf("\n");
	printf ("IL CRC E' : ");
	for(i=0; i<ep; i++) {
		printf("%d",crc[i]);
	}
	printf("\n\n\n\n");
	system("pause");
}

int main() {
	input();
	convers();
	calc();
	output();
}
