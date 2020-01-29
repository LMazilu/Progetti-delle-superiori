#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<conio.h>
#include<windows.h>

int main ()
{
    int D, M, Y, R, RR, RRR;
    char risp;
    
    system("CLS");
    do
    {
    printf("Programma per la verifica di validita' di una data \n\n");
    system("PAUSE");
    system("CLS");
    
    do{
    printf("Inserisci la data \n\n");
    printf("Giorno: ");
    scanf("%d",&D);
    printf("\n");
    system("CLS");
    }while(D<1 || D>31);
    
    do{
    printf("Inserisci la data \n\n");
    printf("Giorno: %d \n\n",D);
    printf("Mese: ");
    scanf("%d",&M);
    printf("\n");
    system("CLS");
    }while(M<1 || M>12);
    
    do{
    printf("Inserisci la data \n\n");
    printf("Giorno: %d \n\n",D);
    printf("Mese: %d \n\n",M);
    printf("Anno: ");
    scanf("%d",&Y);
    printf("\n");
    system("CLS");
    }while(Y<1500 || Y>2500);
    
    RR = Y%400;
    R = Y%4;
    RRR = Y%100;
    
    if(M == 2)
    {
    if(RR == 0 && RRR == 0)
    {
         if(D>29)
         {
             printf("La data inserita non e' corretta \n\n");
             system("PAUSE");
         }
         else
         {
             printf("La data inserita e' corretta \n\n");
             system("PAUSE");
         }
    }
    else{
          if(RR != 0 && RRR == 0 && R == 0)
         {
            if(D>28)
             {
                printf("La data inserita non e' corretta \n\n");
                system("PAUSE");
             }
             else
              {
             printf("La data inserita e' corretta \n\n");
             system("PAUSE");
              }
         } else{
         	  if(RR != 0 && RRR != 0 && R == 0) 
	{
		 printf("La data inserita e' corretta \n\n");
             system("PAUSE");
	}
	else
	{
		 printf("La data inserita non e' corretta \n\n");
             system("PAUSE");
		 }
        }
	}
	}
    else
    {
        if(M==4 || M==6 || M==9 || M==11)
        {
                if(D>30)
				{
			    printf("La data inserita non e' corretta \n\n");
                system("PAUSE");
				}
				else 
				{
			 printf("La data inserita e' corretta \n\n");
             system("PAUSE");
				}
				}
        
    else
    {
                printf("La data inserita e' corretta \n\n");
                system("PAUSE");
    }
}
do
{
     printf("\n\nVuoi ripetere il programma ? (s/n) --> ");
     fflush(stdin);
     scanf("%c", &risp);
     system("CLS");
}while(risp != 's' && risp != 'S' && risp != 'n' && risp != 'N');
}while(risp=='s'||risp=='S');
}
