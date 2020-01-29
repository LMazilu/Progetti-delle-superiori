#include<iostream>
#include<conio2.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
 int x,y,a,c;
 a=0;
 
 SetConsoleTitle("Ascii corrispondente al numero");
   
   
   do{ 
       system("cls"); 
       
       textcolor(LIGHTGREEN);  
       
       gotoxy(25,1);
       printf("Ascii corrispondente al numero");
       
       gotoxy(10,5);
       printf("Inserisci il numero da trasformare in ascii: ");
       scanf("%d",&a);
       
     
       }while(a>255 && a<=0);

       gotoxy(10,9);
       printf("Il numero trasformato in codice ascii e': %c",a);

getch();
}

