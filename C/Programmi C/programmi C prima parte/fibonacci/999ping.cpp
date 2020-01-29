#include<iostream>
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio2.h>

int main()
{
int a,b,c,ct,n;
char risp;
do{
    system("cls");
gotoxy(25,1);
textcolor(14);
printf("PROGRAMMA PER LA SERIE DI FIBONACCI");
gotoxy(5,5);
printf("scegli il numero di valori di fibonacci: ");

do 
{
scanf("%d",&n);
} while(n<2);
printf("\n\ni valori sono: \n");


          printf("\n0 1 ");
       
a=0;
b=1;
c=0;
ct=2;
 
          do{
               c=a+b;
               printf("%d ",c);
          a=b;
          b=c;
          ct++;
          } while(ct<n);
          getch();

         do{
           
   gotoxy(1,20);
   printf("Vuoi ripetere il programma? (S/N):             ");
   gotoxy(36,20);
   fflush(stdin);
   scanf("%c",&risp);
   }while(risp!='s'&&risp!='S'&&risp!='n'&&risp!='N');


}while(risp=='s'||risp=='S');





}
