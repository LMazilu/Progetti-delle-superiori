#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<iostream>
int main()
{
 int sec,min,hour,Rsec,Rmin;
 printf("Programma convertitore Secondi-Ore/Minuti/Secondi \n\n");
 system("PAUSE");
 system("CLS");
 do
 {
 printf("Digitare il numero dei secondi (> 0): ");
 scanf("%d",&sec);
 system("CLS");
 } while (sec < 0);
 min = sec/60;
 Rsec = sec%60;
 hour = min/60;
 Rmin = min%60;
 printf("%d ----------->  ",sec);
 printf(                                "%d : ",hour);
 printf(                                "%d : ",Rmin);
 printf(                                "%d  \n\n",Rsec);
 system("PAUSE");
 
}
