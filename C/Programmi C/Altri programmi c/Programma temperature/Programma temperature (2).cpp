#include<windows.h>  
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio2.h>

void grafica();


    bool tc;
    int an1,an2,an3,an4,corv,coro,a,x,y,i,z,r,ora,inora;
    int const n = 11;
    float vt[n],tmax,tmin;
                                
int main()
{
     tc = false;      
    z = 0;
    r = 4;
    a = 1;
    ora = 0;
    tmax = 0;
    tmin = 0;
    //start gui
    x = 0;
    y = 0;
    coro = 205;
    corv = 186;
    an1 = 201;
    an2 = 187;
    an3 = 200;
    an4 = 188;
    do{
    do{
       grafica(); 
                                    
     gotoxy(27,4);
     textcolor(11);
     printf("Elaboratore di temperature");
     gotoxy(10,8);
     textcolor(15);
     printf("1)Caricamento temperature");
     gotoxy(10,10);
     printf("2)Visualizzazione di tutte le temperature");
     gotoxy(10,12);
     printf("3)Visualizzazione della temperatura in una specifica ora");
     gotoxy(10,14);
     printf("4)Ricerca della temperatura minima [ora inclusa]");
     gotoxy(10,16);
     printf("5)Ricerca della temperatura massima [ora inclusa]");
     gotoxy(10,18);
     printf("6)Esci");
     gotoxy(38,22);
     printf("Scegli ------->  ");
     scanf("%d",&a);
     }while(a > 6 || a < 1);
     //stop gui
     grafica();
     switch(a){
               case 1:{
                 
                    for (i=0;i<n;i++)
                       {
                      
                                   grafica();
                       do{
                       gotoxy(5,3);
                       textcolor(15);
                       printf("(Temperatura massima 60.0 C, Temperatura minima -100.0 C)");
                       gotoxy(5,11);
                       printf("Inserisci la temperatura all'ora %d:00  ---> ",i);
                       fflush(stdin);
                       scanf("%f",&vt[i]);
                       }while(vt[i] < -100 || vt[i] > 60);
                      
                      }  
                      tc = true;
                    }break;
               case 2:{
                       
                       grafica();
                       r = 4;
                     for (i=0;i<n;i++)
                       {    
                         if(tc == true)
                         {
                         if(i > 9 && i <= 19){if(i == 10){r = 4;}}
                         else if(i > 19){if(i == 20){r = 4;}}
                         if(i <= 9){gotoxy(5,r);}
                         else if(i > 9 && i <= 19){gotoxy(30,r);}
                         else if(i > 19){gotoxy(55,r);}
                        
                         textcolor(15);
                         printf("Ore %d:00 = %3.1f C",i,vt[i]);
                         r = r+2;
                    
                         }
                         else
                         {
                             gotoxy(18,10);
                             textcolor(15);
                             printf("Non hai ancora caricato nessuna temperatura...");
                             gotoxy(16,12);
                             printf("Utilizza la funzione 1 per caricare le temperature");
                         
                         }
                         } 
                    
                         getch();
                      }break;
               case 3:{
                         if(tc == true)
                         {
                             i = 0;
                             do{
                                grafica();
                             gotoxy(22,10);
                             textcolor(15);
                             printf("Digitare l'ora desiderata ---> ");
                             fflush(stdin);
                             scanf("%d",&inora);
                             }while(inora > n || inora < 0);
                             i = inora;
                             gotoxy(17,14);
                             printf("All'ora %d:00 la temperatura era di %3.1f C",inora,vt[i]);
                         }
                         else
                         {
                             gotoxy(18,10);
                             textcolor(15);
                             printf("Non hai ancora caricato nessuna temperatura...");
                             gotoxy(16,12);
                             printf("Utilizza la funzione 1 per caricare le temperature");
                         } getch();
                    
                    
                      }break;
               case 4:{
                    if(tc == true)
                         {
                            
                          //  z = 0;
                           
                        //    ora = 0;
                      
                    //   z++;
                      // if(z == 1)
                      // {
                          tmin = vt[0];
                          ora = 0;
                      // }
                       
                     
                       for (i=1;i<n;i++)
                       if(vt[i] < tmin)
                       { tmin = vt[i];
                          ora = i;
                       }
                     
                        
                       gotoxy(16,10);
                       textcolor(15);
                       printf("La temperatura minima e' di %3.1f C all'ora %d:00",tmin,ora);
                       getch();
                         }
                         else
                         {
                             gotoxy(18,10);
                             textcolor(15);
                             printf("Non hai ancora caricato nessuna temperatura...");
                             gotoxy(16,12);
                             printf("Utilizza la funzione 1 per caricare le temperature");
                             getch();
                         }
                       
                       }break;
               case 5:{
                    if(tc == true)
                         {
                            gotoxy(16,10);
                            textcolor(15);
                            z = 0;
                            i = 0;
                            ora = 0;
                       do{
                       z++;
                       if(z == 1)
                       {
                          tmax = vt[i];
                          ora = i;
                       }
                       if(vt[i] > tmax)
                       {
                          tmax = vt[i];
                          ora = i;
                       }
                       i++;
                       }while(z <= n);
                       printf("La temperatura massima e' di %3.1f C all'ora %d:00",tmax,ora);
                       getch();
                         }
                         else
                         {
                             gotoxy(18,10);
                             textcolor(15);
                             printf("Non hai ancora caricato nessuna temperatura...");
                             gotoxy(16,12);
                             printf("Utilizza la funzione 1 per caricare le temperature");
                             getch();
                         }}break;
               case 6:{
                    gotoxy(20,10);
                    textcolor(15);
                    printf("Grazie per aver usufruito del programma");
                    Sleep(1000);
                    gotoxy(28,14);
                    printf("Arrivederci e a presto");
                    Sleep(1000);
                    gotoxy(20,20);
                    printf("Premere un qualsiasi tasto per uscire");
                    getch();
                    }break;
               
               
               }
     
		}while(a != 6);

}

void grafica()
{
     system("cls");
     gotoxy(38,17);
                                	gotoxy(40,12);
                                	textcolor(12);
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
