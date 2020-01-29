#include<stdlib.h>
#include<stdio.h>
#include<conio2.h>
#include<windows.h>
#include<iostream>
#include<stdbool.h>

int const  m=19;
int mat[m][m],a;
int i1, i2, num;
int gg = 5;

int qm()
{
    int a,b,c,d,e,f,g,h,i,l,m,x,y,tm,con,con2,x1,y1;
    a=185; b=186; c=187; d=188; e=205;
    f=200; g=201; h=202; i=203; l=204; m=206;
    x=40;  y=13;
    
    if(gg > 12)
    {  
       y = ((gg-1))+4;
    }
    
    gotoxy(38,y-2);
    printf("%c%c%c%c%c",m,e,e,e,m);
    gotoxy(38,y-1);
    printf("%c   %c",b,b);
    gotoxy(38,y);
    printf("%c %d %c",b,num,b);
    gotoxy(38,y+1);
    printf("%c   %c",b,b);
    gotoxy(38,y+2);
    printf("%c%c%c%c%c",m,e,e,e,m);
    if(gg<=3){tm=0;}
    else{tm=(gg-1)/2;}
    x1=34;
    con2=1;
    do{
                                     
    for(con=1,y1=y-3;con<tm;con++)
    {  gotoxy(x1,y1);
       printf("%c   %c",b,b);
       gotoxy(x1,y1-1);
       printf("%c %d %c",b,num,b);
       gotoxy(x1,y1-2);
       printf("%c   %c",b,b);
       gotoxy(x1,y1-3);
       printf("%c%c%c%c%c",m,e,e,e,m);
       y1 = y1-4;
    }
       gotoxy(x1,y1);
       printf("%c   %c",b,b);
       gotoxy(x1,y1-1);
       printf("%c %d %c",b,num,b);
       gotoxy(x1,y1-2);
       printf("%c   %c",b,b);
       gotoxy(x1,y1-3);
       printf("%c%c%c%c%c",i,e,e,e,i);
       
    for(con=1,y1=y+3;con<tm;con++)
    {  
       gotoxy(x1,y1);
       printf("%c   %c",b,b);
       gotoxy(x1,y1+1);
       printf("%c %d %c",b,num,b);
       gotoxy(x1,y1+2);
       printf("%c   %c",b,b);
       gotoxy(x1,y1+3);
       printf("%c%c%c%c%c",m,e,e,e,m);
       y1 = y1+4;
    }
       gotoxy(x1,y1);
       printf("%c   %c",b,b);
       gotoxy(x1,y1+1);
       printf("%c %d %c",b,num,b);
       gotoxy(x1,y1+2);
       printf("%c   %c",b,b);
       gotoxy(x1,y1+3);
       printf("%c%c%c%c%c",h,e,e,e,h);
       con2++;
       x1 = x1-4;
    }while(con2<tm);
    x1=42;
    con2=1;
    do{
                                     
    for(con=1,y1=y-3;con<tm;con++)
    {  gotoxy(x1,y1);
       printf("%c   %c",b,b);
       gotoxy(x1,y1-1);
       printf("%c %d %c",b,num,b);
       gotoxy(x1,y1-2);
       printf("%c   %c",b,b);
       gotoxy(x1,y1-3);
       printf("%c%c%c%c%c",m,e,e,e,m);
       y1 = y1-4;
    }
       gotoxy(x1,y1);
       printf("%c   %c",b,b);
       gotoxy(x1,y1-1);
       printf("%c %d %c",b,num,b);
       gotoxy(x1,y1-2);
       printf("%c   %c",b,b);
       gotoxy(x1,y1-3);
       printf("%c%c%c%c%c",i,e,e,e,i);
       
    for(con=1,y1=y+3;con<tm;con++)
    {  
       gotoxy(x1,y1);
       printf("%c   %c",b,b);
       gotoxy(x1,y1+1);
       printf("%c %d %c",b,num,b);
       gotoxy(x1,y1+2);
       printf("%c   %c",b,b);
       gotoxy(x1,y1+3);
       printf("%c%c%c%c%c",m,e,e,e,m);
       y1 = y1+4;
    }
       gotoxy(x1,y1);
       printf("%c   %c",b,b);
       gotoxy(x1,y1+1);
       printf("%c %d %c",b,num,b);
       gotoxy(x1,y1+2);
       printf("%c   %c",b,b);
       gotoxy(x1,y1+3);
       printf("%c%c%c%c%c",h,e,e,e,h);
       con2++;
       x1 = x1+4;
    }while(con2<tm);
    
   for(con=1,y1=y-3,x1=38;con<tm;con++)
    {  gotoxy(x1,y1);
       printf("%c   %c",b,b);
       gotoxy(x1,y1-1);
       printf("%c %d %c",b,num,b);
       gotoxy(x1,y1-2);
       printf("%c   %c",b,b);
       gotoxy(x1,y1-3);
       printf("%c%c%c%c%c",m,e,e,e,m);
       y1 = y1-4;
    }
       gotoxy(x1,y1);
       printf("%c   %c",b,b);
       gotoxy(x1,y1-1);
       printf("%c %d %c",b,num,b);
       gotoxy(x1,y1-2);
       printf("%c   %c",b,b);
       gotoxy(x1,y1-3);
       printf("%c%c%c%c%c",i,e,e,e,i);
       
    for(con=1,y1=y+3,x1=38;con<tm;con++)
    {  
       gotoxy(x1,y1);
       printf("%c   %c",b,b);
       gotoxy(x1,y1+1);
       printf("%c %d %c",b,num,b);
       gotoxy(x1,y1+2);
       printf("%c   %c",b,b);
       gotoxy(x1,y1+3);
       printf("%c%c%c%c%c",m,e,e,e,m);
       y1 = y1+4;
    }
       gotoxy(x1,y1);
       printf("%c   %c",b,b);
       gotoxy(x1,y1+1);
       printf("%c %d %c",b,num,b);
       gotoxy(x1,y1+2);
       printf("%c   %c",b,b);
       gotoxy(x1,y1+3);
       printf("%c%c%c%c%c",h,e,e,e,h);
       
       for(con=1,y1=y-3,x1=x-((tm*4)+2);con<tm;con++)
    {  gotoxy(x1,y1);
       printf("%c   %c",b,b);
       gotoxy(x1,y1-1);
       printf("%c %d %c",b,num,b);
       gotoxy(x1,y1-2);
       printf("%c   %c",b,b);
       gotoxy(x1,y1-3);
       printf("%c%c%c%c%c",i,e,e,e,i);
       y1 = y1-4;
    }
       gotoxy(x1,y1);
       printf("%c   %c",b,b);
       gotoxy(x1,y1-1);
       printf("%c %d %c",b,num,b);
       gotoxy(x1,y1-2);
       printf("%c   %c",b,b);
       gotoxy(x1,y1-3);
       printf("%c%c%c%c%c",g,e,e,e,i);
       
    for(con=1,y1=y+3,x1=x+(((tm-1)*4)+2);con<tm;con++)
    {  
       gotoxy(x1,y1);
       printf("%c   %c",b,b);
       gotoxy(x1,y1+1);
       printf("%c %d %c",b,num,b);
       gotoxy(x1,y1+2);
       printf("%c   %c",b,b);
       gotoxy(x1,y1+3);
       printf("%c%c%c%c%c",m,e,e,e,m);
       y1 = y1+4;
    }
       gotoxy(x1,y1);
       printf("%c   %c",b,b);
       gotoxy(x1,y1+1);
       printf("%c %d %c",b,num,b);
       gotoxy(x1,y1+2);
       printf("%c   %c",b,b);
       gotoxy(x1,y1+3);
       printf("%c%c%c%c%c",h,e,e,e,c);
}


