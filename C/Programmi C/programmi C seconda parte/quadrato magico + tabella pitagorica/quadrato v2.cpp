#include<iostream>
#include<conio2.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
int scelta,caricato,comodo,ordinato,i,ang1,ang2,ang3,ang4,orr,vert,X,Y,orr1,vert1,y,x,sommamagica,m,n1,scelta1;
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
	textcolor(10);
	gotoxy(X,Y);
	printf("%c", ang1);
	X=3;
	Y=2;
	do {
		textcolor(10);
		gotoxy(X,Y);
		printf("%c", orr);
		X=X+1;
		//	Sleep(10);
	} while(X<=78);

	X=79;
	Y=2;
	textcolor(10);
	gotoxy(X,Y);
	printf("%c", ang2);
	X=79;
	Y=3;
	do {
		textcolor(10);
		gotoxy(X,Y);
		printf("%c", vert);
		Y=Y+1;
		//		Sleep(10);
	} while(Y<=23);

	X=79;
	Y=24;
	textcolor(10);
	gotoxy(X,Y);
	printf("%c", ang3);
	X=78;
	Y=24;
	do {
		textcolor(10);
		gotoxy(X,Y);
		printf("%c", orr);
		X=X-1;
		//	Sleep(10);
	} while(X>=3);

	X=2;
	Y=24;
	textcolor(10);
	gotoxy(X,Y);
	printf("%c", ang4);
	X=2;
	Y=23;
	do {
		textcolor(10);
		gotoxy(X,Y);
		printf("%c", vert);
		Y=Y-1;
		//		Sleep(10);
	} while(Y>=3);
}

int main () {
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
	int  n=19,riga, colonna, numero=2, i=0, j=0, z;
	int matrice[n][n];

	cornice();
	do {

		do {

			cornice();

			textcolor(14);
			gotoxy(27,2);
			printf("Quadrato magico");
			gotoxy(20,7);
			printf("1-Seleziona la grandezza (DISPARI!)");
			gotoxy(20,9);
			printf("2-Visualizzazione il quadrato");
			gotoxy(20,11);
			printf("3-Visualizza la somma magica");
			gotoxy(20,13);
			printf("4-Tabella pitagorica");
			gotoxy(20,15);
			printf("5-Esci");

			gotoxy(20,21);
			printf("Immetti l'opzione desiderata: ");
			gotoxy(50,21);
			printf("                ");
			gotoxy(50,21);
			fflush(stdin);
			scanf("%d",&scelta);
		} while(scelta<1 || scelta>5);



		switch(scelta) {
			case 1: {
				do {
					cornice();
					textcolor(14);
					gotoxy(30,2);
					printf("Quadrato magico");

					gotoxy(10,13);
					printf("La grandezza e' al massimo 19x19, e il numero deve essere dispari!");
					gotoxy(10,7);
					printf("Seleziona la grandezza del quadrato :  ");
					fflush(stdin);
					scanf("%d",&n);
					gotoxy(10,7);
					printf("                                                                  ");


				} while(n>19 || n<3 || n%2==0);
			}
			break;

			case 2: {
				cornice();
				textcolor(14);
				gotoxy(30,2);
				printf("Quadrato magico");

				for (riga=0; riga<n; riga++) {
					for (colonna=0; colonna<n; colonna++) {
						matrice[riga][colonna]=0;
					}



					j=n/2;

					matrice[i][j]=1;




				}


				for (z=0; z<(n*n)-1; z++) {

					i--;
					j++;

					if (i<0)
						i=n-1;
					if (j>n-1)
						j=0;
					if (matrice[i][j]==0)
						matrice[i][j]=numero;
					else {
						i++;

						if (i>n-1)
							i=0;
						i++;
						if (i>n-1)
							i=0;
						j--;
						if (j<0)
							j=n-1;
						if (matrice[i][j]!=0)
							break;
						else
							matrice[i][j]=numero;
					}
					numero++;
				}



				gotoxy(2,4);
				x=4;
				y=4;

				for (i=0; i<n; i++,y=y+5) {
					for (j=0; j<n; j++,x=x+5) {
						gotoxy(x,y);
						printf("%d", matrice[i][j]);
					}
					x=4;

				}



				getch();


			}
			break;




			case 3: {
				cornice();
				textcolor(14);
				gotoxy(30,2);
				printf("Quadrato magico");

				sommamagica=(n*(n*n+1))/2;
				gotoxy(20,5);
				printf("La somma magica del quadrato %dx%d e': %d",n,n,sommamagica);
				getch();

			}
			break;

			case 4: {



				do {


					do {


						cornice();

						textcolor(14);
						gotoxy(27,2);
						printf("Tabella pitagorica");
						gotoxy(20,7);
						printf("1-Seleziona la grandezza");
						gotoxy(20,9);
						printf("2-Visualizzazione la tabella");
						gotoxy(20,11);
						printf("3-Esci");

						gotoxy(20,21);
						printf("Immetti l'opzione desiderata: ");
						gotoxy(50,21);
						printf("                ");
						gotoxy(50,21);
						fflush(stdin);
						scanf("%d",&scelta1);
					} while(scelta1<1 || scelta1>3);


					switch(scelta1) {
						case 1: {
							do {
								cornice();
								textcolor(14);
								gotoxy(30,2);
								printf("Tabella pitagorica");
								gotoxy(10,7);
								printf("Seleziona la grandezza della tabella :  ");
								fflush(stdin);
								scanf("%d",&n1);
								gotoxy(10,7);
								printf("                                                                  ");


							} while(n1>10 || n1<1 );
						}
						break;

						case 2: {

							cornice();
							textcolor(14);
							gotoxy(30,2);
							printf("Tabella pitagorica");

							riga=4;
							m=1;
							do {
								for(j=0, i=1, colonna=15; i<=n1; i++, colonna=colonna+5) {
									j=i*m;
									gotoxy(colonna,riga);
									printf("%d",j);


								}
								m=m+1;
								riga=riga+2;


							} while(m<=n1);
							getch();

						}
						break;
					}

				} while(scelta1!=3);



			}
			break;

		}
	} while(scelta!=5);
}
