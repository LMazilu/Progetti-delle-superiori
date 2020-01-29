#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
int main ()
{
	int p;
	printf("Programma per il calcolo del punteggio \n\n");
	system("PAUSE");
	system("CLS");
	do
	{
			printf("Inserire il punteggio che non superi il 100: ");
	        scanf("%d",& p);
	        system("CLS");
	} while ((p < 0) || (p > 100));
	if((p >= 0) && (p <= 40))
	{
		printf("Il voto finale e' E \n\n");
		system("PAUSE");
	}
	else 
	{
		if((p >= 41) && (p <= 60 ))
		{
			printf("Il voto finale e' D \n\n");
			system("PAUSE");
		}
		else
		{
			if((p >= 61) && (p <= 70))
			{
				printf("Il voto finale e' C \n\n");
				system("PAUSE");
			}
			else
			{
				if((p >= 71) && (p <= 85))
				{
					printf("Il voto fginale e' B \n\n");
					system("PAUSE");
				}
				else
				{
					printf("Il voto finale e' A \n\n");
					system("PAUSE");
				}
			}
		}
	}

}
