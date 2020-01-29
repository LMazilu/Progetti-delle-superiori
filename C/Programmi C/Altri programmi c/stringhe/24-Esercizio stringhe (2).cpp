#include<iostream>
#include<conio2.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<ctype.h>
#include<string.h>








int scelta,caricato,comodo,ordinato,i,ang1,ang2,ang3,ang4,orr,vert,X,Y,orr1,vert1;

int cornice() {

	ang1 = 201;
	ang2 = 187;
	ang3 = 188;
	ang4 = 200;
	orr = 205;
	vert = 186;

	system("cls");
	X=2;
	Y=2;
	textcolor(RED);
	gotoxy(X,Y);
	printf("%c", ang1);
	X=3;
	Y=2;
	do {
		textcolor(RED);
		gotoxy(X,Y);
		printf("%c", orr);
		X=X+1;
	
	} while(X<=78);

	X=79;
	Y=2;
	textcolor(RED);
	gotoxy(X,Y);
	printf("%c", ang2);
	X=79;
	Y=3;
	do {
		textcolor(RED);
		gotoxy(X,Y);
		printf("%c", vert);
		Y=Y+1;
		
	} while(Y<=23);

	X=79;
	Y=24;
	textcolor(RED);
	gotoxy(X,Y);
	printf("%c", ang3);
	X=78;
	Y=24;
	do {
		textcolor(RED);
		gotoxy(X,Y);
		printf("%c", orr);
		X=X-1;
	
	} while(X>=3);

	X=2;
	Y=24;
	textcolor(RED);
	gotoxy(X,Y);
	printf("%c", ang4);
	X=2;
	Y=23;
	do {
		textcolor(RED);
		gotoxy(X,Y);
		printf("%c", vert);
		Y=Y-1;
		
	} while(Y>=3);
}

int main() {
	int const N=100;
	int scelta,nc,ca,a,c,voc,cons,y,x;
	char frase[N],risp;

	do {



		do {
            textcolor(RED);
			cornice();
			textcolor(15);
			gotoxy(25,3);
			printf("Stringhe");
			gotoxy(20,7);
			printf("1)Immissione stringa");
			gotoxy(20,9);
			printf("2)Conta-parole");
			gotoxy(20,11);
			printf("3)Conta-vocali e conta-consonanti");
			gotoxy(20,13);
			printf("4)Stampa parola per riga");
			gotoxy(20,15);
			printf("5)Esci");
			gotoxy(20,21);
			printf("Scegli --------> ");
			gotoxy(50,21);

			gotoxy(50,21);
			fflush(stdin);
			scanf("%d",&scelta);
		} while(scelta<1 || scelta>5);

		switch(scelta) {

			case 1: {
				cornice();
				textcolor(15);
				gotoxy(30,3);
				printf("Caricamento stringa");
				gotoxy(15,6);
				printf("Immettere stringa desiderata: ");
				fflush(stdin);
				gotoxy(50,6);
				gets(frase);
			}
			break;
			case 2: {
				cornice();
				textcolor(15);
				gotoxy(30,5);
				printf("Conta-parole");
				nc=strlen(frase);
				for(ca=0,i=0; i<nc; i++) {
					frase[i]=toupper(frase[i]);
					if(frase[i]<'A' || frase[i]>'Z') {
						if(frase[i-1]>='A' && frase[i-1]<='Z') {
							ca++;
						}
					}
				}
				if(frase[nc-1]>='A' && frase[nc-1]<='Z') {
					ca++;
				}
				gotoxy(15,8);
				printf("Le parole totali sono: %d",ca);
				getch();
			}
			break;
			case 3: {
				cornice();
				textcolor(15);
				gotoxy(30,5);
				printf("Conta-vocali e conta-consonanti");
				i=0;
				nc=strlen(frase);
				for(cons=0,voc=0; i<nc; i++) {
					frase[i]=toupper(frase[i]);
					if(frase[i]=='A' || frase[i]=='E'|| frase[i]=='I' || frase[i]=='O' || frase[i]=='U') {
						voc++;
					} else {
						if('A'<frase[i]<'Z' && frase[i]!='A','E','I','O','U' && frase[i]!=' ') {
							cons++;
						}
					}
				}
				gotoxy(15,10);
				printf("Vocali: %d                                 Consonanti: %d",voc,cons);
				getch();

			}
			break;
			case 4: {
				cornice();
				textcolor(15);
				gotoxy(10,5);
				printf("Parola per riga");
				nc=strlen(frase);
				for(i=0,y=10,x=9; i<nc; i++) {
					frase[i]=toupper(frase[i]);
						if(frase[i]>='A' && frase[i]<='Z') {
                            x++;
							gotoxy(x,y);
						    printf("%c",frase[i]);
						}else{
							if(frase[i-1]>='A' && frase[i-1]<='Z') {
								y++;
								x=9;
							}
							}
						}  getch();
				}break;

		}
	} while(scelta!=5);
}

