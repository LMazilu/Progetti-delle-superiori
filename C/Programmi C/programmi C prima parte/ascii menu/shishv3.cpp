#include<iostream>
#include<conio2.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
 int x,y,a,c,b,d,N;
 a=0;
 
 SetConsoleTitle("Ascii corrispondente al numero");
 
 
 do{

     
 do {
    system("cls");
    textcolor(14);
    gotoxy(19,1);
    printf("Programma per visualizzare la tabella ascii");
    gotoxy(20,7);
    printf("1-visualizza la tabella");
    gotoxy(20,9);
    printf("2-converti direttamente un numero in carattere");
    gotoxy(20,11);
    printf("3-esci");
     gotoxy(20,15);
    printf("Immetti l'opzione desiderata: ");
    scanf("%d",&N);
                      }while(N<1 && N>3);
    switch(N)
 { case 1:
           a=0;
 b=0;
 x=1;
 y=1;


    textcolor(WHITE); 
     system("cls");
do{ 
    if(y==25)
    {
            y=1;
    x=x+7;
    }
    
    gotoxy(x,y); 
    printf("%d: %c",b,a); 
    b=b+1;
    a=a+1;
    y=y+1;
   
}while(a<256);
getch();
        break;
        
case 2:{
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
}break;
       }
       }while(N!=3);
         getch();             
                              }
      


           
