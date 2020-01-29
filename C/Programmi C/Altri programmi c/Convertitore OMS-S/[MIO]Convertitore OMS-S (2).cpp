#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<iostream>

int main()
{
 int hour,min,sec,sectot;
 printf("Programma convertitore Ore/Minuti/Secondi in Secondi \n\n");
 system("PAUSE");
 system("CLS");
do
{
printf("Digitare il numero di ore [>0]: ");
scanf("%d",& hour);
system("CLS");
} while (hour < 0);
do
{
printf("Digitare il numero di minuti [>0][<60]: ");
scanf("%d",& min);
system("CLS");
} while ((min < 0) || (min >60));
do
{
printf("Digitare il numero di secondi [>0][<60]: ");
scanf("%d",& sec);
system("CLS");
} while ((sec < 0) || (sec > 60));
sectot = (hour*60*60) + (min*60) + sec;
printf("%d : %d : %d ------------------> ",hour,min,sec);
printf("%d \n\n",sectot);
system("PAUSE");
}


















































