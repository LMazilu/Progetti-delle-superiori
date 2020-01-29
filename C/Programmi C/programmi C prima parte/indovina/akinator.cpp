#include<iostream>
#include<conio2.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int main()
{
 int N,C,n;
 
char risp;
N=0;
C=0;
n=rand()%1000;
do{
    
   do{ 
    srand(time(0));

 do {
    system("cls");
	 textcolor(14); 
 	gotoxy(27,1);
    printf("Gioco: Indovina il numero!");
	 gotoxy(8,5);
    printf("\nNumero di tentativi: %d",C);
 	 gotoxy(1,9);
    printf("Immetti il numero(tra 1 e 1000): ");
  	 gotoxy(33,9);
    fflush(stdin);
    scanf("%d",&N);
    C=C+1;
    

  

  n=n+1;

if(N<n)

{
       printf("\nIl numero deve essere piu' grande!");
}       
if(N>n)
{      
      printf("\nIl numero deve essere piu' piccolo!");
}

if(N==n)
{      
      printf("\nCongratulazioni! Hai indovinato il numero!");
         
}
  getch();  
  }while(N<1 || N>1000); 
    

}while(n!=N);
         
do { printf("\n\nvuoi ri iniziare? (s/n)");
		fflush(stdin);
scanf("%c", &risp); } 
while (risp != 's' && risp != 'n' && risp != 'S' && risp != 'N');} 
while (risp =='S' || risp =='s');
}
