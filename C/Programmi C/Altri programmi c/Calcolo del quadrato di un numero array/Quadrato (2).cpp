#include<stdio.h>
#include<conio.h>
#include<conio2.h>
#include<iostream>
#include<time.h>
#include<windows.h>
#include<stdlib.h>


int d(){

gotoxy(17,22);
              textcolor(LIGHTBLUE);
              printf("Devi prima inserire le temperature nel punto 1!");
              getch();
              gotoxy(17,22);
              printf("                                               ");
              gotoxy(39,20);


}

int main()
{
    int const N=5;
    int riga,i,sw,vc;
    float V[N],area,p;
    char risp;
    vc=0;
 do{

 do{

    system("cls");
     textcolor(15);
     gotoxy(12,6);
     printf("1) Carica vettore");
     gotoxy(12,8);
     printf("2) Calcolo area");
     gotoxy(12,10);
     printf("3) Calcolo perimetro");
     gotoxy(12,12);
     printf("4) Visualizzazione");
     gotoxy(12,14);
     printf("5) Uscita");
     gotoxy(55,20);
     printf("Scelta -----> ");
     scanf("%d",&sw);
}while(sw<1 || sw>5);

switch(sw)
{

case 1:{
     system("cls");
     riga=3;

     riga=riga+1;
     for(i=0;i<N;i++)
     {
         textcolor(LIGHTBLUE);
     gotoxy(33,3);
     printf("IMMISSIONE DATI");

     textcolor(LIGHTCYAN);
     gotoxy(30,12);
     printf("Immetti lato %2d -------> ",i+1);
     scanf("%f",&V[i]);
     system("cls");
     }
     riga=riga+5;
     gotoxy(33,riga);
     printf("Elaborazione...");
     Sleep(1000);
     gotoxy(33,riga);
     printf("                ");
     gotoxy(35,riga);
     printf("Elaborato!");
     gotoxy(20,24);
     printf("Clicca un pulsante qualsiasi per continuare");
     vc=1;
     getch();
     }break;

case 2:{
     if(vc==1)
     {
     system("cls");
     i=0;
     area=0;
     riga=2;
     textcolor(LIGHTMAGENTA);
     gotoxy(2,riga);
     printf(" Lato        Area        Perimetro");
     for(i=0;i<N;i++)
     {
          area=V[i]*V[i];
          riga=riga+2;
          textcolor(WHITE);
          gotoxy(2,riga);
          printf("%6.1f       %6.1f            NO",V[i],area);
          }
          getch();
          }
          if(vc==0)
             {
              d();
                         }
     }break;

case 3:{
     if(vc==1)
     {
     system("cls");
     i=0;
     p=0;
     riga=2;
     textcolor(LIGHTMAGENTA);
     gotoxy(2,riga);
     printf(" Lato        Area        Perimetro");
     for(i=0;i<N;i++)
     {
          p=V[i]*4;
          riga=riga+2;
          textcolor(WHITE);
          gotoxy(2,riga);
          printf("%6.1f         NO            %6.1f",V[i],p);
          }
          getch();
          }
          if(vc==0)
             {
              d();
                         }
     }break;

case 4:{
     if(vc==1)
     {
     system("cls");
     i=0;
     p=0;
     area=0;
     riga=2;
     textcolor(LIGHTRED);
     gotoxy(2,riga);
     printf(" LATO        AREA        PERIMETRO");
     for(i=0;i<N;i++)
     {
          p=V[i]*4;
          area=V[i]*V[i];
          riga=riga+2;
          textcolor(WHITE);
          gotoxy(2,riga);
          printf("%6.1f       %6.1f          %6.1f",V[i],area,p);
          }
          getch();
          }
          if(vc==0)
             {
              d();
                         }
     }break;

case 5:{
     do{
     system("cls");
     gotoxy(22,12);
     printf("Sei sicuro di voler uscire? (s/n)--> ");
     fflush(stdin);
     scanf("%c",&risp);
     }while(risp!='s' && risp!='S' && risp!='n' && risp!='N');
     if(risp=='n' || risp=='N') { sw=0; }
     }break;
     }
     }while(sw!=5);
}
