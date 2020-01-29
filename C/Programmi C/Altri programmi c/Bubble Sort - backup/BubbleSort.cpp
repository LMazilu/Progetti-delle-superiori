#include<stdlib.h>
#include<stdio.h>
#include<conio2.h>
#include<windows.h>
#include<iostream>
#include<stdbool.h>


int ii, j, k;
int const mmm = 5;
int const n = 5;
int v[n], v2[n], vu[mmm+n];
int  li = 0;
int  ls = n - 1;
int med, an1, an2, an3, an4, corv, coro, x, y, m, i, a, y2, s, com, con, trov, in, nm, xota,aa,cont1,sw1,sw2,sw3;
bool tc, fg, sa;
bool tc2 = false;
bool tc3 = false;
bool tc4 = false;
bool tc5 = false;

int merge ()
{

    for(i=0, j=0, k=0; i<mmm && j<n; k++){
             if(v[i] < v2[j])
             {
                 vu[k] = v[i];
                 i++;
             }else
             {
                  vu[k] = v2[j];
                  j++;
             }
    }
    if(i == mmm)
    {
        do{
            vu[k] = v2[j];
            k++;
            j++;
          }while(j < n);
    }else
    {
          do{
             vu[k] = v[i];
             k++;
             i++;
            }while(i < n);
    }
}

