#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<windows.h>
#include<conio2.h>
#include<cstdlib>
#include<math.h>
#include<time.h> 

int main()                                   
{
   int COL, RIG, S;
   char ans;
                
                 
                           gotoxy(19,5);
                           textcolor(11);
                           printf("Programma per la locomozione delle scritte");
                           gotoxy(21,10);
                           textcolor(15);
                           system("pause");
                            do
								{
									do{
										   system ("cls");
										   gotoxy(25,5);
										   textcolor(10);
										   printf("Modalita':\n\n\n");
										   textcolor(15);
										   gotoxy(25,7);
										   printf("1) Rimbalzo in orizzontale \n\n");
										   gotoxy(25,9);
										   printf("2) Rimbalzo in verticale \n\n");
										   gotoxy(25,11);
										   printf("3) Rimbalzo a 45 gradi \n\n");
										   gotoxy(25,13);
										   printf("4) Uscire dal programma\n\n\n");
										   printf("Scegliere una modalita' di locomozione: ");
										   textcolor(12);
										   scanf("%d",&S);
										   system("cls");
										}
									while(S < 1 || S > 4);
                
                   if(S == 1)
                   {
                      textcolor(15);
                      COL = 1;
                      RIG = 12;
                      do{
						  do{
							gotoxy(COL,RIG);
							printf("CIAO");
							Sleep(20);
							COL = COL + 1;
							system("cls");
							}while((COL < 76)&&(!kbhit()));
						  do{
							COL = COL - 1;
							gotoxy(COL,RIG);
							printf("CIAO");
							Sleep(20);
							system("cls");
							}while((COL > 1)&&(!kbhit()));
                        }
					   while(!kbhit());
                    }
                   else if(S == 2)
                   {
                      textcolor(15);
                      COL = 38;
                      RIG = 12;
                      do{
						  do{
							gotoxy(COL,RIG);
							printf("CIAO");
							Sleep(20);
							RIG = RIG + 1;
							system("cls");
							}
						    while(RIG < 24);
						  do{
							gotoxy(COL,RIG);
							printf("CIAO");
							Sleep(20);
							RIG = RIG - 1;
							system("cls");
							}
							while(RIG > 1);
						}
					     while(!kbhit());
                   }
                   else if (S == 3)
                   {
                      textcolor(15);
                      COL = 1;
                      RIG = 12;
                      do{
						  do{
							gotoxy(COL,RIG);
							printf("CIAO");
							Sleep(20);
							COL = COL + 3;
							RIG = RIG - 1;
							system("cls");
							}
							while(RIG != 1);
						  do{
							gotoxy(COL,RIG);
							printf("CIAO");
							Sleep(20);
							COL = COL + 3;
							RIG = RIG + 1;
							system("cls");
							}
							while(COL < 70);
						  do{
							gotoxy(COL,RIG);
							printf("CIAO");
							Sleep(20);
							COL = COL - 3;
							RIG = RIG + 1;
							system("cls");
							}
							while(RIG != 24);
						  do{
							gotoxy(COL,RIG);
							printf("CIAO");
							Sleep(20);
							COL = COL - 3;
							RIG = RIG - 1;
							system("cls");
							}
							while(COL > 1);
                        }
						while(!kbhit());
                        }
                        else
                            {
                              system("CLS");
                              textcolor(15);
                              gotoxy(30,10);
                              printf("Grazie e arrivederci");
                              Sleep(2000);
							}
                   }
                   while(S!=4);

   
}    

   
