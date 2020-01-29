#include<conio2.h>
#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<iostream>
#include<string.h>


int main()
{


int  gg,mm,aa,r,lf,i,controllo,nc,nn,lunghezza,j,numcons,numvoc,cv,cc,lunghezzacons,cn,d,u,c,mc,M,cg,X,Z,resto;
char nome[30],cognome[30],luogo[30],gen,CF[16],cons[30],voc[30],consnome[30],vocnome[30],nomecf[5],data[5],cgn[5],CD;

textcolor(LIGHTGREEN);
gotoxy(36,1);
printf("CODICE FISCALE");
gotoxy(18,4);
printf("Nome: ..............................");
gotoxy(18,6);
printf("Cognome: ..............................");
gotoxy(18,8);
printf("Data di nascita  ../../....");
gotoxy(18,10);
printf("Luogo di nascita: Torino");
gotoxy(18,12);
printf("Genere M/F: .");


do{
      controllo=0;
      gotoxy(18,4);
      printf("Nome: ..............................");
      gotoxy(24,4);
      fflush(stdin);
      gets(nome);
     nn=strlen(nome);
        nome[0]=toupper(nome[0]);
        if(nome[0]>='A'&&nome[0]<='Z')
        {
        for(i=1;i<nn-1;i++)
        {
                            nome[i]=toupper(nome[i]);
                            if(!(nome[i]>='A'&&nome[i]<='Z')&&nome[i]!=' '&&nome[i]!='\'')
                          
                            {
                                                                controllo=1;
                            }
        }
        nome[i]=toupper(nome[i]);
        if(!(nome[i]>='A'&&nome[i]<='Z'))
         {
           controllo=1;
         }
        }
        else
        {
            controllo=1;
        }
 }while(controllo==1);
 gotoxy(24,4);
 puts(nome);
        
        
do{
        controllo=0;
              
        gotoxy(18,6);
        printf("Cognome: ..............................");
        gotoxy(27,6);
        fflush(stdin);
        gets(cognome);
        nc=strlen(cognome);
        cognome[0]=toupper(cognome[0]);
        if(cognome[0]>='A'&&cognome[0]<='Z')
        {
        for(i=1;i<nc-1;i++)
        {
                            cognome[i]=toupper(cognome[i]);
                            if(!(cognome[i]>='A'&&cognome[i]<='Z')&&cognome[i]!=' '&&cognome[i]!='\'')
                            {
                                                                controllo=1;
                            }
        }
        cognome[i]=toupper(cognome[i]);
        if(!(cognome[i]>='A'&&cognome[i]<='Z'))
         {
           controllo=1;
         }
        }
        else
        {
            controllo=1;
        }
 }while(controllo==1);
 gotoxy(27,6);
 puts(cognome);
 

                                         do{gotoxy(18,8);
                                     printf("Data di nascita  ../../....                                                  ");
                                       gotoxy(41,8);
                                       fflush(stdin);
                                       scanf("%d",&aa);
                                       }while(aa < 1900 || aa > 2100);
                                       
                                       
                                    
                                       if(aa%4 == 0)
                                       lf= 29;
                                          else 
                                       lf = 28;
                                       
                                        do{
                                            gotoxy(18,8);
                                     printf("Data di nascita  ../../%d                                                  ",aa);
                                       gotoxy(38,8);
                                       fflush(stdin);
                                       scanf("%d",&mm);
                                       }while(mm <1 || mm>12);           
                                       
                                    do{   
                                    do{
 
                                    do{gotoxy(18,8);
                                     printf("Data di nascita  ../%2d/%d                                                  ",mm,aa);
                                       gotoxy(35,8);
                                       fflush(stdin);
                                       scanf("%d",&gg);
                                       }while(gg < 1 || gg > 31);
   
                                    }while((gg>30)&& (mm==4)|| 
                                           (gg>30)&& (mm==6)||
                                           (gg>30)&& (mm==9)||
                                           (gg>30)&& (mm==11));
                                    
                                    }while (mm==2 && gg>lf);              
                 





controllo=0;     
gotoxy(18,10);
printf("Luogo di nascita: Torino");


do{      
gotoxy(18,12);
printf("Genere M/F: .");
gotoxy(30,12);
fflush(stdin);
scanf("%c",&gen);
gen=toupper(gen);
gotoxy(30,12);
printf("%c",gen);
}while(gen!='m'&& gen!='M'&& gen!='f'&&gen!='F');



//INIZIO CALCOLI



lunghezza=strlen(cognome);
numcons=0;
numvoc=0;

                   //NOME
            lunghezza=strlen(nome);
            numvoc=0;
            numcons=0;
            cc=0;
            cv=0;
            if(lunghezza>=3)
            {
                          for((i=0,cc=0,cv=0);i<lunghezza;i++)
    {
       if(nome[i]!='A'&&nome[i]!='E'&&nome[i]!='I'&&nome[i]!='O'&&nome[i]!='U')
        {
            numcons=numcons+1;
            if(nome[i]==' ')
            {numcons=numcons-1;}
            else{
                  if(nome[i]!='\'')
             {
                 
                 consnome[cc]=nome[i];
                 cc++;
                 }
                 else
                 { numcons=numcons-1;}
                             }
            }
        else{
            
             numvoc=numvoc+1;
             vocnome[cv]=nome[i];
             cv++;
             
             }
                                                                                                 


    }
    
    if(numcons>=4)
    {
        
         i=0;
           nomecf[i]=consnome[0];
            nomecf[i+1]=consnome[2];
             nomecf[i+2]=consnome[3];
             
             }
             else
             {
                 if(numcons==3)
                 {
                               
                    for(i=0;i<3;i++)
                    {
                      nomecf[i]=consnome[i];
                      }
                      }
                      else{
                           for(i=0;i<numcons;i++)
                           {
                                nomecf[i]=consnome[i];
                                }  
                                cv=0;
                if(i==2)
                {
                   while(i<3)
                   {     
                   nomecf[i]=vocnome[cv]; 
                   i++;
                   cv++;
                   }
                   }
                   if(i==1)
                   {
                           while(i<3)
                   {     
                   nomecf[i]=vocnome[cv]; 
                   i++;
                   cv++;
                        }   
                        } 
                        if(i==0)
                        {   
                            while(i<3)
                   {     
                   nomecf[i]=vocnome[cv]; 
                   i++;
                   cv++; 
                   }  
                   }
                   }
                   }
                   consnome[cc]='\x0';

                   }
                   
                   else
                   {
                       
                       for((i=0,cc=0,cv=0);i<lunghezza;i++)
    {
       if(nome[i]!='A'&&nome[i]!='E'&&nome[i]!='I'&&nome[i]!='O'&&nome[i]!='U')
        {
            numcons=numcons+1;
            if(nome[i]==' ')
            {numcons=numcons-1;}
            else{
                  if(nome[i]!='\'')
             {
                 
                 consnome[cc]=nome[i];
                 cc++;
                 }
                 else
                 { numcons=numcons-1;}
                             }
            }
        else{
            
             numvoc=numvoc+1;
             vocnome[cv]=nome[i];
             cv++;
             
             }
             
                                                                                                 

    }
    
    cv=0;
    for(i=0;i<numcons;i++)
    {
         nomecf[i]=consnome[i];
         }
        
           while(i<2)
           { 
           nomecf[i]=vocnome[cv];
           cv++;
           i++;
           }
           nomecf[i]='X';

           }
           
           //COGNOME
                       
if(lunghezza>=3)
{
    for((i=0,cc=0,cv=0);i<lunghezza;i++)
    {
       if(cognome[i]!='A'&&cognome[i]!='E'&&cognome[i]!='I'&&cognome[i]!='O'&&cognome[i]!='U')
        {
            numcons=numcons+1;
            if(cognome[i]==' ')
            {numcons=numcons-1;}
            else{
                  if(cognome[i]!='\'')
             {
                 
                 cons[cc]=cognome[i];
              
              
            gotoxy(1,22);
                  cc++;
                 }
                 else
                 { numcons=numcons-1;}
                             }
            }
        else{
            
             numvoc=numvoc+1;
             voc[cv]=cognome[i];
             cv++;
             
             }
                                                                                                 

    }
  
    if(numcons>=3)
    {
         for(i=0;i<3;i++)
         {      
                cgn[i]=cons[i];
                }
                }  
                 
      else
      {
          
          
          for(i=0;i<numcons;i++)
          {  
                cgn[i]=cons[i];
                } 
                cv=0;
                if(i==2)
                {
                   while(i<3)
                   {     
                   cgn[i]=voc[cv]; 
                   cv++;
                   }
                   }
                   if(i==1)
                   {
                           while(i<3)
                   {     
                   cgn[i]=voc[cv]; 
                   i++;
                   cv++;
                        }   
                        } 
                        if(i==0)
                        {   
                            while(i<3)
                   {     
                   cgn[i]=voc[cv]; 
                   i++;
                   cv++; 
                   }  
                   }
                   
}

    

}  

else
{
    for((i=0,cc=0,cv=0);i<lunghezza;i++)
    {
       if(cognome[i]!='A'&&cognome[i]!='E'&&cognome[i]!='I'&&cognome[i]!='O'&&cognome[i]!='U')
        {
            numcons=numcons+1;
            if(cognome[i]==' ')
            {numcons=numcons-1;}
            else{
                  if(cognome[i]!='\'')
             {
                 
                 cons[cc]=cognome[i];
                 cc++;
                 }
                 else
                 { numcons=numcons-1;}
                             }
            }
        else{
            
             numvoc=numvoc+1;
             voc[cv]=cognome[i];
             cv++;
             
             }
             
                                                                                                 

    }
    
    cv=0;
    for(i=0;i<numcons;i++)
    {
         cgn[i]=cons[i];
         }
        
           while(i<2)
           { 
           cgn[i]=voc[cv];
           cv++;
           i++;
           }
           cgn[i]='X';
               
                   
                   

                   }
                                  
                           
            
                                                              //DATA
                                                              
                                                              
                                                              
    mc=aa/1000;
    c=(aa-(mc*1000))/100;
    d=(aa-(mc*1000+c*100))/10;
    u=aa-(mc*1000+c*100+d*10);                                                          
     switch(mm)
     {
                   case 1:
                   {M='A';}break;
                   case 2:
                   {M='B';}break;
                   case 3:
                   {M='C';}break;
                   case 4:
                   {M='D';}break;
                   case 5:
                   {M='E';}break;
                   case 6:
                   {M='H';}break;
                   case 7:
                   {M='L';}break;
                   case 8:
                   {M='M';}break;
                   case 9:
                   {M='P';}break;
                   case 10:
                   {M='R';}break;
                   case 11:
                   {M='S';}break;
                   case 12:
                   {M='T';}break;
                   }
                   
      if(gen=='F')
      {   cg=gg+40;
      
      sprintf(data, "%d%d%c%d",d,u,M,cg);
      }
      else{
           if(gg>=1&&gg<=9)
           {
                           
                           sprintf(data, "%d%d%c%d",d,u,M,gg); 
                           }       
              else{     
               sprintf(data, "%d%d%c%d",d,u,M,gg);    
               }                                                                                                                                
               }

              
              luogo[0]='L';
              luogo[1]='2';
              luogo[2]='1';
              luogo[3]='9';
              
              j=0;
              
              strcat(CF,cgn);
              strcat(CF,nomecf);
              strcat(CF,data);
              strcat(CF,luogo);
                                                

              Z=0;
              X=0;
              for(i=0;i<15;i=i+2)
              {
                 switch(CF[i])
                 {
                         case '0':
                         {
                                X=1;
                                }break;
                         case '1':
                         {
                                X=0;
                                }break;
                         case '2':
                         {
                                X=5;
                                }break; 
                         case '3':
                         {
                                X=7;
                                }break; 
                         case '4':
                         {
                                X=9;
                                }break; 
                         case '5':
                         {
                                X=13;
                                }break; 
                         case '6':
                         {
                                X=15;
                                }break; 
                         case '7':
                         {
                                X=17;
                                }break; 
                         case '8':
                         {
                                X=19;
                                }break; 
                         case '9':
                         {
                                X=21;
                                }break; 
                         case 'A':
                         {
                                X=1;
                                }break; 
                         case 'B':
                         {
                                X=0;
                                }break; 
                         case 'C':
                         {
                                X=5;
                                }break; 
                         case 'D':
                         {
                                X=7;
                                }break; 
                         case 'E':
                         {
                                X=9;
                                }break; 
                         case 'F':
                         {
                                X=13;
                                }break; 
                         case 'G':
                         {
                                X=15;
                                }break; 
                         case 'H':
                         {
                                X=17;
                                }break; 
                         case 'I':
                         {
                                X=19;
                                }break; 
                         case 'J':
                         {
                                X=21;
                                }break;
                         case 'K':
                         {
                                X=2;
                                }break; 
                         case 'L':
                         {
                                X=4;
                                }break; 
                         case 'M':
                         {
                                X=18;
                                }break; 
                         case 'N':
                         {
                                X=20;
                                }break; 
                         case 'O':
                         {
                                X=11;
                                }break; 
                         case 'P':
                         {
                                X=3;
                                }break; 
                         case 'Q':
                         {
                                X=6;
                                }break; 
                         case 'R':
                         {
                                X=8;
                                }break; 
                         case 'S':
                         {
                                X=12;
                                }break; 
                         case 'T':
                         {
                                X=14;
                                }break; 
                         case 'U':
                         {
                                X=16;
                                }break; 
                         case 'V':
                         {
                                X=10;
                                }break;
                         case 'W':
                         {
                                X=22;
                                }break; 
                         case 'X':
                         {
                                X=25;
                                }break; 
                         case 'Y':
                         {
                                X=24;
                                }break; 
                         case 'Z':
                         {
                                X=23;
                                }break; 
                         
                         } 
                         Z=Z+X;  
                         }  
                         
                         
                         for(i=1;i<15;i=i+2)
              {
                 switch(CF[i])
                 {
                         case '0':
                         {
                                X=0;
                                }break;
                         case '1':
                         {
                                X=1;
                                }break;
                         case '2':
                         {
                                X=2;
                                }break; 
                         case '3':
                         {
                                X=3;
                                }break; 
                         case '4':
                         {
                                X=4;
                                }break; 
                         case '5':
                         {
                                X=5;
                                }break; 
                         case '6':
                         {
                                X=6;
                                }break; 
                         case '7':
                         {
                                X=7;
                                }break; 
                         case '8':
                         {
                                X=8;
                                }break; 
                         case '9':
                         {
                                X=9;
                                }break; 
                         case 'A':
                         {
                                X=0;
                                }break; 
                         case 'B':
                         {
                                X=1;
                                }break; 
                         case 'C':
                         {
                                X=2;
                                }break; 
                         case 'D':
                         {
                                X=3;
                                }break; 
                         case 'E':
                         {
                                X=4;
                                }break; 
                         case 'F':
                         {
                                X=5;
                                }break; 
                         case 'G':
                         {
                                X=6;
                                }break; 
                         case 'H':
                         {
                                X=7;
                                }break; 
                         case 'I':
                         {
                                X=8;
                                }break; 
                          case 'J':
                         {
                                X=9;
                                }break;
                         case 'K':
                         {
                                X=10;
                                }break; 
                         case 'L':
                         {
                                X=11;
                                }break; 
                         case 'M':
                         {
                                X=12;
                                }break; 
                         case 'N':
                         {
                                X=13;
                                }break; 
                         case 'O':
                         {
                                X=14;
                                }break; 
                         case 'P':
                         {
                                X=15;
                                }break; 
                         case 'Q':
                         {
                                X=16;
                                }break; 
                         case 'R':
                         {
                                X=17;
                                }break; 
                         case 'S':
                         {
                                X=18;
                                }break; 
                         case 'T':
                         {
                                X=19;
                                }break; 
                         case 'U':
                         {
                                X=20;
                                }break; 
                         case 'V':
                         {
                                X=21;
                                }break;
                         case 'W':
                         {
                                X=22;
                                }break; 
                         case 'X':
                         {
                                X=23;
                                }break; 
                         case 'Y':
                         {
                                X=24;
                                }break; 
                         case 'Z':
                         {
                                X=25;
                                }break; 
                         
                         } 
                         Z=Z+X;  
                         }
                         resto=Z%26;
                         
                         switch(resto)
                         {
                                 case 0:
                                 {
                                        CD='A';
                                        }break;
                                 case 1:
                                 {
                                        CD='B';
                                        }break;
                                 case 2:
                                 {
                                        CD='C';
                                        }break;
                                 case 3:
                                 {
                                        CD='D';
                                        }break;
                                 case 4:
                                 {
                                        CD='E';
                                        }break;
                                 case 5:
                                 {
                                        CD='F';
                                        }break;
                                 case 6:
                                 {
                                        CD='G';
                                        }break;
                                 case 7:
                                 {
                                        CD='H';
                                        }break;
                                 case 8:
                                 {
                                        CD='I';
                                        }break;
                                 case 9:
                                 {
                                        CD='J';
                                        }break;
                                 case 10:
                                 {
                                        CD='K';}
                                        break;
                                 case 11:
                                 {
                                        CD='L';
                                        }break;
                                 case 12:
                                 {
                                        CD='M';
                                        }break;
                                 case 13:
                                 {
                                        CD='N';
                                        }break;
                                 case 14:
                                 {
                                        CD='O';
                                        }break;
                                 case 15:
                                 {
                                        CD='P';
                                        }break;
                                 case 16:
                                 {
                                        CD='Q';
                                        }break;
                                 case 17:
                                 {
                                        CD='R';
                                        }break;
                                 case 18:
                                 {
                                        CD='S';
                                        }break;
                                 case 19:
                                 {
                                        CD='T';
                                        }break;
                                 case 20:
                                 {
                                        CD='U';
                                        }break;
                                 case 21:
                                 {
                                        CD='V';
                                        }break;
                                 case 22:
                                 {
                                        CD='W';
                                        }break;
                                 case 23:
                                 {
                                        CD='X';
                                        }break;
                                 case 24:
                                 {
                                        CD='Y';
                                        }break;
                                 case 25:
                                 {
                                        CD='Z';
                                        }break;       
                                 }
            
            system("cls");
            gotoxy(10,15);
            printf("Il tuo codice fiscale e' -->");
            gotoxy(38,15);
            CF[15]=CD;
            CF[16]='\0';
            puts(CF);
            
            


getch();
}
