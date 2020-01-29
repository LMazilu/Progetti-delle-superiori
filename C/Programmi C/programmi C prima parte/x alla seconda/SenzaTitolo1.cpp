#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<windows.h>


int main()
{
    char risp;
    int n,d,c,s;
do{
    system("cls");
   do{ printf("\nProgramma per calcolare il quadrato di un numero");
    printf("\n \nImmetti il numero desiderato: ");
    scanf("%d",&n);
}
while(n==0);

if (n<0)
n= (n*-1);


s= 0;
d= -1;
c= 0; 


do{ d=d+2;
         c=c+1;
              s=s+d;
}
while(c<n);

printf("\n \nIl numero elevato al quadrato equivale a %d" ,s);


printf("\n \nGrazie per aver utilizzato il programma\n\n");


system("PAUSE");



do { printf("\nvuoi ripetere? (s/n)");
fflush(stdin);
scanf("%c", &risp); } while (risp != 's' && risp != 'n' && risp != 'S' && risp != 'N');} while (risp =='S' || risp =='s');}
    
