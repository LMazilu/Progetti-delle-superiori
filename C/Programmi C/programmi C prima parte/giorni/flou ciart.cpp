#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<windows.h>

int main()
{
    char risp;
    int a, m, g, bi, RR, bis,feb;
do{
	    system ("cls");
		printf("\nProgramma per verificare se la data e' valida \n(date comprese tra il 1500 e il 2500 D.C.)");
		

 do {
	printf("\n \nInserisci l'anno desiderato: ");
	scanf("%d", &a);
    }
 while(a<1500 || a>2500);

do {	
	printf("\n \nInserisci il mese desiderato: ");
	scanf("%d", &m);
    }
 while (m<1 || m>12);
do {
	printf("\n \nInserisci il giorno desiderato: ");
	scanf("%d", &g);
   } 
while(g<1 || g>=31);


if(m==11 || m==4 || m==6 || m==9) 
         if (g>30)
              printf("\n \n La data non e' corretta");
         else
     	     printf("\n \n La data e' corretta");
           
         
if(m==1  || m==5 || m==7 || m==10 || m==12 || m==3) 
 printf("\n \n La data  e' corretta");
	 

     


	bis =   a%4;
	
    if(bis==0)
	feb=29;
	else
	feb=28;
	
    RR  = a/100;
    if(RR!=0)
	feb=29;
	else
	feb=28;
	
    
    
    bi  = a%400;
    if(bi==0)
	feb=29;
	else
	feb=28;
	



	if(m==2)
    if (g>feb)
	printf("\n \n La data non e' corretta");
	else
	printf("\n \n La data e' corretta");
		
           
    
	
		printf("\n \nGrazie per aver utilizzato il programma\n\n");
		getch();
		system("PAUSE");
do 
{ 
printf("\nvuoi ripetere? (s/n) ");
fflush(stdin);
scanf("%c", &risp); 
} while (risp != 's' && risp != 'n' && risp != 'S' && risp != 'N');

} while (risp =='S' || risp =='s');


}
