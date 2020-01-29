#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<conio.h>
int main()
{
 float IT, SCONTO, ITS;  
 int S;
 
 system("CLS");
 printf("Calcolo dello sconto per fasce di importo\n");
 
 do{
    printf("\nInserisci l'importo totale della spesa ( > 0 ) --> ");
    scanf("%f", &IT);             
 }while(IT<=0);

 if(IT<=100)
  {
   S=5;
  }
 else
  {
   if(IT<=250)
    {
     S=10;
    }
   else
    {
     S=20;
    }
  }
 SCONTO=(IT/100)*S;
 ITS=IT-SCONTO;
 
 printf("\nImporto iniziale: %7.2f Euro", IT);
 printf("\n\nSconto applicato: %d%% per un totale di %7.2f Euro", S, SCONTO);
 printf("\n\nImporto scontato da pagare: %7.2f Euro", ITS);   

 getch();
}  



















