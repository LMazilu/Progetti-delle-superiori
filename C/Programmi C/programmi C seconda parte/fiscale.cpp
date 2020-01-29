#include<iostream>
#include<conio2.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

int carattere=0;

int isvocali(carattere) {
	if(carattere=='A' || carattere=='E' || carattere=='I' || carattere=='O' || carattere=='U' ||carattere=='a' || carattere=='e' || carattere=='i' || carattere=='o' || carattere=='u') {

		return 1;
	} else {

		return 0;

	}
}

int main() {

	int const DIM=7;
	char nome[20],cognome[30];
	char codfiscale[DIM];
	int i,j;
	int isvocali;
	int contatore=0;
	int riscognome=0,risnome=0;
	char x[2]= {'X',0};

	printf("Inserisci il tuo nome: ");
	gets(nome);


	for (i=0; i<strlen(nome); i++) {
		nome[i]=toupper(nome[i]);
	}

	printf("Inserisci il tuo cognome: ");
	gets(cognome);


	for (i=0; i<strlen(cognome); i++) {
		cognome[i]=toupper(cognome[i]);
	}


	for(i=0; i<strlen(cognome); i++) {
		if(cognome[i]=='A' || cognome[i]=='E' ||cognome[i]=='I' ||cognome[i]=='O' ||cognome[i]=='U') {
			riscognome=isvocali(cognome[i]);
			.

		}


		if(riscognome==0 && contatore<4) {
			codfiscale[contatore]=cognome[i];
			contatore=contatore+1;
		}

		if(contatore>=3) {
			break;
		}

	}



	if(i==strlen(cognome)-1 && contatore<4) {
		for(j=0; j<strlen(cognome); j++) {
			if(riscognome==1 && contatore<4) {
				codfiscale[contatore]=cognome[j];
				contatore=contatore+1;
			}
			while(j==strlen(cognome)-1 && contatore<3) {
				codfiscale[contatore]='X';
				contatore=contatore+1;

			}
		}
	}
}

if(contatore>2 && contatore<7) {
	for(i=0; i<strlen(nome); i++) {
		risnome=isvocali(nome[i]);

		if(risnome==0 && contatore<7) {
			codfiscale[contatore]=nome[i];
			contatore=contatore+1;
		}

