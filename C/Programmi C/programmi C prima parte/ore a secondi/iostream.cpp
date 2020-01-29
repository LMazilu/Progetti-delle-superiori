#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<windows.h>

int main()
{
    char risp;
    int S, s, m, h;
   do{
	   system("cls");
    printf("convertire il tempo da ore, minuti, secondi a secondi.");
    do {printf("\n inserisci il tempo in ore: ");
    scanf("%d",&h);}
    while (h<0);
    do {printf("\n inserisci il tempo in minuti: ");
    scanf("%d",&m);}
    while (m<0);
    do {printf("\n inserisci il tempo in secondi: ");
    scanf("%d",&S);}
    while (S<0);
    s=S+(m*60)+(h*3600);
    {printf("\n il tempo equivale a %d secondi",s);};
    printf("\n\n Grazie per aver utilizzato questo programma\n \n");
   system("\nPAUSE");
do { printf("\nvuoi ripetere? (s/n)");
		fflush(stdin);
scanf("%c", &risp); } while (risp != 's' && risp != 'n' && risp != 'S' && risp != 'N');} while (risp =='S' || risp =='s');}
