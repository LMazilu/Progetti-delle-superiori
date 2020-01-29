#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<iostream>
#include<math.h>
#include<conio.h>
int main()
{
    int n,nn,m,c,d,u,co;
    printf("Programma identificatore di numeri A\n\n");
    system("PAUSE");
    system("CLS");
    m=0;
    co=0;
    nn=0;
    c=0;
    d=0;
    u=0;
    n=1;
    do
    {
        m=n/1000;
        nn=n%1000;
        c=nn/100;
        nn=n%100;
        d=nn/10;
        nn=nn%10;
        u=nn;
        if(m!=0)
        {
        	if((m*m*m*m)+(c*c*c*c)+(d*d*d*d)+(u*u*u*u)==n)
        	{
        		printf("%d\n",n);
        		co=co+1;
        		n=n+1;
			} 
			else
			{
				n=n+1;
			}
		}
		else if(c!=0)
		{
			if((m*m*m)+(c*c*c)+(d*d*d)+(u*u*u)==n)
			{
				printf("%d\n",n);
        		co=co+1;
        		n=n+1;
			}
			else
			{
				n=n+1;
			}
		}
		else if(d!=0)
		{
			if((m*m)+(c*c)+(d*d)+(u*u)==n)
			{
				printf("%d\n",n);
        		co=co+1;
        		n=n+1;
			}
			else
			{
				n=n+1;
			}
		}
		else
		{
			printf("%d\n",n);
        		co=co+1;
        		n=n+1;
		}
        
    }while(n<=9999);
   printf("\n\n\n\n");
   printf("I numeri Armstrong compresi tra 1 e 9999 sono------------> %d",c);
   printf("\n\n\n\n");
   system("PAUSE");
   
    
}
