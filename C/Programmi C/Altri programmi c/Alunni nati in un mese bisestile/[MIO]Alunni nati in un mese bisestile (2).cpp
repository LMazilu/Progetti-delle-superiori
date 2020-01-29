#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<conio.h>
int main()
{
	int al,tmp,c,r,r1,r2,s;
	char ans;
	c = 0;
	s = 0;
	do
	{
	printf("Quanti alunni sono nati in un mese bisestile?\n\n");
	system("PAUSE");
	system("CLS");
	do
	{
	printf("Quanti alunni ci sono nella classe -----------> ");
	scanf("%d",&al);
	system("CLS");
	} while (al <= 0 || al >= 31  );
	do
	{
		do
	{
	printf("In che anno e' nato il seguente studente? -----------> ");
	scanf("%d",&tmp);
	system("CLS");
	} while (tmp <=1979 );
	c = c + 1;
	r1 = tmp%4;
	r = tmp%400;
	r2 = tmp%100;
	if(r2 == 0)
	{
		if(r == 0)
		{
			printf("E' bisestile\n\n");
			system("PAUSE");
			system("CLS");
			s = s + 1;
		} else
		{
			printf("Non e' bisestile\n\n");
			system("PAUSE");
			system("CLS");
		}
	} else
	{
		if(r1 == 0 )
		{
			printf("E' bisestile\n\n");
			system("PAUSE");
			system("CLS");
			s = s + 1;
		} else
		{
			printf("Non e' bisestile\n\n");
			system("PAUSE");
			system("CLS");
		}
	}
	} while (c < al);
	printf("Il numero degli studenti nati in un anno bisestile sono -----------> %d\n\n",s);
	system("PAUSE");
	system("CLS");
	do
	{
		printf("Vuoi ripetere il programma? [S/N] -----------> ");
		fflush(stdin);
		scanf("%c",&ans);
		system("CLS");
	}	while (ans != 'S' && ans != 's' && ans != 'n' && ans != 'N');
	} while (ans == 's' || ans == 'S');
	
}
