#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<iostream>

int main()
{
    char risp;
    int S, s, m, h;
    do{
        system("cls");
    printf("\n Programma per convertire il tempo da secondi a ore,minuti,secondi.");
    do
    {printf("\n \nInserisci il tempo in secondi: ");
    scanf("%d", &s);}
    while (s<=0);
m=s/60;
S=s%60;
h=m/60;
m=m%60;
printf("\n Il tempo equivale a %d ore ; %d minuti ; %d  secondi ", h,m,S );
printf("\n Grazie per aver utilizzato questo programma\n\n");
 system("\nPAUSE");
do { printf("\nvuoi ripetere? (s/n)");
		fflush(stdin);
scanf("%c", &risp); } while (risp != 's' && risp != 'n' && risp != 'S' && risp != 'N');} while (risp =='S' || risp =='s');}
