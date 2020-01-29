#include<iostream>
#include<conio2.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
int scelta,caricato,comodo,ordinato,i,ang1,ang2,ang3,ang4,orr,vert,X,Y,orr1,vert1,n,s,li,ls,m,trovato,continuare,s1,i1,n1,s2,c3,s3,comodo1,unito,ordinato2,s4,s5,i2,x2;

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


int main() {


	int const N=5,M=5,U=M+N;

	char risp;
	float v[N],v2[M],v3[U],x,seq,seq2,x1,seq3;


	s=0;

	srand(time(0));



	caricato=0;
	ordinato=0;
	trovato=0;

	do {



		do {

			cornice();

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
			printf("5-Ricerca sequenziale");
			gotoxy(20,17);
			printf("6-Split&Merge");
			gotoxy(20,19);
			printf("7-Esci");
			gotoxy(20,21);
			printf("Immetti l'opzione desiderata: ");
			gotoxy(50,21);
			printf("                ");
			gotoxy(50,21);
			fflush(stdin);
			scanf("%d",&scelta);
		} while(scelta<1 || scelta>7);


		switch(scelta) {
			case 1: {
				do {
					cornice();
					textcolor(14);
					gotoxy(30,2);
					printf("Caricamento vettore");

					do {

						gotoxy(20,7);
						printf("1-Caricamento vettore 1");
						gotoxy(20,9);
						printf("2-Caricamento vettore 2");
						gotoxy(20,11);
						printf("3-Esci");
						gotoxy(20,21);
						printf("Immetti l'opzione desiderata: ");
						gotoxy(50,21);
						printf("                ");
						gotoxy(50,21);
						fflush(stdin);
						scanf("%d",&s1);
					} while(s1<1 || s1>3);

					switch(s1) {
						case 1: {

							do {
								cornice();
								textcolor(14);
								gotoxy(30,2);
								printf("Carica il vettore");
								gotoxy(10,7);
								printf("Da quanti valori e' composta la tua sequenza(massimo %d valori)?: ",N);
								fflush(stdin);
								scanf("%d",&n);
								gotoxy(10,7);
								printf("                                                                  ");

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
							do {
								cornice();
								textcolor(14);
								gotoxy(30,2);
								printf("Carica il vettore");
								gotoxy(10,7);
								printf("Da quanti valori e' composta la tua sequenza(massimo %d valori)?: ",M);
								fflush(stdin);
								scanf("%d",&n1);
								gotoxy(10,7);
								printf("                                                                  ");

							} while(n1>M);
							caricato=1;
							for(i1=1; i1<=n1; i1=i1+1) {
								gotoxy(10,7);
								printf("                                                            ");
								gotoxy(10,7);
								printf("Hai scelto di calcolare %d valori",n1);
								gotoxy(20,9+i1);
								printf("Immetti il valore numero %d: ",i1);
								scanf("%f",&v2[i1]);
							}
							c3=1;
						}
						break;
					}
				} while(s1!=3);
			}
			break;

			case 2: {
				do {
					cornice();
					textcolor(14);
					gotoxy(30,2);
					printf("Visualizzazione vettore");

					do {

						gotoxy(20,7);
						printf("1-Visualizzazione vettore 1");
						gotoxy(20,9);
						printf("2-Visualizzazione vettore 2");
						gotoxy(20,11);
						printf("3-Visualizzazione vettore unione");
						gotoxy(20,13);
						printf("4-Esci");
						gotoxy(20,21);
						printf("Immetti l'opzione desiderata: ");
						gotoxy(50,21);
						printf("                ");
						gotoxy(50,21);
						fflush(stdin);
						scanf("%d",&s2);
					} while(s2<1 || s2>4);

					switch(s2) {
						case 1: {
							cornice();
							textcolor(14);
							gotoxy(30,2);
							printf("Visualizzazione vettore");
							if(caricato==1) {

								X=13;

								for(i=1,Y=5; i<=n; i=i+1,Y=Y+2) {
									gotoxy(X,Y);
									printf("Il valore numero %d e' %7.2f",i,v[i]);
								}

							} else {
								cornice();
								textcolor(14);
								gotoxy(30,2);
								printf("Visualizzazione vettore");
								gotoxy(20,10);
								printf("ALLARME!, Devi prima caricare il vettore!");
							}
							getch();
						}
						break;
						case 2: {
							cornice();
							textcolor(14);
							gotoxy(30,2);
							printf("Visualizzazione vettore");
							if(c3==1) {

								X=13;

								for(i1=1,Y=5; i1<=n1; i1=i1+1,Y=Y+2) {
									gotoxy(X,Y);
									printf("Il valore numero %d e' %7.2f",i1,v2[i1]);
								}

							} else {
								if(c3==0) {
									cornice();
									textcolor(14);
									gotoxy(30,2);
									printf("Visualizzazione vettore");
									gotoxy(20,10);
									printf("ALLARME!, Devi prima caricare il vettore!");
								}
							}
							getch();
						}
						break;


						case 3: {

							cornice();
							textcolor(14);
							gotoxy(30,2);
							printf("Visualizzazione vettore");
							if(unito=1) {

								X=13;

								for(i2=0,Y=5; i2<n+n1; i2=i2+1,Y=Y+2) {
									gotoxy(X,Y);
									printf("Il valore numero %d e' %7.2f",i2+1,v3[i2]);
								}

							} else {
								cornice();
								textcolor(14);
								gotoxy(30,2);
								printf("Visualizzazione vettore");
								gotoxy(20,10);
								printf("ALLARME!, Devi prima unire i vettori!");
							}
							getch();
						}
						break;
					}
				} while(s2!=4);
			}
			break;
			case 3: {

				cornice();

				textcolor(14);
				gotoxy(34,2);
				printf("Valori ordinati");


				if(caricato==1 && c3==1) {
					for(s=1; s<n; s=s+1) {
						for(i=1; i<=n-s; i=i+1) {
							if(v[i]>v[i+1]) {
								comodo=v[i];
								v[i]=v[i+1];
								v[i+1]=comodo;
							}
						}
					}
					for(s3=1; s3<n1; s3=s3+1) {
						for(i1=1; i1<=n1-s; i1=i1+1) {
							if(v2[i1]>v2[i1+1]) {
								comodo1=v2[i1];
								v2[i1]=v2[i1+1];
								v2[i1+1]=comodo1;
							}
						}
					}

					X=13;



					gotoxy(20,5);
					printf("I valori sono stati ordinati!");
					ordinato2=1;
					ordinato=1;
				}



				else {
					cornice();

					textcolor(14);
					gotoxy(37,2);
					printf("Ordinamento");

					gotoxy(20,10);
					printf("ALLARME!, Devi prima caricare il vettore!");

				}

				getch();
			}
			break;


			case 4: {


				do {
					cornice();
					textcolor(14);
					gotoxy(30,2);
					printf("Ricerca dicotomica");
					gotoxy(20,7);
					printf("1-Ricerca vettore 1");
					gotoxy(20,9);
					printf("2-Ricerca vettore 2");
					gotoxy(20,11);
					printf("3-Ricerca vettore unione");
					gotoxy(20,13);
					printf("4-Esci");
					gotoxy(20,21);
					printf("Immetti l'opzione desiderata: ");
					gotoxy(50,21);
					printf("                ");
					gotoxy(50,21);
					fflush(stdin);
					scanf("%d",&s4);
				} while(s4<1 || s4>4);

				switch(s4) {
					case 1: {

						gotoxy(20,5);
						if(caricato==1 && ordinato==1) {
							textcolor(14);
							printf("Quale valore vuoi cercare?");
							gotoxy(48,5);
							scanf("%f",&x);
							li=0;
							ls=N-1;
							trovato=0;
							continuare=1;
							do {
								m=(li+ls)/2;
								if(x==v[m]) {
									trovato=1;
									continuare=0;
								} else {
									if(x>v[m]) {
										li=m+1;
									} else {
										ls=m-1;
									}
									if(li>ls) {
										continuare=0;
									}
								}
							} while(continuare==1);
						} else {
							if(caricato==0) {



								cornice();
								textcolor(14);

								gotoxy(30,2);
								printf("Ricerca dicotomica");

								gotoxy(20,12);
								printf("ALLARME!, Devi prima caricare il vettore!");
								getch();
							} else {
								if(ordinato==0) {

									cornice();
									textcolor(14);
									gotoxy(30,2);
									printf("Ricerca dicotomica");


									gotoxy(20,10);
									printf("ALLARME!, Devi prima ordinare il vettore!");
									getch();
								}
							}


						}
						if(trovato==1 && ordinato==1) {

							cornice();


							textcolor(14);
							gotoxy(30,2);
							printf("Ricerca dicotomica");
							gotoxy(20,10);
							printf("L' elemento e' presente nella posizione %d         ",m);
							getch();
						} else {
							if(trovato==0 && ordinato==1) {
								cornice();

								gotoxy(20,15);
								printf("L'elemento non e' presente");
								getch();
							}
						}

					}
					break;
//***********************************************************************************************
					case 2: {

						if(c3==1 && ordinato2==1) {
							textcolor(14);
							printf("Quale valore vuoi cercare?");
							gotoxy(48,5);
							scanf("%f",&x);
							li=0;
							ls=M-1;
							trovato=0;
							continuare=1;
							do {
								m=(li+ls)/2;
								if(x==v2[m]) {
									trovato=1;
									continuare=0;
								} else {
									if(x>v2[m]) {
										li=m+1;
									} else {
										ls=m-1;
									}
									if(li>ls) {
										continuare=0;
									}
								}
							} while(continuare==1);
						} else {


							if(c3==0) {

								cornice();

								gotoxy(30,2);
								printf("Ricerca dicotomica");

								gotoxy(20,12);
								textcolor(15);
								printf("ALLARME!, Devi prima caricare il vettore!");
							} else {

								if(ordinato2==0) {
									cornice();

									gotoxy(30,2);
									printf("Ricerca dicotomica");


									gotoxy(20,10);
									textcolor(15);
									printf("ALLARME! Devi prima ordinare il vettore!");
								}
							}

						}
						if(trovato==1 && ordinato2==1) {

							cornice();

							gotoxy(30,2);
							printf("Ricerca dicotomica");
							gotoxy(20,10);
							printf("L' elemento e' presente nella posizione %d         ",m);
						} else {
							if(trovato==0 && ordinato2==1) {
								cornice();

								gotoxy(20,15);
								printf("L'elemento non e' presente");
							}

						}
						getch();
					}
					break;

					case 3: {

						if(unito=1) {
							printf("Quale valore vuoi cercare?");
							gotoxy(48,5);
							scanf("%f",&x2);
							li=0;
							ls=N-1;
							trovato=0;
							continuare=1;
							do {
								m=(li+ls)/2;
								if(x2==v3[i2]) {
									trovato=1;
									continuare=0;
								} else {
									if(x2>v3[i2]) {
										li=m+1;
									} else {
										ls=m-1;
									}
									if(li>ls) {
										continuare=0;
									}
								}
							} while(continuare==1);
						} else {

							if(unito=0) {

								cornice();

								gotoxy(30,2);
								printf("Ricerca dicotomica");

								gotoxy(20,12);
								printf("ALLARME!, Devi prima unire i vettori!");
							}

						}
						if(trovato==1) {

							cornice();

							gotoxy(30,2);
							printf("Ricerca dicotomica");
							gotoxy(20,10);
							printf("L' elemento e' presente nella posizione %d         ",m);
						} else {
							if(trovato==0) {
								cornice();

								gotoxy(20,15);
								printf("L'elemento non e' presente");
							}

						}
					}
					break;
					getch();

				}
			}
			break;

			case 5: {
				do {
					cornice();
					textcolor(14);
					gotoxy(30,2);
					printf("Ricerca sequenziale");
					gotoxy(20,7);
					printf("1-Ricerca vettore 1");
					gotoxy(20,9);
					printf("2-Ricerca vettore 2");
					gotoxy(20,11);
					printf("3-Ricerca vettore unione");
					gotoxy(20,13);
					printf("4-Esci");
					gotoxy(20,21);
					printf("Immetti l'opzione desiderata: ");
					gotoxy(50,21);
					printf("                ");
					gotoxy(50,21);
					fflush(stdin);
					scanf("%d",&s5);
				} while(s5<1 || s5>4);

				switch(s5) {

					case 1: {
						trovato=0;

						cornice();
						gotoxy(20,10);
						textcolor(14);
						if(caricato==1) {


							gotoxy(20,5);
							printf("Quale valore vuoi cercare?");
							fflush(stdin);
							scanf("%f",&seq);
							continuare=1;


							if (ordinato==0) {
								for (i=1; i<=n&&trovato==0; i++) {
									if(seq==v[i]) {
										trovato=1;

									}
								}
							}
							if (ordinato==1) {
								for(i=1; i<=n&&continuare==1; i++) {
									if (seq<v[i]) {
										continuare=0;
									}
									if(seq==v[i]) {
										trovato=1;
										continuare=0;
									}
								}
							}

							if (trovato==1) {
								cornice();
								textcolor(14);

								gotoxy(20,5);
								printf("L'elemento %7.2f e' presente nella %d posizione",seq,i-1);
							} else {

								cornice();
								textcolor(15);

								gotoxy(20,5);
								printf("L'elemento %7.2f non e' presente nella sequenza.",seq);
							}
						}
						if(caricato==0) {
							cornice();
							textcolor(14);

							gotoxy(20,5);
							printf("Devi prima caricare il vettore!");
						}
					}
					break;
					/////////////////////////////////////////////////////////////////////////////////////////////////////////////
					case 2: {
						seq2=0;
						trovato=0;
						cornice();
						gotoxy(20,10);
						textcolor(14);
						if(c3==1) {


							gotoxy(20,5);
							printf("Quale valore vuoi cercare?");
							fflush(stdin);
							scanf("%f",&seq2);
							continuare=1;


							if (ordinato2==0) {
								for (i1=1; i1<=n1&&trovato==0; i1++) {
									if(seq2==v2[i1]) {
										trovato=1;

									}
								}
							}
							if (ordinato2==1) {
								for(i1=1; i1<=n1&&continuare==1; i1++) {
									if (seq2<v2[i1]) {
										continuare=0;
									}
									if(seq2==v2[i1]) {
										trovato=1;
										continuare=0;
									}
								}
							}

							if (trovato==1) {
								cornice();
								textcolor(14);

								gotoxy(20,5);
								printf("L'elemento %7.2f e' presente nella %d posizione",seq2,i1-1);
							} else {

								cornice();

								gotoxy(20,5);
								printf("L'elemento %7.2f non e' presente nella sequenza.",seq2);
							}
						}
						if(c3==0) {
							cornice();
							textcolor(14);

							gotoxy(20,5);
							printf("Devi prima caricare il vettore!");
						}

					}
					break;
				}
				getch();

			}
			break;


// ***************Case 6***********************************

			case 6: {
				cornice();

				textcolor(14);
				gotoxy(34,2);
				printf("Merge&Split");

				if(c3==1 && caricato==1) {


					for(i=0 , i1=0 , i2=0; i<N && i1<N ; i2++) {
						if (v[i]<v2[i1]) {
							v3[i2]=v[i];
							i++;
						} else {
							v3[i2]=v2[i1];
							i1++;
						}
					}
					if(i==N) {
						do {
							v3[i2]=v2[i1];
							i2++;
							i1++;
						} while(i1<M);
					} else {
						do {
							v3[i2]=v[i];
							i2++;
							i++;
						} while(i<N);
					}
					gotoxy(20,5);
					printf("I vettori sono stati uniti!");
					unito=1;
				} else {
					gotoxy(20,5);
					printf("Devi prima caricare ENTRAMBI i vettori!");
				}
				getch();

			}
			break;

			case 7: {
				cornice();




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

	} while(scelta!=7);
}

