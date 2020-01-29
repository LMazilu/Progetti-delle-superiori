#include<iostream>
#include<conio2.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
 int x,y,b,a,c;
 a=0;
 b=0;
 x=1;
 y=1;


    textcolor(WHITE);  
do{ 
    if(y==25)
    {
            y=1;
    x=x+7;
    }
    
    gotoxy(x,y); 
    printf("%d: %c",b,a); 
    b=b+1;
    a=a+1;
    y=y+1;
   
}while(a<256);
getch();
}

