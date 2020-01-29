#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<conio.h>
int main()
{
 int A, B, C;

 system("CLS");
 printf("Verifica dei lati di un triangolo\n");

 do{
    printf("\nInserisci il valore del 1^ lato ( > di 0 ) --> ");
    scanf("%d", &A);             
 }while(A<=0);
 
 do{
    printf("\nInserisci il valore del 2^ lato ( > di 0 ) --> ");
    scanf("%d", &B);             
 }while(B<=0);

 do{
    printf("\nInserisci il valore del 3^ lato ( > di 0 ) --> ");
    scanf("%d", &C);             
 }while(C<=0);
 
 if((A<B+C) && (B<A+C) && (C<A+B))
  {
   printf("\n\nI valori A=%d, B=%d, C=%d\n\npossono essere i lati di un triangolo ", A, B, C);
   if(A==B && B==C)
    {
     printf("equilatero!\n");
    }
   else
    {
     if((A==B&&A!=C)||(B==C&&B!=A)||(C==A&&C!=B))
      {
       printf("isoscele!\n");
      }
     else
      {
       printf("scaleno!\n");
      }
    }
  }  
 else
  {
   printf("\n\nI valori A=%d, B=%d, C=%d\n\nNON possono essere i lati di un triangolo!\n", A, B, C);
  }
 
 system("PAUSE"); 
 
}  



















