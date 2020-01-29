#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<windows.h>
#include<conio.h>
#include<math.h>
#include<conio2.h>

int main()
{
    int c,s,n0,n1,n2,co,a;
    char ch = '*';
                           srand(time(NULL));
                           gotoxy(19,5);
                           textcolor(11);
                           printf("Visione di un bel cielo stellato");
                           gotoxy(21,10);
                           textcolor(15);
                           getch();

								do{
                                    do{
                                           co = 0;
										   system ("cls");
										   gotoxy(25,5);
										   textcolor(10);
										   printf("Modalita':\n\n\n");
										   textcolor(15);
										   gotoxy(25,7);
										   printf("1) Visualizza \n\n");
										   gotoxy(25,9);
										   printf("2) Uscire dal programma \n\n\n");
										   gotoxy(25,12);
										   printf("Scegliere: ");
										   textcolor(12);
										   scanf("%d",&s);
										   system("cls");
										}
									while(s < 1 || s > 2);

									switch(s){
                                             case 1:{

                                                     do{
                                                     n0 = rand()%81;
                                                     n1 = rand()%25;
                                                     n2 = rand()%16;
                                                     gotoxy(n0,n1);
                                                     textcolor(n2);
                                                     printf("%c",ch);
                                                     co = co + 1;
                                                     } while(!kbhit());
                                                     do{
                                                  } while (!kbhit());
                                                  }break;
                                              case 2:{
                                                   gotoxy(30,5);
                                                   textcolor(15);
                                                   printf("Grazie e arrivederci");
                                                   Sleep(2500);
                                    }
         }
         }while(s == 1);
}
