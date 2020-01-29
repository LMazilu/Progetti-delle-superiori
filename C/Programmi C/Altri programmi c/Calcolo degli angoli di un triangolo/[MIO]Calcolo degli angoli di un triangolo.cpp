#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
int main()
{
    int a1,a2,a3;
    char risp;
    
    do{
    system("CLS");
    printf("Programma per il calcolo degli angoli \n\n");
    system("PAUSE");
    system("CLS");
    do
    {
       printf("Digitare il primo valore [>0]: ");
       scanf("%d",& a1);
           system("CLS");
    } while (a1 <= 0);
     do
    {
       printf("Digitare il secondo valore [>0]: ");
       scanf("%d",& a2);
           system("CLS");
    } while (a2 <= 0);
     do
    {
       printf("Digitare il terzo valore [>0]: ");
       scanf("%d",& a3);
           system("CLS");
    } while (a3 <= 0);
    printf("A = %d  B = %d  C = %d \n\n", a1, a2, a3);
    if(a1 + a2 + a3 == 180)
    {
     if(a1 == 60 && a2 == 60 && a3 == 60)
     {
          printf("I tre valori inseriti corrispondono agli angoli \n");
          printf("di un triangolo equiangolo \n\n");
     }
     else if (a1 == 90 || a2 == 90 || a3 == 90)
     {
          printf("I tre valori inseriti corrispondono agli angoli \n");
          printf("di un triangolo rettangolo \n\n");
     }
     else if (a1 > 90 || a2 > 90 || a3 > 90)
     {
          printf("I tre valori inseriti corrispondono agli angoli \n");
          printf("di un triangolo ottusangolo \n\n");
     }
     else if (a1 < 90 && a2 < 90 && a3 < 90)
     {
         printf("I tre valori inseriti corrispondono agli angoli \n");
         printf("di un triangolo acutangolo \n\n");
     }
    }
    else
    {
          printf("I tre valori inseriti non corrispondo \n");
          printf("agli angoli di un triangolo \n\n");
          
    }
    system("PAUSE");
    system("CLS");
    do{
       printf("Vuoi riprovare?  [s/n] --> ");
       fflush(stdin);
       scanf("%c", &risp);
       system("CLS");
      }while(risp != 's' && risp != 'S' && risp != 'n' && risp != 'N');
    }while(risp=='s'||risp=='S');
}
