#include<iostream>
#include<conio2.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main()
{
 int col,riga,f=1,c;
 int const tempo=25;



      col=0;
      riga=12;



do{
 do{

     if(f==15)
      {c=-1;
            }
     if(f==1)
              {c=1;
                   }
      f=f+c;

      system("cls");

       col=col+1;
      gotoxy(col,riga);

      textcolor(f);
      printf("computer");
      Sleep(tempo);

      }
      while(col<73);


 do{
      if(f==15)
      {c=-1;
            }
      if(f==1)
              {c=1;
                   }
      f=f+c;
      system("cls");
      col=col-1;
      gotoxy(col,riga);

      textcolor(f);
      printf("computer");
      Sleep(tempo);
      }
      while(col>1);


                     }
                      while(!kbhit());
                      getch();

col=40;
riga=0;
 do{
       do{
       if(f==15)
      {c=-1;
            }
       if(f==1)
              {c=1;
                   }
      f=f+c;
      system("cls");
      riga=riga+1;
      gotoxy(col,riga);

      textcolor(f);
      printf("computer");
      Sleep(tempo);
      }
      while(riga<25);


do{
      if(f==15)
      {c=-1;
            }
      if(f==1)
              {c=1;
                   }
      f=f+c;
      system("cls");
      riga=riga-1;
      gotoxy(col,riga);

    textcolor(f);
      printf("computer");
      Sleep(tempo);
      }
      while(riga>1);
      }
                      while(!kbhit());
                      getch();


do{
       col=-2;
      riga=11;
do{
      
         if(f==15)
      {c=-1;
            }
     if(f==1)
              {c=1;
                   }
      f=f+c;
      system("cls");
       col=col+3;
       riga=riga+1;
      gotoxy(col,riga);


    textcolor(f);
      printf("computer");
    Sleep(tempo);
      }
      while(riga<24);


do{
       if(f==15)
      {c=-1;
            }
     if(f==1)
              {c=1;
                   }
      f=f+c;
      system("cls");

      col=col+3;
      riga=riga-1;
       gotoxy(col,riga);

    textcolor(f);
      printf("computer");
       Sleep(tempo);
      }
      while(col<73);


do{
       if(f==15)
      {c=-1;
            }
     if(f==1)
              {c=1;
                   }
      f=f+c;
      system("cls");

      col=col-3;
      riga=riga-1;
      gotoxy(col,riga);

    textcolor(f);
     printf("computer");
    Sleep(tempo);
      }
      while(riga>=1);


do{ if(f==15)
      {c=-1;
            }
     if(f==1)
              {c=1;
                   }
      f=f+c;
      system("cls");
      col=col-3;
      riga=riga+1;
      gotoxy(col,riga);
      textcolor(f);
      printf("computer");
      Sleep(tempo);
      }while(col>=1);
                   }
                      while(!kbhit());
                      getch();

}