int cornice()
{
    x = 0;
    y = 0;
    coro = 205;
    corv = 186;
    an1 = 201;
    an2 = 187;
    an3 = 200;
    an4 = 188;
                                	gotoxy(40,12);
                                	textcolor(15);
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

int main ()
{
    do{
         do{
                         system("cls");
                         cornice();
                         gotoxy(27,4);
                         textcolor(11);
                         printf("Funzioni con i vettori");
                         gotoxy(10,8);
                         textcolor(15);
                         printf("1)Caricamento vettori");
                         gotoxy(10,10);
                         printf("2)Visualizzazione di tutti i vettori");
                         gotoxy(10,12);
                         printf("3)Ordinamento Bubble Sort");
                         gotoxy(10,14);
                         printf("4)Ricerca dicotomica");
                         gotoxy(10,16);
                         printf("5)Ricerca sequenziale");
                         gotoxy(10,18);
                         printf("6)Ordinamento Merge");
                         gotoxy(10,20);
                         printf("7)Esci");
                         gotoxy(38,23);
                         printf("Scegli ------->  ");
                         fflush(stdin);
                         scanf("%d",&a);
                        }while(a > 7 or a < 1);
           system("cls");
           cornice();

           switch(a){
                       case 1:{
						   do{
                            do{
                            cornice();
                            gotoxy(5,8);
                            printf("1) Carica primo vettore");
                            gotoxy(5,10);
                            printf("2) Carica secondo vettore");
                            gotoxy(5,12);
                            printf("3) Esci");
                            gotoxy(5,20);
                            printf("Scegliere ------> ");
                            fflush(stdin);
                            scanf("%d",&aa);
                            system("cls");
                            }while(aa < 1 || aa > 3);
                 switch(aa){
                            case 1:{
                 for (i=0;i<n;i++){
                       cornice();
                       gotoxy(5,3);
                       gotoxy(5,11);
                       printf("Inserisci il %d elemento  ---> ",i+1);
                       fflush(stdin);
                       scanf("%d",&v[i]);
                       system("cls");
                       }
                       tc = true;
                       } break;
                            case 2:{
                       for (i=0;i<n;i++){
                       cornice();
                       gotoxy(5,3);
                       gotoxy(5,11);
                       printf("Inserisci il %d elemento  ---> ",i+1);
                       fflush(stdin);
                       scanf("%d",&v2[i]);
                       system("cls");
                       }
                       tc2 = true;
                       }break;
				 }
                            }while(aa != 3);
                            }break;
                       case 2:{
                            if (tc == true && tc2 == false && tc3 == false){
                                   gotoxy(12,1);
                                   printf("Vettore n 1");
                                   y2 = 3;
                                    for (i=0;i<n;i++){
                                    gotoxy(12,y2);
                                    printf("%d elemento : %d",i+1,v[i]);
                                    y2 = y2 + 2;
                                    }
                                    getch();
                                   }
                                   else if(tc2 == true && tc == false && tc3 == false){
                                      gotoxy(55,1);
                                   printf("Vettore n 2");
                                    y2 = 3;
                                    for (i=0;i<n;i++){
                                    gotoxy(55,y2);
                                    printf("%d elemento : %d",i+1,v2[i]);
                                    y2 = y2 + 2;
                                    }
                                    getch();
                                   }
                                   else if (tc == true && tc2 == true && tc3 == false){
                                     gotoxy(12,1);
                                   printf("Vettore n 1");
                                   y2 = 3;
                                    for (i=0;i<n;i++){
                                    gotoxy(12,y2);
                                    printf("%d elemento : %d",i+1,v[i]);
                                    y2 = y2 + 2;
                                    }
                                        gotoxy(55,1);
                                   printf("Vettore n 2");
                                    y2 = 3;
                                    for (i=0;i<n;i++){
                                    gotoxy(55,y2);
                                    printf("%d elemento : %d",i+1,v2[i]);
                                    y2 = y2 + 2;
                                    }
                                    getch();
                                   }
                                   else if (tc == true && tc2 == true && tc3 == true){
                                         gotoxy(12,1);
                                   printf("Vettore n 1");
                                   y2 = 3;
                                    for (i=0;i<n;i++){
                                    gotoxy(12,y2);
                                    printf("%d elemento : %d",i+1,v[i]);
                                    y2 = y2 + 2;
                                    }
                                        gotoxy(55,1);
                                   printf("Vettore n 2");
                                    y2 = 3;
                                    for (i=0;i<n;i++){
                                    gotoxy(55,y2);
                                    printf("%d elemento : %d",i+1,v2[i]);
                                    y2 = y2 + 2;
                                    }
                                   
                                        gotoxy(35,1);
                                        printf("Vettore n 3");
                                         y2 = 3;
                                    for (i=0;i<n*2;i++){
                                    gotoxy(35,y2);
                                    printf("%d elemento : %d",i+1,vu[i]);
                                    y2 = y2 + 2;
                                    }
                                    getch();
                                   }      
                                   else{
                                        gotoxy(18,10);
                             textcolor(15);
                             printf("Non hai ancora caricato nessun vettore...");
                             gotoxy(16,12);
                             printf("Utilizza la funzione 1 per caricare i vettori");
                             getch();
                                        }
                                        }break;
                                        
                            
                       case 3:{
                           do{
                             do{
                             cornice();
                            gotoxy(5,8);
                            printf("1) Primo vettore");
                            gotoxy(5,10);
                            printf("2) Secondo vettore");
                            gotoxy(5,12);
                            printf("3) Esci");
                            gotoxy(5,20);
                            printf("Scegliere ------> ");
                            fflush(stdin);
                            scanf("%d",&sw1);
                            system("cls");
                           }while(sw1 > 3 || sw1 < 1 );
                           switch(sw1){
                           case 1:{
                                       if(tc == true)
                                        {
                                             for(s = 1;s < n;s++)
                                             {
                                                   for(i = 0;i < n - 1 ;i++)
                                                   {      in = (i+1);
                                                         if(v[i] > v[in])
                                                         {
                                                                         com = v[i];
                                                                         v[i] = v[in];
                                                                         v[in] = com;
                                                                         }
                                                         }
                                                   }

                                             tc4 = true;
                                             }
                                             
                                             else{
                                                     gotoxy(18,10);
                                         textcolor(15);
                                         printf("Non hai ancora caricato nessun vettore...");
                                         gotoxy(16,12);
                                         printf("Utilizza la funzione 1 per caricare i vettori");
                                         getch();
                                         system("cls");
                                                  }
                                                  

                           }break;
                           case 2:{
                           if(tc2 == true)
                            {
                                 for(s = 1;s < n;s++)
                                 {
                                       for(i = 0;i < n - 1 ;i++)
                                       {      in = (i+1);
                                             if(v2[i] > v2[in])
                                             {
                                                             com = v2[i];
                                                             v2[i] = v2[in];
                                                             v2[in] = com;
                                                             }
                                             }
                                       }

                                 tc5 = true;
                                 }
                                
                                 else{
                                         gotoxy(18,10);
                             textcolor(15);
                             printf("Non hai ancora caricato nessun vettore...");
                             gotoxy(16,12);
                             printf("Utilizza la funzione 1 per caricare i vettori");
                             getch();
                             system("cls");
                                      }
                           }break;
                           }
                           system("cls");
                           }while(sw1 != 3);


                            }break;
                            case 4:{
                                cont1 = 0;
                                do{
                             do{
                             cornice();
                            gotoxy(5,8);
                            printf("1) Primo vettore");
                            gotoxy(5,10);
                            printf("2) Secondo vettore");
                            gotoxy(5,12);
                            printf("3) Terzo vettore");
                            gotoxy(5,14);
                            printf("4) Esci");
                            gotoxy(5,22);
                            printf("Scegliere ------> ");
                            fflush(stdin);
                            scanf("%d",&sw2);
                            system("cls");
                           }while(sw2 > 4 || sw2 < 1 );
                           switch(sw2){
                           case 1:{
                           if(tc == true){
                                                 fg = false;
                                                  cornice();
                                                  gotoxy(5,11);
                                                  printf("Inserisci il numero da cercare ---> ");
                                                  fflush(stdin);
                                                  scanf("%d",&xota);
                                                 do{
                                                       med = (li + ls)/2;
                                                       if (xota == v[med]){
                                                          fg = true;
                                                          }
                                                          else if(xota > v[med]){
                                                               li = med + 1;
                                                               }
                                                               else if(xota < v[med]){
                                                                    ls = med - 1;
                                                                    }
                                                                    cont1++;
                                                       }
                                                       while (fg == false && cont1 < n );
                                                        gotoxy(5,15);
                                                        if(fg == true){
                                                                printf("Il numero e' presente nel vettore");
                                                                }
                                                                else{
                                                                     printf("Il numero non e' presente sul vettore");
                                                                     }
                                                 getch();

                                            }
                                            else{
                                                         gotoxy(18,10);
                             textcolor(15);
                             printf("Non hai ancora caricato nessun vettore...");
                             gotoxy(16,12);
                             printf("Utilizza la funzione 1 per caricare i vettori");
                             getch();
                             system("cls");
                                                 }

                           }break;
                           case 2:{

                           if(tc2 == true){
                                                 fg = false;
                                                  cornice();
                                                  gotoxy(5,11);
                                                  printf("Inserisci il numero da cercare ---> ");
                                                  fflush(stdin);
                                                  scanf("%d",&xota);
                                                 do{
                                                       med = (li + ls)/2;
                                                       if (xota == v2[med]){
                                                          fg = true;
                                                          }
                                                          else if(xota > v2[med]){
                                                               li = med + 1;
                                                               }
                                                               else if(xota < v2[med]){
                                                                    ls = med - 1;
                                                                    }
                                                                    cont1++;
                                                       }
                                                       while (fg == false && cont1 < n );
                                                        gotoxy(5,15);
                                                        if(fg == true){
                                                                printf("Il numero e' presente nel vettore");
                                                                }
                                                                else{
                                                                     printf("Il numero non e' presente sul vettore");
                                                                     }
                                                 getch();

                                            }
                                            else{
                                                         gotoxy(18,10);
                             textcolor(15);
                             printf("Non hai ancora caricato nessun vettore...");
                             gotoxy(16,12);
                             printf("Utilizza la funzione 1 per caricare i vettori");
                             getch();
                             system("cls");
                                                 }
                           }break;
                           case 3:{
                                if(tc3 == true){
                                       
                                        fg = false;
                                                  cornice();
                                                  gotoxy(5,11);
                                                  printf("Inserisci il numero da cercare ---> ");
                                                  fflush(stdin);
                                                  scanf("%d",&xota);
                                                 do{
                                                       med = (li + ls)/2;
                                                       if (xota == vu[med]){
                                                          fg = true;
                                                          }
                                                          else if(xota > vu[med]){
                                                               li = med + 1;
                                                               }
                                                               else if(xota < vu[med]){
                                                                    ls = med - 1;
                                                                    }
                                                                    cont1++;
                                                       }
                                                       while (fg == false && cont1 < n );
                                                        gotoxy(5,15);
                                                        if(fg == true){
                                                                printf("Il numero e' presente nel vettore");
                                                                }
                                                                else{
                                                                     printf("Il numero non e' presente sul vettore");
                                                                     }
                                                 getch();

                                            }
                                            else{
                                                         gotoxy(18,10);
                             textcolor(15);
                             printf("Non hai ancora caricato il terzo vettore...");
                             gotoxy(16,12);
                             printf("Dopo aver ordinato i due vettori utilizza la funzione 6");
                             getch();
                             system("cls");
                                                 }
                                       
                                       
                                
                                
                                }break;
                           }
                           system("cls");
                                }while(sw2 != 4);

                                 }break;
                                 case 5:{
                                     do{
                             do{
                             cornice();
                            gotoxy(5,8);
                            printf("1) Primo vettore");
                            gotoxy(5,10);
                            printf("2) Secondo vettore");
                            gotoxy(5,12);
                            printf("3) Terzo vettore");
                            gotoxy(5,14);
                            printf("4) Esci");
                            gotoxy(5,22);
                            printf("Scegliere ------> ");
                            fflush(stdin);
                            scanf("%d",&sw3);
                            system("cls");
                           }while(sw3 > 4 || sw3 < 1 );
                           switch(sw3){
                           case 1:{
                                      if(tc == true){
                                            cornice();
                                             i = 0;
                                             gotoxy(5,11);
                                             printf("Inserisci il valore da cercare ---------> ");
                                             scanf("%d",&nm);
                                             do{
                                             if(nm == v[i]){
                                                   gotoxy(5,15);
                                                   printf("Il numero e' presente sul vettore");
                                                   sa = true;
                                                   getch();
                                                   }
                                                   else {sa = false;}
                                                   i++;
                                            }while(i < n && sa == false);
                                            if (sa == false){
                                                   gotoxy(5,15);
                                                   printf("Il numero non e' presente sul vettore");
                                                   getch();
                                                   }

                                                system("cls");

                                      }else
                                            {
                                                         gotoxy(18,10);
                             textcolor(15);
                             printf("Non hai ancora caricato nessun vettore...");
                             gotoxy(16,12);
                             printf("Utilizza la funzione 1 per caricare i vettori");
                             getch();
                             system("cls");
                                                 }
                           }break;
                           case 2:{
                               if(tc2 == true){
                                    cornice();
                                             i = 0;
                                             gotoxy(5,11);
                                             printf("Inserisci il valore da cercare ---------> ");
                                             scanf("%d",&nm);
                                             do{
                                             if(nm == v2[i]){
                                                   gotoxy(5,15);
                                                   printf("Il numero e' presente sul vettore");
                                                   sa = true;
                                                   getch();
                                                   }
                                                   else {sa = false;}
                                                   i++;
                                            }while(i < n && sa == false);
                                            if (sa == false){
                                                   gotoxy(5,15);
                                                   printf("Il numero non e' presente sul vettore");
                                                   getch();
                                                   }



                                      }else
                                            {
                                                         gotoxy(18,10);
                             textcolor(15);
                             printf("Non hai ancora caricato nessun vettore...");
                             gotoxy(16,12);
                             printf("Utilizza la funzione 1 per caricare i vettori");
                             getch();
                             system("cls");
                                                 }
                           }break;
                           case 3:{
                                if(tc3 == true)
                                {
                                    cornice();
                                             i = 0;
                                             gotoxy(5,11);
                                             printf("Inserisci il valore da cercare ---------> ");
                                             scanf("%d",&nm);
                                             do{
                                             if(nm == vu[i]){
                                                   gotoxy(5,15);
                                                   printf("Il numero e' presente sul vettore");
                                                   sa = true;
                                                   getch();
                                                   }
                                                   else {sa = false;}
                                                   i++;
                                            }while(i < n && sa == false);
                                            if (sa == false){
                                                   gotoxy(5,15);
                                                   printf("Il numero non e' presente sul vettore");
                                                   getch();
                                                   }



                                      }else
                                            {
                                                         gotoxy(18,10);
                             textcolor(15);
                             printf("Non hai ancora caricato il terzo vettore...");
                             gotoxy(16,12);
                             printf("Dopo aver ordinato i due vettori utilizza la funzione 6");
                             getch();
                             system("cls");
                                                 }
                                
                                
                                
                                
                                }
                           }
                           system("cls");
                                     }while(sw3 != 4);
                       }break;
          case 6:{
              if(tc ==true && tc2 == true && tc4 == true && tc5 == true){
              merge();
              tc3 = true;
              }
else if(tc ==true && tc2 == true && tc4 == false || tc5 == false){
      
      textcolor(15);
       gotoxy(18,10);
                             printf("Non hai ancora ordinato i vettori...");
                             gotoxy(16,12);
                             printf("Utilizza la funzione 3 per ordinare  i vettori");
                             getch();
                             system("cls");
      
      }
      else if(tc == false || tc2 == false){
           textcolor(15);
            gotoxy(18,10);
                             printf("Non hai ancora caricato nessun vettore...");
                             gotoxy(16,12);
                             printf("Utilizza la funzione 1 per caricare i vettori");
                             getch();
                             system("cls");
           
           }
          }break;
 }                      
}while(a != 7);
}




