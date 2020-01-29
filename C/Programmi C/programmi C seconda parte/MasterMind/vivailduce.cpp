#include<iostream>
#include<conio2.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int main() {
	int scelta,sceltadiff,C,DM,N,M,D,U,n1,n2,n3,n4,c1,c2,c3,c4,ang1,ang2,ang3,ang4,orr,vert,X,Y,orr1,vert1,gpg,gps,vite;
	char risp;

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
				Sleep(10);
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
				Sleep(10);
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
				Sleep(10);
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
				Sleep(10);
			} while(Y>=3);

			textcolor(14);
			gotoxy(34,2);
			printf("Mastermind");
			gotoxy(20,7);
			printf("1-Regole");
			gotoxy(20,9);
			printf("2-Gioca");
			gotoxy(20,11);
			printf("3-Esci");
			gotoxy(20,13);
			printf("Immetti l'opzione desiderata: ");
			gotoxy(50,13);
			printf("                ");
			gotoxy(50,13);
			fflush(stdin);
			scanf("%d",&scelta);
		} while(scelta<1 || scelta>3);


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

				gotoxy(30,2);
				printf("Regole del gioco");
				gotoxy(5,7);
				printf("1-Devi indovinare un numero composto da 4 cifre");
				gotoxy(5,9);
				printf("2-Hai a disposizione 5/10/15 tentativi ");
				gotoxy(5,11);
				printf("3-Il numero DEVE essere compreso tra 0000 e 1000 o 9999 ");
				gotoxy(5,13);
				printf("4-I vari numeri cambieranno a seconda della difficolta':'");
				gotoxy(5,15);
				textcolor(12);
				printf("Facile   =15 tentativi, numero compreso tra 0 e 1000");
				gotoxy(5,16);
				textcolor(15);
				printf("Normale  =10 tentativi, numero compreso tra 0 e 9999");
				gotoxy(5,17);
				textcolor(10);
				printf("Difficile=5  tentativi, numero compreso tra 0 e 9999");
				gotoxy(5,20);
				textcolor(14);
				printf("Premere un tasto qualsiasi per ritornare al menu.");
				getch();
			}
			break;


			case 2: {
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
					gotoxy(30,2);
					printf("Indovina il numero!");
					gotoxy(10,8);
					printf("1-Facile");
					gotoxy(10,10);
					printf("2-Normale");
					gotoxy(10,12);
					printf("3-Difficile");
					gotoxy(10,14);
					printf("Scegli la difficolta' a cui vuoi giocare : ");
					printf("                ");
					gotoxy(52,14);
					fflush(stdin);
					scanf("%d",&sceltadiff);
				} while(sceltadiff<1 || sceltadiff>3);


				switch(sceltadiff) {
					case 1: {


						n1=rand()%2;
						n2=rand()%10;
						n3=rand()%10;
						n4=rand()%10;

						if(n1==1) {
							n2=0;
							n3=0;
							n4=0;
						}
						vite=15;
						C=vite;


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
							gotoxy(30,2);
							printf("Indovina il numero!");
							gotoxy(15,7);
							printf("Hai a disposizione: %d tentativi",C);
							do {
								gotoxy(15,10);
								printf("Immetti un numero di quattro cifre: ");
								gotoxy(50,10);
								printf("                            ");
								gotoxy(50,10);
								fflush(stdin);
								scanf("%d",&N);
							} while(N<0 || N>1000);
							c1=N/1000;
							c2=(N%1000)/100;
							c3=(N%100)/10;
							c4=N%10;


							if(n1==c1) {
								gotoxy(10,13);
								printf("Indovinata prima cifra:   %d",c1);
							}
							if(n2==c2) {
								gotoxy(10,15);
								printf("Indovinata seconda cifra: %d",c2);
							}
							if(n3==c3) {
								gotoxy(10,17);
								printf("Indovinata terza cifra:   %d",c3);
							}
							if(n4==c4) {
								gotoxy(10,19);
								printf("Indovinata quarta cifra:  %d",c4);
							}


							if((n1*1000+n2*100+n3*10+n4)==N) {
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
								textcolor(11);
								gotoxy(3,6);
								printf(" _         _ ___________ _         _    _         _ ___________ __        _ ");
								gotoxy(3,7);
								printf("¦¦¦       ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦       ¦¦¦  ¦¦¦       ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦      ¦¦¦");
								gotoxy(3,8);
								printf("¦¦¦       ¦¦¦¦¦¯¯¯¯¯¯¯¦¦¦¦¦       ¦¦¦  ¦¦¦       ¦¦¦¯¯¯¯¦¦¦¯¯¯¯¦¦¦¦¦     ¦¦¦");
								gotoxy(3,9);
								printf("¦¦¦       ¦¦¦¦¦       ¦¦¦¦¦       ¦¦¦  ¦¦¦       ¦¦¦    ¦¦¦    ¦¦¦¦¦¦    ¦¦¦");
								gotoxy(3,10);
								printf("¦¦¦_______¦¦¦¦¦       ¦¦¦¦¦       ¦¦¦  ¦¦¦   _   ¦¦¦    ¦¦¦    ¦¦¦ ¦¦¦   ¦¦¦");
								gotoxy(3,11);
								printf("¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦       ¦¦¦¦¦       ¦¦¦  ¦¦¦  ¦¦¦  ¦¦¦    ¦¦¦    ¦¦¦  ¦¦¦  ¦¦¦");
								gotoxy(3,12);
								printf("¯¯¯¯¦¦¦¯¯¯¯¦¦¦       ¦¦¦¦¦       ¦¦¦  ¦¦¦ ¦¦¦¦¦ ¦¦¦    ¦¦¦    ¦¦¦   ¦¦¦ ¦¦¦");
								gotoxy(3,13);
								printf("    ¦¦¦    ¦¦¦       ¦¦¦¦¦       ¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦    ¦¦¦    ¦¦¦    ¦¦¦¦¦¦");
								gotoxy(3,14);
								printf("    ¦¦¦    ¦¦¦_______¦¦¦¦¦_______¦¦¦  ¦¦¦¦¦   ¦¦¦¦¦____¦¦¦____¦¦¦     ¦¦¦¦¦");
								gotoxy(3,15);
								printf("    ¦¦¦    ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦  ¦¦¦¦     ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦      ¦¦¦¦");
								gotoxy(3,16);
								printf("     ¯      ¯¯¯¯¯¯¯¯¯¯¯ ¯¯¯¯¯¯¯¯¯¯¯    ¯¯       ¯¯ ¯¯¯¯¯¯¯¯¯¯¯ ¯        ¯¯ ");
								textcolor(14);
								gotoxy(7,19);
								printf("Congratulazioni, hai vinto il videogioco!");
								gotoxy(7,21);
								printf("Premi un tasto qualsiasi per tornare al menu'.");



							}

							C=C-1;


							if(C==0) {
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
								textcolor(10);
								gotoxy(15,3);
								printf(" __   __            _                      ");
								gotoxy(15,5);
								printf(" \\ \\ / ___  _   _  | |   ___    ___    ___");
								gotoxy(15,7);
								printf("  \\ V / _ \\| | | | | |  / _ \\  / __|  / _ \\ ");
								       gotoxy(15,9);
								       printf("   | | (_) | |_| | | | | (_) | \\__ \\ |  __/");
								       gotoxy(15,11);
								       printf("   |_|\\___/ \\__,_| |_|  \\___/  |___/  \\___|");
								       textcolor(14);
								       gotoxy(5,17);
								       printf("Hai perso!");
								       gotoxy(5,19);
								       printf("Ritenta e sarai piu' fortunato.");
								       gotoxy(5,21);
								       printf("Premere un tasto qualsiasi per riprovare.");
								       C=vite;
								       N=n1*1000+n2*100+n3*10+n4;

							       }

								       getch();

							       } while((n1*1000+n2*100+n3*10+n4)!=N);




							       }
								       break;



								       case 2: {
								       n1=rand()%10;
								       n2=rand()%10;
								       n3=rand()%10;
								       n4=rand()%10;

								       vite=10;
								       C=vite;


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
								       gotoxy(30,2);
								       printf("Indovina il numero!");
								       gotoxy(8,5);
								       printf("Hai a disposizione: %d tentativi",C);
								       do {
								       gotoxy(3,9);
								       printf("Immetti un numero di quattro cifre: ");
								       gotoxy(40,9);
								       printf("                            ");
								       gotoxy(40,9);
								       fflush(stdin);
								       scanf("%d",&N);
							       } while(N<0 || N>9999);
								       c1=N/1000;
								       c2=(N%1000)/100;
								       c3=(N%100)/10;
								       c4=N%10;
								       gpg=0;
								       gps=0;

								       if(c1==n2 || c1==n3 || c1==n4) {
								       gps=gps+1;
							       }
								       if(c2==n1 || c2==n3 || c2==n4) {
								       gps=gps+1;
							       }
								       if(c3==n1 || c3==n2 || c3==n4) {
								       gps=gps+1;
							       }
								       if(c4==n1 || c1==n2 || c1==n3) {
								       gps=gps+1;
							       }
								       if(c1==n1) {
								       gpg=gpg+1;
							       }
								       if(c2==n2) {
								       gpg=gpg+1;
							       }
								       if(c3==n3) {
								       gpg=gpg+1;
							       }
								       if(c4==n4) {
								       gpg=gpg+1;
							       }




								       gotoxy(5,13);
								       printf("Cifre giuste al posto sbagliato:   %d !",gps);
								       gotoxy(5,15);
								       printf("Cifre giuste al posto giusto:   %d !",gpg);




								       if((n1*1000+n2*100+n3*10+n4)==N) {
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

								       textcolor(11);
								       gotoxy(3,6);
								       printf(" _         _ ___________ _         _    _         _ ___________ __        _ ");
								       gotoxy(3,7);
								       printf("¦¦¦       ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦       ¦¦¦  ¦¦¦       ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦      ¦¦¦");
								       gotoxy(3,8);
								       printf("¦¦¦       ¦¦¦¦¦¯¯¯¯¯¯¯¦¦¦¦¦       ¦¦¦  ¦¦¦       ¦¦¦¯¯¯¯¦¦¦¯¯¯¯¦¦¦¦¦     ¦¦¦");
								       gotoxy(3,9);
								       printf("¦¦¦       ¦¦¦¦¦       ¦¦¦¦¦       ¦¦¦  ¦¦¦       ¦¦¦    ¦¦¦    ¦¦¦¦¦¦    ¦¦¦");
								       gotoxy(3,10);
								       printf("¦¦¦_______¦¦¦¦¦       ¦¦¦¦¦       ¦¦¦  ¦¦¦   _   ¦¦¦    ¦¦¦    ¦¦¦ ¦¦¦   ¦¦¦");
								       gotoxy(3,11);
								       printf("¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦       ¦¦¦¦¦       ¦¦¦  ¦¦¦  ¦¦¦  ¦¦¦    ¦¦¦    ¦¦¦  ¦¦¦  ¦¦¦");
								       gotoxy(3,12);
								       printf("¯¯¯¯¦¦¦¯¯¯¯¦¦¦       ¦¦¦¦¦       ¦¦¦  ¦¦¦ ¦¦¦¦¦ ¦¦¦    ¦¦¦    ¦¦¦   ¦¦¦ ¦¦¦");
								       gotoxy(3,13);
								       printf("    ¦¦¦    ¦¦¦       ¦¦¦¦¦       ¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦    ¦¦¦    ¦¦¦    ¦¦¦¦¦¦");
								       gotoxy(3,14);
								       printf("    ¦¦¦    ¦¦¦_______¦¦¦¦¦_______¦¦¦  ¦¦¦¦¦   ¦¦¦¦¦____¦¦¦____¦¦¦     ¦¦¦¦¦");
								       gotoxy(3,15);
								       printf("    ¦¦¦    ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦  ¦¦¦¦     ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦      ¦¦¦¦");
								       gotoxy(3,16);
								       printf("     ¯      ¯¯¯¯¯¯¯¯¯¯¯ ¯¯¯¯¯¯¯¯¯¯¯    ¯¯       ¯¯ ¯¯¯¯¯¯¯¯¯¯¯ ¯        ¯¯ ");
								       textcolor(14);
								       gotoxy(7,19);
								       printf("Congratulazioni, hai vinto il videogioco!");
								       gotoxy(7,21);
								       printf("Premi un tasto qualsiasi per tornare al menu'.");



							       }


								       C=C-1;

								       if(C==0) {
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
								       textcolor(10);
								       gotoxy(15,3);
								       printf(" __   __            _                      ");
								       gotoxy(15,5);
								       printf(" \\ \\ / ___  _   _  | |   ___    ___    ___");
								       gotoxy(15,7);
								       printf("  \\ V / _ \\| | | | | |  / _ \\  / __|  / _ \\ ");
								       gotoxy(15,9);
								       printf("   | | (_) | |_| | | | | (_) | \\__ \\ |  __/");
								       gotoxy(15,11);
								       printf("   |_|\\___/ \\__,_| |_|  \\___/  |___/  \\___|");
								       textcolor(14);
								       gotoxy(5,17);
								       printf("Hai perso!");
								       gotoxy(5,19);
								       printf("Ritenta e sarai piu' fortunato.");
								       gotoxy(5,21);
								       printf("Premere un tasto qualsiasi per riprovare.");
								       C=vite;
								       N=n1*1000+n2*100+n3*10+n4;

							       }
								       getch();

							       } while((n1*1000+n2*100+n3*10+n4)!=N);

							       }
								       break;




									       case 3: {
								       n1=rand()%10;
								       n2=rand()%10;
								       n3=rand()%10;
								       n4=rand()%10;

								       vite=5;
								       C=vite;


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
								       gotoxy(30,2);
								       printf("Indovina il numero!");
								       gotoxy(8,5);
								       printf("Hai a disposizione: %d tentativi",C);
								       do {
								       gotoxy(3,9);
								       printf("Immetti un numero di quattro cifre: ");
								       gotoxy(40,9);
								       printf("                            ");
								       gotoxy(40,9);
								       fflush(stdin);
								       scanf("%d",&N);
							       } while(N<0 || N>9999);
								       c1=N/1000;
								       c2=(N%1000)/100;
								       c3=(N%100)/10;
								       c4=N%10;

								       gpg=0;
								       gps=0;


								       if(c1==n2 || c1==n3 || c1==n4) {
								       gps=gps+1;
							       }
								       if(c2==n1 || c2==n3 || c2==n4) {
								       gps=gps+1;
							       }
								       if(c3==n1 || c3==n2 || c3==n4) {
								       gps=gps+1;
							       }
								       if(c4==n1 || c1==n2 || c1==n3) {
								       gps=gps+1;
							       }
								       if(c1==n1) {
								       gpg=gpg+1;
							       }
								       if(c2==n2) {
								       gpg=gpg+1;
							       }
								       if(c3==n3) {
								       gpg=gpg+1;
							       }
								       if(c4==n4) {
								       gpg=gpg+1;
							       }




								       gotoxy(5,13);
								       printf("Cifre giuste al posto sbagliato:   %d !",gps);
								       gotoxy(5,14);
								       printf("Cifre giuste al posto giusto:   %d !",gpg);




								       if((n1*1000+n2*100+n3*10+n4)==N) {
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
								       textcolor(11);
								       gotoxy(3,6);
								       printf(" _         _ ___________ _         _    _         _ ___________ __        _ ");
								       gotoxy(3,7);
								       printf("¦¦¦       ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦       ¦¦¦  ¦¦¦       ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦      ¦¦¦");
								       gotoxy(3,8);
								       printf("¦¦¦       ¦¦¦¦¦¯¯¯¯¯¯¯¦¦¦¦¦       ¦¦¦  ¦¦¦       ¦¦¦¯¯¯¯¦¦¦¯¯¯¯¦¦¦¦¦     ¦¦¦");
								       gotoxy(3,9);
								       printf("¦¦¦       ¦¦¦¦¦       ¦¦¦¦¦       ¦¦¦  ¦¦¦       ¦¦¦    ¦¦¦    ¦¦¦¦¦¦    ¦¦¦");
								       gotoxy(3,10);
								       printf("¦¦¦_______¦¦¦¦¦       ¦¦¦¦¦       ¦¦¦  ¦¦¦   _   ¦¦¦    ¦¦¦    ¦¦¦ ¦¦¦   ¦¦¦");
								       gotoxy(3,11);
								       printf("¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦       ¦¦¦¦¦       ¦¦¦  ¦¦¦  ¦¦¦  ¦¦¦    ¦¦¦    ¦¦¦  ¦¦¦  ¦¦¦");
								       gotoxy(3,12);
								       printf("¯¯¯¯¦¦¦¯¯¯¯¦¦¦       ¦¦¦¦¦       ¦¦¦  ¦¦¦ ¦¦¦¦¦ ¦¦¦    ¦¦¦    ¦¦¦   ¦¦¦ ¦¦¦");
								       gotoxy(3,13);
								       printf("    ¦¦¦    ¦¦¦       ¦¦¦¦¦       ¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦    ¦¦¦    ¦¦¦    ¦¦¦¦¦¦");
								       gotoxy(3,14);
								       printf("    ¦¦¦    ¦¦¦_______¦¦¦¦¦_______¦¦¦  ¦¦¦¦¦   ¦¦¦¦¦____¦¦¦____¦¦¦     ¦¦¦¦¦");
								       gotoxy(3,15);
								       printf("    ¦¦¦    ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦  ¦¦¦¦     ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦      ¦¦¦¦");
								       gotoxy(3,16);
								       printf("     ¯      ¯¯¯¯¯¯¯¯¯¯¯ ¯¯¯¯¯¯¯¯¯¯¯    ¯¯       ¯¯ ¯¯¯¯¯¯¯¯¯¯¯ ¯        ¯¯ ");
								       textcolor(14);
								       gotoxy(7,19);
								       printf("Congratulazioni, hai vinto il videogioco!");
								       gotoxy(7,21);
								       printf("Premi un tasto qualsiasi per tornare al menu'.");



							       }


								       C=C-1;

								       if(C==0) {
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
								       textcolor(10);
								       gotoxy(15,3);
								       printf(" __   __            _                      ");
								       gotoxy(15,5);
								       printf(" \\ \\ / ___  _   _  | |   ___    ___    ___");
								       gotoxy(15,7);
								       printf("  \\ V / _ \\| | | | | |  / _ \\  / __|  / _ \\ ");
								       gotoxy(15,9);
								       printf("   | | (_) | |_| | | | | (_) | \\__ \\ |  __/");
								       gotoxy(15,11);
								       printf("   |_|\\___/ \\__,_| |_|  \\___/  |___/  \\___|");
								       textcolor(14);
								       gotoxy(5,17);
								       printf("Hai perso!");
								       gotoxy(5,19);
								       printf("Ritenta e sarai piu' fortunato.");
								       gotoxy(5,21);
								       printf("Premere un tasto qualsiasi per riprovare.");
								       C=vite;
								       N=n1*1000+n2*100+n3*10+n4;

							       }

								       getch();

							       } while((n1*1000+n2*100+n3*10+n4)!=N);

							       }
								       break;



							       }

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
								       gotoxy(7,20);
								       printf("Sei sicuro di voler uscire? (s/n) ");
								       fflush(stdin);
								       scanf("%c",&risp);
								       if(risp == 'n' || risp == 'N') {
								       scelta = 0;
							       }
								       while(risp!='s'&&risp!='S'&&risp!='n'&&risp!='N');

							       }
							       }

							       } while(scelta != 3);




							       }
