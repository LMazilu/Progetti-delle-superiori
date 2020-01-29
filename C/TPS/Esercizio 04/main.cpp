#include <cstdlib>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
using namespace std;
int main() {
	int const k=100;
	int  sw, i, i0, n, t, st, mat[k][k],qm[k];
	srand(time(NULL));

	do {

		do {
			printf("  \n             Controllo quadrato magico\n\n");
			printf("   1) Caricamento matrice\n\n");
			printf("   2) Elaborazione quadrato magico\n\n");
			printf("   3) Visualizza binario\n\n");
			printf("   4) Esci\n\n\n\n");

			printf("       Inserisci la scelta: ");
			scanf("%d",&sw);
		} while(sw<1 || sw>4);
		switch(sw) {
			case 1: {
				do {
					printf("Digitare la grandezza della matrice: ");
					scanf("%d",&n);
				} while(n<1 || n>10);

				for(i=0; i<n; i++) {
					for(i0=0; i0<n; i0++) {
						t=rand()%10;
						mat[i][i0]=t;
					}
				}
			}
			break;
			case 2: {

				for(i=0; i<n; i++) {
					for(i0=0; i0<n; i0++) {
						qm[i]=qm[i]+mat[i][i0];
					}
				}

				for(i0=0; i0<n; i0++) {
					for(i=0; i<n; i++) {
						qm[i0+n]=qm[i0+n]+mat[i][i0];
					}
				}

				for(i=0; i<n; i++) {
					qm[n+n+1]=qm[n+n+1]+mat[i][i];
				}

				for(i0=n-1,i=0; i<n; i++,i0--) {
					qm[n+n+n+1]=qm[n+n+n+1]+mat[i][i0];
				}


				for(st=0,i=0; i<n+n+1,st=0; i++) {
					if(qm[i]!=qm[i+1]) {
						st=1;
					}
				}

			}
			break;

			case 3: {
				switch(st) {
					case 0: {
						printf("\n\n\n\n La matrice non e' un quadrato magico");
					}
					break;
					case 1: {
						printf("\n\n\n\n La matrice e' un quadrato magico");
					}
				}
				break;
			}
		}
	} while(sw!=4);

}

