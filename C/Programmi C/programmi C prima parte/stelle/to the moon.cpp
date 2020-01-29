#include<iostream>
#include<conio2.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
int main()
{
    int col,riga,f,c;
  srand(time(NULL)); 
   do{  
         if(f==15){c=-1;}
         if(f==1){c=1;}
        textcolor(f);
        
        col=rand()%80+1;
        riga=rand()%24+1;
        f=rand()%16;
        gotoxy(col,riga);
        printf("*");

                         }while(!kbhit());
}
