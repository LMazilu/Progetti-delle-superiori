#include<stdio.h>
#include<math.h>
#include<windows.h>
int main()
{
float a,b,c,sol,sol1;
double D;
do
{
       printf("Inserire il valore di a diverso da 0 : ");
       scanf("%f",&a);
       system ("CLS");
} while (a == 0);
printf("Inserire il valore di b: ");
scanf("%f",&b);
system("CLS");
printf("Inserire il valore di c: ");
scanf("%f",&c);
system("CLS");
D = b*b-4*a*c;
if(D > 0)
{
	sol = (-b+sqrt(D))/(2*a);
	sol1 = (-b-sqrt(D))/(2*a);
	printf("la prima soluzione e' %f \n\n",sol);
	printf("la seconda soluzione e' %f \n\n",sol1);
}
else
{
	printf("soluzioni non reali \n\n");
}
system("PAUSE");
}
