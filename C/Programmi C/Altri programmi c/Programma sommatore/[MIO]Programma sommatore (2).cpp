#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<windows.h>
#include<conio.h>

int main()
{
	int NV, V, S, C;
	
	printf("Programma per la somma di piu' numeri \n\n");
	system("PAUSE");
	system("CLS");
	printf("Immetti il numero dei valori da sommare \n\n");
	scanf("%d",&NV);
	system("CLS");
	S = 0;
	C = 0;
	
	do
	{
		printf("immetti un numero  ");
		scanf("%d",&V);
		S = S + V;
		C = C + 1;
		system("CLS");
		
	} while (C < NV);
}
