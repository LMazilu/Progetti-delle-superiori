#include<iostream>
#include<conio2.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<math.h>

int main() {
	int const lato=10,area=11,perimetro=12;
	int scelta,lc,i,ang1,ang2,ang3,ang4,orr,vert,X,Y,orr1,vert1,nq;
	char risp;
	float Vet1[lato],Vet2[area],Vet3[perimetro];
	i=1;


	ang1 = 201;
	ang2 = 187;
	ang3 = 188;
	ang4 = 200;
	orr  = 205;
	vert = 186;
	do {

		do {
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
// Menu     *******************************************************
			textcolor(14);
			gotoxy(20,2);
			printf("Calcolo dell'area e perimetro di un quadrato");
			gotoxy(20,5);
			printf("1-Carica i lati");
			gotoxy(20,7);
			printf("2-Calcola l'area");
			gotoxy(20,9);
			printf("3-Calcola il perimetro");
			gotoxy(20,11);
			printf("4-Visualizza i dati");
			gotoxy(20,13);
			printf("5-Esci");
			gotoxy(20,15);
			printf("Seleziona l'opzione desiderata: ");
			gotoxy(52,15);
			printf("                ");
			gotoxy(52,15);
			fflush(stdin);
			scanf("%d",&scelta);
		} while(scelta<1 || scelta>5);

		switch (scelta) {


			case 1: {
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

				textcolor(14);
				gotoxy(31,2);
				printf("Lati dei quadrati");

				do {
					gotoxy(10,7);
					printf("Di quanti quadrati vuoi calcolare area e perimetro?: ");
					fflush(stdin);
					scanf("%d",&nq);
					gotoxy(10,7);
					printf("                                                             ");

				} while(nq>lato);
				lc=1;
				for(i=1; i<=nq; i=i+1) {
					gotoxy(10,7);
					printf("                                                            ");
					gotoxy(10,7);
					printf("Hai scelto di calcolare %d quadrati",nq);
					gotoxy(20,9+i);
					printf("Immetti il lato del quadrato numero %d: ",i);
					scanf("%f",&Vet1[i]);


				}

			}
			break;

			case 2: {
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


				if(lc==1) {

					do {
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

						textcolor(14);
						gotoxy(31,2);
						printf("Area dei quadrati");

						gotoxy(20,8);
						printf("Di quale quadrato vuoi calcolare l'area?: ");
						fflush(stdin);
						scanf("%d",&i);
						gotoxy(20,8);
						printf("                                                              ");
					} while(i>nq);
					Vet2[i]=Vet1[i]*Vet1[i];
					gotoxy(20,10);
					printf("L'area del quadrato %d e' : %7.2f",i,Vet2[i]);
					gotoxy(5,18);
					printf("Selezionare l'opzione 4 dal menu per visualizzare gli altri quadrati.");
				}

				else {
					textcolor(14);
					gotoxy(31,2);
					printf("Area dei quadrati");
					gotoxy(20,10);
					printf("ALLARME!, Devi prima caricare il vettore!");

				}
				getch();
			}
			break;




			case 3: {
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


				if(lc==1) {

					do {
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

						textcolor(14);
						gotoxy(29,2);
						printf("Perimetro dei quadrati");



						gotoxy(20,8);
						printf("Di quale quadrato vuoi calcolare il perimetro?: ");
						fflush(stdin);
						scanf("%d",&i);
						gotoxy(20,8);
						printf("                                                              ");
					} while(i>nq);
					Vet3[i]=Vet1[i]*4;
					gotoxy(20,10);
					printf("Il perimetro del quadrato %d e' : %7.2f",i,Vet3[i]);
					gotoxy(5,18);
					printf("Selezionare l'opzione 4 dal menu per visualizzare gli altri quadrati.");
				} else {
					textcolor(14);
					gotoxy(29,2);
					printf("Perimetro dei quadrati");
					gotoxy(20,10);
					printf("ALLARME!, Devi prima caricare il vettore!");

				}

				getch();
			}
			break;


			case 4: {
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
				} while(Y>=3);




				textcolor(14);
				gotoxy(34,2);
				printf("Tabella");


				for(i=1; i<=nq; i=i+1) {
					Vet3[i]=Vet1[i]*4;
				}
				for (i=1; i<=nq; i=i+1) {
					Vet2[i]=Vet1[i]*Vet1[i];
				}


				if(lc==1) {

					gotoxy(13,5);
					printf("LATO");
					gotoxy(38,5);
					printf("AREA");
					gotoxy(61,5);
					printf("PERIMETRO");

					X=10;


					for(i=1,Y=7; i<=nq; i=i+1,Y=Y+2) {
						gotoxy(X,Y);
						printf("%7.2f",Vet1[i]);
					}

					X=35;


					for(i=1,Y=7; i<=nq; i=i+1,Y=Y+2) {
						gotoxy(X,Y);
						printf("%7.2f",Vet2[i]);
					}


					X=60;

					for(i=1,Y=7; i<=nq; i=i+1,Y=Y+2) {
						gotoxy(X,Y);
						printf("%7.2f",Vet3[i]);
					}

				}


				else {
					gotoxy(20,10);
					printf("ALLARME!, Devi prima caricare il vettore!");

				}
				getch();
			}
			break;




			case 5: {
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
				} while(Y>=3);




				textcolor(14);
				gotoxy(34,2);
				printf("Tabella");

				textcolor(11);
				gotoxy(3,6);
				printf("  _______ _                 _                        ");
				gotoxy(3,7);
				printf(" |__   __| |               | |                       ");
				gotoxy(3,8);
				printf("    | |  | |__   __ _ _ __ | | __  _   _  ___  _   _ ");
				gotoxy(3,9);
				printf("    | |  | '_ \\ / _` | '_ \\| |/ / | | | |/ _ \\| | | |");
				gotoxy(3,10);
				printf("    | |  | | | | (_| | | | |   <  | |_| | (_) | |_| |");
				gotoxy(3,11);
				printf("    |_|  |_| |_|\\__,_|_| |_|_|\\_\\  \\__, |\\___/ \\__,_|");
				gotoxy(3,12);
				printf("                                    __/ |            ");
				gotoxy(3,13);
				printf("                                   |___/             ");
				textcolor(14);
				gotoxy(7,16);
				printf("Grazie per aver utilizzato il programma");
				gotoxy(7,18);
				printf("Speriamo di rivederti presto!");

				do {

					gotoxy(41,20);
					printf("            ");
					gotoxy(7,20);
					printf("Sei sicuro di voler uscire? (s/n) ");
					fflush(stdin);
					scanf("%c",&risp);
				} while(risp!='s'&&risp!='S'&&risp!='n'&&risp!='N');
				if(risp == 'n' || risp == 'N') {
					scelta = 0;
				}


			}
			break;


		}
	} while(scelta!=5);
}



