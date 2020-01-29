#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<windows.h>
#include<math.h>
#include<conio2.h>

int main()
{
    int n, mom, dm, m, c, d, un;   //inizializzazione variabili
	char ans;
    do{
		textcolor(15);
				   	  do{                                    //inizio del programma
							system("cls");
                            gotoxy(20,1);
                            printf("Programma per stampare il numero in lettere");
						//	getch();
				
                                  	
                            gotoxy(20,5);
							printf("Inserire un numero da 1 a 10.000 ");
							gotoxy(18,10);
							printf("----------> ");
							scanf("%d",&n);
						//	system("cls");
						}while(n < 1 || n > 10000);
		//divisione delle cifre del numero
    
		m = n/1000;
		mom = n%1000;
		c = mom/100;
		mom = n%100;
		d = mom/10;
		mom = n%10;
		un = mom;
	//	system("cls");
     //    gotoxy(20,1);
     //    printf("Programma per stampare il numero in lettere");
		gotoxy(20,7);
        printf("Il numero e' --------> ");
        
        
		
                           
                           
     switch(m){         //switch case per le migliaia
		                case 1:{printf("mille");}break;
		                case 2:{printf("duemila");}break;
		                case 3:{printf("tremila");}break;
		                case 4:{printf("quattromila");}break;
		                case 5:{printf("cinquemila");}break;
		                case 6:{printf("seimila");}break;
		                case 7:{printf("settemila");}break;
		                case 8:{printf("ottomila");}break;
		                case 9:{printf("novemila");}break;
		                case 10:{printf("diecimila");}										
				}

     switch(c){  //switch case per le centinaia
					    case 1:{ printf("cento"); }break;
					    case 2:{ printf("duecento"); }break;
				        case 3:{
													printf("trecento");
												}break;
										case 4:{
													printf("quattrocento");
												}break;
										case 5:{
													printf("cinquecento");
												}break;
										case 6:{
													printf("seicento");
												}break;
										case 7:{
													printf("settecento");
												}break;
										case 8:{
													printf("ottocento");
												}break;
										case 9:{
													printf("novecento");
												}
									}
    switch(d){       //switch case per le decine
                     case 1:{ 
                                                            if(un == 0){         //per le decine funziona in questo modo
                                                                        printf("dieci");
                                                                    }
                                                            else if(un == 1){
                                                                            printf("undici");
                                                                        }
                                                            else if(un == 2){
                                                                            printf("dodici");
                                                                        }
                                                            else if(un == 3){
                                                                            printf("tredici");
                                                                        }
                                                            else if(un == 4){
                                                                            printf("quattordici");
                                                                        }
                                                            else if(un == 5){
                                                                            printf("quindici");
                                                                        }
                                                            else if(un == 6){
                                                                            printf("sedici");
                                                                        }
                                                            else if(un == 7){
                                                                            printf("diciasette");
                                                                        }
                                                            else if(un == 8){
                                                                            printf("diciotto");
                                                                        }
                                                            else if(un == 9){
                                                                            printf("diciannove");
                                                                        }
                                                        }break;
										case 2:{if(un == 1 || un ==8) printf("vent");else printf("venti");}break;
										case 3:{if(un == 1 || un ==8) printf("trent"); else printf("trenta");}break;
										case 4:{
													if(un == 1){                 //controllo per l'uno e l'otto
																printf("quarant");
															}
													else if(un == 8){
																	printf("quarant");
																}
													else{
															printf("quaranta");
														}
												}break;
										case 5:{
													if(un == 1){                    //controllo per l'uno e l'otto
																printf("cinquant");
															}
													else if(un == 8){
																	printf("cinquant");
																}
													else{
															printf("cinquanta");
														}
												}break;
										case 6:{                    
													if(un == 1){                  //controllo per l'uno e l'otto
																printf("sessant");
															}
													else if(un == 8){
																	printf("sessant");
																}
													else{
															printf("sessanta");
														}
												}break;
										case 7:{
													if(un == 1){                      //controllo per l'uno e l'otto
																printf("settant");
															}
													else if(un == 8){
																	printf("settant");
																}
													else{
															printf("settanta");
														}
												}break;
										case 8:{
													if(un == 1){                         //controllo per l'uno e l'otto
																printf("ottant");
															}
													else if(un == 8){
																	printf("ottant");
																}
													else{
															printf("ottanta");
														}
												}break;
										case 9:{             
													if(un == 1){                           //controllo per l'uno e l'otto
																printf("novant");
															}
													else if(un == 8){
																	printf("novant");
																}
													else{
															printf("novanta");
														}
												}
									}

                                   if (d!=1)
									switch(un){   //switch case per le unità

											    case 1:{ printf("uno"); }break;
                                                case 2:{ printf("due"); }break;
                                                case 3:{printf("tre");  }break;
                                                case 4:{ printf("quattro"); }break;
                                                case 5:{ printf("cinque"); }break;
                                                case 6:{ printf("sei"); }break;
                                                case 7:{ printf("sette"); }break;
                                                case 8:{  printf("otto");   }break;
                                                case 9:{ printf("nove"); }break;
                                                        
										}



 
	getch();
						do{       //controllo per ripetere il programma
						//	system("cls");
							gotoxy(20,24);
							printf("Vuoi riprovare? [S/N] --------> ");
							fflush(stdin);
							scanf("%c",&ans);
                            system("cls");
						}while(ans != 'n' and ans != 'N' and ans != 's' and ans != 'S');
					
		}while (ans == 's' || ans == 'S');
}
