/*Data una matrice n x m, caricarla, stamparla e stampare l'indice della riga con
  la somma di tutti i suoi elementi*/
#include <cstdlib>
#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<limits.h>
using namespace std;


main() {
        int const j=100,k=100;
	int n,m,r,c,sw,mat[j][k],s[r],mag,imag;



	do {

		do {
			printf("                  Esercitazione sulle matrici\n\n");
			printf("   1) Caricamento matrice\n\n");
			printf("   2) Elaborazione calcolo\n\n");
			printf("   3) Visualizza matrice\n\n");
			printf("   4) Esci\n\n\n\n");

			printf("       Inserisci la scelta: ");
			scanf("%d",&sw);
		} while(sw<1 || sw>4);

		switch(sw) {
			case 1: {
				printf(" Digitare il numero di righe : ");
				scanf("%d",&n);
				printf("\n\n Digitare il numero di colonne : ");
				scanf("%d",&m);
				for(r=0; r<n; r++) {
					for(c=0; c<m; c++) {
						printf("\n\n\n\n Inserire il numero della %d riga e %d colonna: ", r+1,c+1);
						scanf("%d",&mat[r][c]);
						printf("\n\n\n\n");
					}
				}
			}
			break;


			case 2: {
				for(r=0; r<n; r++) {
					s[r]=0;
					for(c=0; c<m; c++) {
						s[r]=s[r]+mat[r][c];
					}
				}
				mag=INT_MIN;
				for(r=0; r<n; r++) {
					if(s[r]>mag) {
						mag=s[r];
						imag=r;
					}
				}
				printf("\n\n\n\n");
			}
			break;



			case 3: {
				for(r=0; r<n; r++) {
					printf("\n");
					for(c=0; c<m; c++) {
						printf("%4d",mat[r][c]);
					}
				}
					for(r=0; r<n; r++) {
						if(s[r]==mag) {
							printf("\n\n %d",r);
						}
					}
				printf("\n\n         mag: %d",mag);
				printf("\n\n indice riga: %d",imag+1);
				printf("\n\n");
			}
			break;
		}

		

	} while(sw!=4);
  
}