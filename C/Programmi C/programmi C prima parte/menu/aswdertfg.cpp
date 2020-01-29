#include<iostream>
#include<conio2.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main()
{
 int col,riga,f=1,c,N;
 int const tempo=25;

do{

     
 do {
    system("cls");
    textcolor(14);
    gotoxy(19,1);
    printf("Programma per l'animazione di un carattere");
    gotoxy(20,7);
    printf("1-Orizzontale");
    gotoxy(20,9);
    printf("2-Verticale");
    gotoxy(20,11);
    printf("3-Obliqua");
    gotoxy(20,13);
    printf("4-Esci");
    gotoxy(20,15);
    printf("Immetti l'opzione desiderata: ");
    scanf("%d",&N);
                   }while(N<1 && N>4);
 switch(N)
 { case 1:
 {    col=0;
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
      while(col<73 && !kbhit());


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
      while(col>1 && !kbhit());


                     }
                      while(!kbhit());
                      getch();
                                      }break;
 case 2: {
      col=36;
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
      while(riga<25 && !kbhit());


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
      while(riga>1 && !kbhit());
      }
                      while(!kbhit());
                      getch();
                                      }break;
                                      
case 3:
     {
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
      while(riga<24 && !kbhit());


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
      while(col<73 && !kbhit());


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
      while(riga>1 && !kbhit());


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
      }while(col>1 && !kbhit());
                   }
                      while(!kbhit());
                      getch();
                                      }break;
                                             }

}while(N!=4);









}
