#include<iostream>
#include<conio2.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int main() {
	int const n=4;
	int scelta,tc,i,ang1,ang2,ang3,ang4,orr,vert,X,Y,orr1,vert1;
	float V[n],tmin,tmax,media;
	char risp;

	ang1 = 201;
	ang2 = 187;
	ang3 = 188;
	ang4 = 200;
	orr  = 205;
	vert = 186;

	tc=0;
	i=0;




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
			gotoxy(34,2);
			printf("Temperature");
			gotoxy(20,5);
			printf("1-Carica Temperature");
			gotoxy(20,7);
			printf("2-Visualizza tutte le temperature");
			gotoxy(20,9);
			printf("3-Visualizza temperatura ad un ora specifica");
			gotoxy(20,11);
			printf("4-Ricerca la temperatura minima");
			gotoxy(20,13);
			printf("5-Ricerca la temperatura massima");
			gotoxy(20,15);
			printf("6-Media delle temperature");
			gotoxy(20,17);
			printf("7-Esci");
			gotoxy(20,19);
			printf("Seleziona l'opzione desiderata: ");
			gotoxy(52,19);
			printf("                ");
			gotoxy(52,19);
			fflush(stdin);
			scanf("%d",&scelta);
		} while(scelta<1 || scelta>7);
// Switch
		switch(scelta) {

// case 1    *****************************************************************************************
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
				gotoxy(34,2);
				printf("Temperature");
				Y=5;
				tc=1;
				do {
					for(i=0; i<18; i=i+1) {
						gotoxy(6,5+i);
						printf("Temperatura alle ore  %d: ",i);
						scanf("%f",&V[i]);
					}
				} while(i>18);


				for(i=18; i<n; i=i+1) {
					gotoxy(50,Y);
					printf("Temperatura alle ore %d: ",i);
					scanf("%f",&V[i]);
					Y=Y+1;
				}

				media=0;
				tmin=V[0];
				tmax=V[0];
			}
			break;
//case 2  * *******************************************************************************
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



				textcolor(14);
				gotoxy(34,2);
				printf("Temperature");

				if(tc==1) {
					Y=5;
					do {

						for(i=0; i<18; i=i+1) {

							gotoxy(5,Y);
							printf("Temperatura dell'ora %d= %7.2f",i,V[i]);
							Y=Y+1;
						}
					} while(i<18);
					Y=5;
					for(i=18; i<n; i=i+1) {

						gotoxy(40,Y);
						printf("Temperatura dell'ora %d= %7.2f",i,V[i]);
						Y=Y+1;
					}

				} else {
					gotoxy(20,10);
					printf("ALLARME!, Devi prima caricare il vettore!");

				}

				getch();



			}
			break;
//case 3    ******************************************************************************
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

				textcolor(14);
				gotoxy(34,2);
				printf("Temperature");




				if(tc==1) {

					gotoxy(20,5);
					printf("Inserisci l'ora che vuoi visualizzare: ");
					scanf("%d",&i);
					gotoxy(20,7);
					printf("La temperatura alle ore %d e' :%7.2f ",i,V[i]);
				} else {
					gotoxy(20,10);
					printf("ALLARME!, Devi prima caricare il vettore!");




				}
				gotoxy(20,15);
				printf("premere un tato qualsiasi per tornare al menu'.");
				getch();
			}
			break;
//case 4    ************************************************************************
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
				gotoxy(34,2);
				printf("Temperature");

				if(tc==1) {
					for(i=1; i<n; i=i+1) {

						if (V[i]<tmin) {
							tmin=V[i];
						}
					}
					gotoxy(20,5);
					printf("La temperatura minima e' %7.2f ",tmin);
				} else

				{
					gotoxy(20,10);
					printf("ALLARME!, Devi prima caricare il vettore!");



				}
				gotoxy(20,15);
				printf("premere un tato qualsiasi per tornare al menu'.");
				getch();
			}
			break;
//case 5    ***********************************************************************

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
				gotoxy(34,2);
				printf("Temperature");

				if(tc==1) {
					for(i=1; i<n; i=i+1) {

						if (V[i]>tmax) {
							tmax=V[i];
						}
					}
					gotoxy(20,5);
					printf("La temperatura massima e' %7.2f ",tmax);
				} else

				{
					gotoxy(20,10);
					printf("ALLARME!, Devi prima caricare il vettore!");




				}
				gotoxy(20,15);
				printf("premere un tato qualsiasi per tornare al menu'.");

				getch();
			}
			break;
			case 6: {
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
				gotoxy(34,2);
				printf("Temperature");

				if(tc==1) {
					for (i=0; i<n; i=i+1) {
						media=media+V[i];

					}
					media=media/n;
					gotoxy(20,5);
					printf("La media delle temperature e' %f ",media);



				}

				else

				{
					gotoxy(20,10);
					printf("ALLARME!, Devi prima caricare il vettore!");




				}
				gotoxy(20,15);
				printf("premere un tato qualsiasi per tornare al menu'.");
				getch();
			}
			break;
//case 7    ****************************************************************************************
			case 7: {
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
				printf("Temperature");

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



	} while(scelta!=7);

}




