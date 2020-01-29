#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>

int main()
{
 float x, y;
 char risp;
 int q;
do{
	system ("cls");
printf ("Programma per scoprire il quadrante di un punto");
do {
       printf ("\n Immetti il primo valore:");
       scanf("%f" ,&x);
                       }
while(x==0);
do{
            printf ("\n Immetti il secondo valore:");
            scanf ("%f" ,&y);
                             }
while (y==0);
if (x>0 && y>0)
{
 q=1;
}
else {
if (x<0 && y>0)
{
 q=2;
}
else
{
if (x>0 && y<0)
{
 q=3;
}
else
{
 q=4;
}
}
}
printf ("\n Il punto appartiene al quadrante %d" ,q);
printf ("\n\n Grazie per aver utilizzato questo programma\n\n");
system("\nPAUSE");
do { printf("\nvuoi ripetere? (s/n)");
		fflush(stdin);
scanf("%c", &risp); } while (risp != 's' && risp != 'n' && risp != 'S' && risp != 'N');} while (risp =='S' || risp =='s');}
