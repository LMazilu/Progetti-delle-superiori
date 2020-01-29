#include<iostream>
#include<conio2.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main()
{
 int A,M,C,D,R,U,N;
 char risp;    
 do{
    system("cls");
    gotoxy(20,1);
    printf("Programma per calcolare i numeri di Amstrong");
    do{
       printf("\nScegli il numero limite dei numeri di amstrong: ");
       scanf("%d",&N);
       }while(N<1 || N>9999);
       
     A=1;
        printf("\n\nNumeri di Amstrong: \n"); 
     do{
                           
                           
        
        if(A<10){
                 printf("%d ",A);
                 }else{   
                       if(A<100){
                                 D=A/10;
                                 U=A%10;
                                 if(A==(D*D)+(U*U))
                                 {
                                  printf("%d ",A);                 
                                  }                                                                 
                                 }else{
                                       if(A<1000){
                                                  C=A/100;
                                                  R=A%100;
                                                  D=R/10;
                                                  U=A%10;
                                                  if(A==(C*C*C)+(D*D*D)+(U*U*U)){
                                                                                printf("%d ",A);
                                                                                }
                                                  
                                                  }else{
                                                        M=A/1000;
                                                        R=A%1000;
                                                        C=R/100;
                                                        R=A%100;
                                                        D=R/10;
                                                        U=A%10;
                                                        if(A==(M*M*M*M)+(C*C*C*C)+(D*D*D*D)+(U*U*U*U)){
                                                                                                      printf("%d ",A);
                                                                                                      }
                                                        
                                                        }
                                       
                                       }  
                          
                       }
        
        
        
        A=A+1;
        
     
         }while(A<=N);
         do{
         gotoxy(1,8);         
         printf("vuoi ripetere il programma? (s/n)      ");
         gotoxy(35,8);
         
         
         scanf("%c",&risp);
            }while(risp!='s'&&risp!='S'&&risp!='n'&&risp!='N');
    
    
    
    }while(risp=='s'||risp=='S');   
    
    
    
    
    
    
}
