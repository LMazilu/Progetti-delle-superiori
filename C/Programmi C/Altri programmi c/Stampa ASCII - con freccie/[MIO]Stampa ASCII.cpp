#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio2.h>

int main()
{
    int a,s,c,y,x;
    y = 0;
    x = 10;
    a = 0;
    s = 0;
    gotoxy(20,5);
    textcolor(15);
    srand(time(NULL));
    printf("Programma per la stampa dell'ASCII");
    getch();
    do{
            do{
										   s = 0;
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
                               a = 1;
							   x = 0;
                               y = 0;
                          do{
                            //c = rand()%16;    //Useful to use a random color for every character (using the variable 'c')
                            textcolor(15);
                            gotoxy(x,y);
							printf("%d: %c\n",a,a);
                            if(y == 24){
                                x = x + 7;
                                y = 0;
                            }
                            if(y != 24){
                            y = y + 1;
                            a = a + 1;}
                            Sleep(50);
                        }while (a < 256);
						getch();
                          }break;
                                 case 2:{
                                             textcolor(15);
                                             gotoxy(30,5);
                                             printf("Grazie e arrivederci");
                                             Sleep(2500);
                                         }break;
}
}while (s == 1);
}
