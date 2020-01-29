#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<windows.h>

int main()
{
    char risp;
    float s, v, f;
    do{
    system("cls");
                  printf("\n programma per calcolare lo spazio percorso da una macchina in frenata");
    do { printf("\n \n inserire la velocita' a cui stava andando la macchina: ");
         scanf("%f", &v);    } while (v <= 0);
do { 
printf("\n    Asfalto ruvido: 1");
printf("\n    Asfalto liscio: 2");
printf("\n   Asfalto bagnato: 3");
printf("\nAsfalto ghiacciato: 4");
printf("\n\ninserire l'attrito a seconda dell'asfalto: ");
scanf("%f", &f); } while (f!=1 && f!=2 && f!=3 && f!=4);
s= (v*v) / (250*f);
printf("\n \n Lo spazio percorso dalla macchina e' di %7.2f m", s);
printf("\n \n Grazie per aver utilizzato il programma\n\n");
system("PAUSE");
do { printf("\nvuoi ripetere? (s/n)");
fflush(stdin);
scanf("%c", &risp); } while (risp != 's' && risp != 'n' && risp != 'S' && risp != 'N');} while (risp =='S' || risp =='s');}
