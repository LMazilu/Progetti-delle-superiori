#include<iostream>
#include<conio2.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main()
{
 int N,M,C,D,U,DM;
 char risp;

do{
   N=0;  
 do {
    system("cls");
    textcolor(14);
    gotoxy(9,1);
    printf("Programma per la trasformazione di un numero da cifre a lettere");
    gotoxy(9,9);
    printf("Immetti il numero desiderato (tra 1 e 10000): ");
    gotoxy(55,9);
    fflush(stdin);
    scanf("%d",&N);
    }while(N<1 || N>10000);
    
    if(N==10000)
           {
               printf("DIECIMILA");}
               


M=N/1000;
C=(N%1000)/100;
D=(N%100)/10;
U=N%10;

switch(M)
{
  case 1:{
          printf("MILLE");
          }break;
          
 case 2:{
          printf("DUEMILA");
          }break;         
  case 3:{
          printf("TREMILA");
          }break;       
          
 case 4:{printf("QUATTROMILA");
      }break;
      
 case 5:{printf("CINQUEMILA");          
      }break;
      
 case 6:{printf("SEIMILA");
      }break;
      
  case 7:{printf("SETTEMILA");
      }break;
      
 case 8:{printf("OTTOMILA");          
      }break;
      
 case 9:{printf("NOVEMILA");
      }break;     
}      
      
 switch(C)
{ 
  case 1:{
          printf("CENTO");
          }break;
          

 case 2:{
          printf("DUECENTO");
          }break;         
 
 case 3:{
          printf("TRECENTO");
          }break;            
 
 case 4:{
          printf("QUATTROCENTO");
          }break;
          
 
 case 5:{
          printf("CINQUECENTO");
          }break;         
 
 case 6:{
          printf("SEICENTO");
          }break;          
 
 case 7:{
          printf("SETTECENTO");
          }break;
          
 
 case 8:{
          printf("OTTOCENTO");
          }break;         
 
 case 9:{
          printf("NOVECENTO");
          }break;          


}          
  
  

   switch(D)
{ 
  case 1:{
          if(U==0){printf("DIECI");}
          if (U==1){printf("UNDICI");}
          if (U==2){printf("DODICI");}
          if (U==3){printf("TREDICI");}
          if (U==4){printf("QUATTORDICI");}
          if (U==5){printf("QUINDICI");}
          if (U==6){printf("SEDICI");}
          if (U==7){printf("DICIASSETTE");}
          if (U==8){printf("DICIOTTO");}
          if (U==9){printf("DICIANNOVE");}
          }break;
                                 
   case 2:{if(U==1 || U==8)
                  {printf("VENT");}
          else{  
          printf("VENTI");}
          }break;
          
  
  case 3:{if(U==1 || U==8)
                  {printf("TRENT");}
          else{  
          printf("TRENTA");}
          }break;         
  
  case 4:{if(U==1 || U==8)
                  {printf("QUARANT");}
          else{  
          printf("QUARANTA");}
          }break;   
         
  
  case 5:{if(U==1 || U==8)
                  {printf("CINQUANT");}
          else{  
          printf("CINQUANTA");}
          }break;         
  
  case 6:{if(U==1 || U==8)
                  {printf("SESSANT");}
          else{  
          printf("SESSANTA");}
          }break;      
  
  
  case 7:{if(U==1 || U==8)
                  {printf("SETTANT");}
          else{  
          printf("SETTANTA");}
          }break;
          
  
  case 8:{if(U==1 || U==8)
                  {printf("OTTANT");}
          else{  
          printf("OTTANTA");}
          }break;         
  
  case 9:{if(U==1 || U==8)
                  {printf("NOVANT");}
          else{  
          printf("NOVANTA");}
          }break;   
          
           

}
if (D !=1)
switch(U)
{
case 1:{ printf("UNO");}break;                    
case 2:{ printf("DUE");}break;
case 3:{ printf("TRE");}break;
case 4:{ printf("QUATTRO");}break;
case 5:{ printf("CINQUE");}break;
case 6:{ printf("SEI");}break;
case 7:{ printf("SETTE");}break;
case 8:{ printf("OTTO");}break;
case 9:{ printf("NOVE");}break;
}
         
  
  
  
  
  
  
  
  
    

do { printf("\n\nvuoi ripetere? (s/n)");
		fflush(stdin);
scanf("%c", &risp); } 
while (risp != 's' && risp != 'n' && risp != 'S' && risp != 'N');} 
while (risp =='S' || risp =='s');
}