int cornice()
{
    int an1, an2, an3, an4, corv, coro, x, y;
    x = 0;
    y = 0;
    coro = 205;
    corv = 186;
    an1 = 201;
    an2 = 187;
    an3 = 200;
    an4 = 188;
                                	
                                    gotoxy(40,12);
                                	textcolor(LIGHTGREEN);
                                    gotoxy(2,2);
                                    printf("%c",an1);
                                    x = 3;
                                    y = 2;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",coro);
                                       x = x+1;
                                    }while(x <= 78);
                                    gotoxy(79,2);
                                    printf("%c",an2);
                                    x = 79;
                                    y = 3;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",corv);
                                       y = y+1;
                                    }while(y <= 23);
                                    gotoxy(79,24);
                                    printf("%c",an4);
                                    x = 78;
                                    y = 24;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",coro);
                                       x = x-1;
                                    }while(x >= 3);
                                    gotoxy(2,24);
                                    printf("%c",an3);
                                    x = 2;
                                    y = 23;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",corv);
                                       y = y-1;
                                    }while(y >= 3);

}

int main()
{
qm();
getch();
    do{
          do{
                                    
                         system("cls");
                         cornice();
                         gotoxy(27,4);
                         textcolor(11);
                         printf("Funzioni Matrici");
                         gotoxy(10,8);
                         textcolor(15);
                         printf("1)Tabella Pitagorica");
                         gotoxy(10,10);
                         printf("2)Quadrato magico");
                         gotoxy(10,12);
                         printf("3)Esci");
                         gotoxy(30,18);
                         printf("Scegli ------->  ");
                         fflush(stdin);
                         scanf("%d",&a);
                         }while(a < 1 or a > 3);
          }while(a!=3);
}

