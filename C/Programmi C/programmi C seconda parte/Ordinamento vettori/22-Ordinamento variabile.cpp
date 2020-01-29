#include<iostream>
#include<conio2.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int main() {
	int const N=10;
	int scelta,caricato,comodo,ordinato,i,ang1,ang2,ang3,ang4,orr,vert,X,Y,orr1,vert1,n,s;
	char risp;
	float v[N];
	s=0;

	srand(time(0));
	ang1 = 201;
	ang2 = 187;
	ang3 = 188;
	ang4 = 200;
	orr = 205;
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

			textcolor(14);
			gotoxy(27,2);
			printf("Ordinamento di un vettore");
			gotoxy(20,7);
			printf("1-Caricamento vettore");
			gotoxy(20,9);
			printf("2-Visualizzazione vettore");
			gotoxy(20,11);
			printf("3-Ordinamento del vettore");
			gotoxy(20,13);
			printf("4-Ricerca dicotomica");
			gotoxy(20,15);
			printf("5-Ricerca sequenza");
			gotoxy(20,17);
			printf("6-Esci");
			gotoxy(20,19);
			printf("Immetti l'opzione desiderata: ");
			gotoxy(50,19);
			printf("                ");
			gotoxy(50,19);
			fflush(stdin);
			scanf("%d",&scelta);
		} while(scelta<1 || scelta>6);


		switch(scelta) {
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
				gotoxy(30,2);
				printf("Carica il vettore");
				do {
					gotoxy(10,7);
					printf("Da quanti valori e' composta la tua sequenza?: ");
					fflush(stdin);
					scanf("%d",&n);
					gotoxy(10,7);
					printf("                                                             ");

				} while(n>N);
				caricato=1;
				for(i=1; i<=n; i=i+1) {
					gotoxy(10,7);
					printf("                                                            ");
					gotoxy(10,7);
					printf("Hai scelto di calcolare %d valori",n);
					gotoxy(20,9+i);
					printf("Immetti il valore numero %d: ",i);
					scanf("%f",&v[i]);


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

				textcolor(14);
				gotoxy(34,2);
				printf("Valori non ordinati");




				if(caricato==1) {
					X=13;

					for(i=1,Y=5; i<=n; i=i+1,Y=Y+2) {
						gotoxy(X,Y);
						printf("Il valore numero %d e' %7.2f",i,v[i]);
					}
				} else {
					gotoxy(20,10);
					printf("ALLARME!, Devi prima caricare il vettore!");




				}
				gotoxy(20,20);
				printf("Premere un tato qualsiasi per tornare al menu'.");
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

				textcolor(14);
				gotoxy(34,2);
				printf("Valori ordinati");




				if(caricato==1) {
					for(s=1; s<n; s=s+1) {
						for(i=1; i<=n-s; i=i+1) {
							if(v[i]>v[i+1]) {
								comodo=v[i];
								v[i]=v[i+1];
								v[i+1]=comodo;
							}
						}
					}

					X=13;

					for(i=1,Y=5; i<=n; i=i+1,Y=Y+2) {
						gotoxy(X,Y);
						printf("Il valore numero %d e' %7.2f",i,v[i]);
					}
				}



				else {
					gotoxy(20,10);
					printf("ALLARME!, Devi prima caricare il vettore!");




				}
				gotoxy(20,20);
				printf("Premere un tato qualsiasi per tornare al menu'.");
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

	} while(scelta!=6);
}
