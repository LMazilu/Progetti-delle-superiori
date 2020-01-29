#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
#include<math.h>
int main ()
{
	float v,f,s;
	int c;
	printf("Programma per il calcolo dello spazio  \n");
	printf("espresso in metri di frenata di un'automobile \n\n");
	system("PAUSE");
	system("CLS");
	do
	{
	printf("Inserire la velocita' in km/h: ");
	scanf("%f",& v);
	system("CLS");
    } while (v < 0);
    do
	{
	printf("Digita 1 se l'asfalto e' ruvido \n");
	printf("Digita 2 se l'asfalto e' liscio \n");
	printf("Digita 3 se l'asfalto e' bagnato \n");
	printf("Digita 4 se l'asfalto e' ghiacciato \n");
	printf("Numero : ");
	scanf("%d",& c);
	system("CLS");
    } while ((c < 0) || (c > 4));
    if(c == 1)
    {
    	f = 0.6;
	}
	else
	{
		if(c == 2)
		{
			f = 0.5;
		}
		else
		{
			if (c == 3)
			{
				f = 0.4;
			}
			else
			{
				f = 0.1;
			}
		}
	}
    s = (v*v)/(250*f);
    printf("Lo spazio in metri di frenata equivale a: %f \n\n",s);
    system("PAUSE");
}
