#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio2.h>

int main()
{
    int n,c,ans;
      c = 0;
      n = 0;
      srand(time(NULL));
      n = rand()%10001;
      
      do{
      system("cls");
      textcolor(11);
      gotoxy(30, 6);  
      printf("Indovina il numero!");
      textcolor(15);
      gotoxy(64,2);  
      printf("Tentativi: %d",c);
      textcolor(15);
      gotoxy(38,13);
      scanf("%d",&ans);
      c = c + 1;
      
      if(ans < n)
      {
          textcolor(15);
          gotoxy(28,17);  
          printf("Il numero e' troppo piccolo");
          Sleep(1500);
      }
      if(ans > n)
      {
          textcolor(15);
          gotoxy(28,17);  
          printf("Il numero e' troppo grande");
          Sleep(1500);
      }
   }while(ans != n);
   
   system("cls");
   textcolor(15);
   gotoxy(25,10);  
   printf("Hai indovinato in %d tentativi!",c);
   textcolor(15);
   gotoxy(30,12); 
   printf("Il numero era %d",n);
   getch();
   
}
