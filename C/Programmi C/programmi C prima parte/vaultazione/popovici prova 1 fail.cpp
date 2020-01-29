#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<iostream>

int main()
{
    char risp;
    float E, D, C, B, A, p;
do{
    system("cls");
printf("\nprogramma per determinare il livello di valutazione");
do{printf("\ninserisci il punteggio dello studente: ");
    scanf("%f",&p);
    } 
while(p<=0);
if(p<=40)
{printf("\nLo stundente ha preso la valutazione E");}
else{
     if(p>=41 && p<=60)
{printf("\nLo studente ha preso la valutazione D");}
else {
     if(p>=61 && p<=70)
{printf("\nLo studente ha preso la valutazione C");}
else {
     if(p>=71 && p<=85)
{printf("\nLo studente ha preso la valutazione B");}
else {
     if(p>=86 && p<=100)
{printf("\nLo studente ha preso la valutazione A");}

}
}
}
}
printf("\n \nGrazie per aver utilizzato il programma\n\n");
system("PAUSE");
do { printf("\nvuoi ripetere? (s/n)");
fflush(stdin);
scanf("%c", &risp); } while (risp != 's' && risp != 'n' && risp != 'S' && risp != 'N');} while (risp =='S' || risp =='s');}
