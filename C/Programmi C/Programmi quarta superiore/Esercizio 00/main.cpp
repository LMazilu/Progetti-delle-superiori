/*Dati 2 vettori, 1 intero e 1 di caratteri,creare e stampare un terzo vettore di caratteri di cui l'iesimo carattere di v2 e si ripete tante volte quanto
indicato dall'iesimo numero di v1.*/

#include <cstdlib>
#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
using namespace std;

int main() {
	int const k = 100;
	int v1[k],i1,i2,sw,nc,i3,c2=0,c=0,tot;
	char v2[k],v3[k];


	for(i1=0,i2=0,i3=0; i1<k,i2<k,i3<k; i1++,i2++,i3++) {
		v1[i1]=0;
		v2[i2]=0;
		v3[i3]=0;
	}

	do {

		do {
			printf("                  Esercitazione sui vettori\n\n");
			printf("   1) Caricamento vettori\n\n");
			printf("   2) Elaborazione vettore\n\n");
			printf("   3) Visualizza vettori\n\n");
			printf("   4) Esci\n\n\n\n");

			printf("       Inserisci la scelta: ");
			scanf("%d", &sw);
		} while(sw<1 || sw>4);

		switch(sw) {
			case 1: {

				do {
					printf("                  Esercitazione sui vettori\n\n");
					printf("  Quanti elementi vuoi caricare? : ");
					scanf("%d",&nc);
				} while(nc<1 || nc>25);


				for(i2=0,i1=0; i2<nc; i2++,i1++) {

					printf("\n\n Inserisci quante volte vuoi caricare l'elemento %d: ",i1+1);
					scanf("%d",&v1[i1]);
					printf("\n\n Inserisci l'elemento da copiare: ");
					cin>>(v2[i2]);

				}


			}
			break;


			case 2: {

				/*for(i1=0; i1<nc; i1++) {
					for(i2=0; i2<v1[i1]; i2++,i3++) {
						v3[i3]=v2[i2];
					}
				}*/

				for(i2=0, i3=0; i2<nc; i2++ ) {
					for(c2=0; c2!= v1[i2]; c2++,i3++) {
						v3[i3]=v2[i2];
					}
				}

				tot=i3;

				printf("\n\n Calcolato!\n\n\n\n");
			}
			break;

			case 3: {


				i3=0;
				do {
					printf("%c",v3[i3]);

					i3++;

				} while(i3<tot);



			}
			break;

		}

	} while(sw!=4);



}



















/*Harambe was just a gorilla*/

