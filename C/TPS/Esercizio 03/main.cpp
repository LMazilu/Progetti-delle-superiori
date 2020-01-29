#include <cstdlib>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<limits.h>
using namespace std;


main() {
	int const j=100,k=100;
	int n,m,r,c,sw,mat[j][k],min[j],imin[k],azzerro;


	do {

		do {
			printf("  \n                Esercitazione sulle matrici\n\n");
			printf("   1) Caricamento matrice\n\n");
			printf("   2) Elaborazione calcolo\n\n");
			printf("   3) Visualizza valore minore\n\n");
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
				for(azzerro=0; azzerro<m; azzerro++) {

					min[azzerro]=INT_MAX;
				}
			}
			break;


			case 2: {
				for(c=0; c<m; c++) {
					for(r=0; r<n; r++) {

						if (mat[r][c]<=min[c]) {
							min[c]=mat[r][c];
							imin[c]=c;
						}

					}
				}


			}
			break;



			case 3: {
				for(c=0; c<m; c++) {
					printf("\n\n\n\n");
					printf("n minore col %d:     %d",c+1,min[c]);
					printf("\n\ni del minore col %d: %d",c+1,imin[c]);
				}


			}
			break;



		}

	} while(sw!=4);
}
