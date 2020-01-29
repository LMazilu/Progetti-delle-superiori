/*Dati 2 vettori di caratteri stampare vero se il 2 vettore è contenuto nel 1, falso altrimenti*/
#include <cstdlib>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
using namespace std;
    int const k = 100;
    char v[k],v0[k];
    int sw,n,i,i0,st,n0,st2;

int caricamento(){
    do{
        printf("Lunghezza del 1 vettore?   ");
        scanf("%d",&n);
    }while(n>k/4);
    do{
        printf("Lunghezza del 2 vettore?   ");
        scanf("%d",&n0);
    }while(n>k/4);
    for(i=0;i<n;i++){
        printf("\nPrimo vettore %d elemento:",i+1);
        cin>>(v[i]);
    }
    for(i0=0;i0<n0;i0++){
        printf("\nSecondo vettore %d elemento: ",i0+1);
        cin>>(v0[i0]);
    }
}

int calcolo(){
    for(i=0,i0=0;((i<n) && (i0<n0));i++){
        if(v0[i0]==v[i]) { i0++; st2=1;}
        else {
            i0=0;
            if(st2=1){
                i--;
            }
        }
        }
    if(i0==n0) {st=1;}
    }


int stampa(){
    
    
    switch(st){
        case 1:{
            printf("\n\n\n vero");
        }break;
        case 0:{
            printf("\n\n\n falso");
        }
    }
}

int main() {

            do {

		do {
			printf("  \n             Esercizio vettori di c\n\n");
			printf("   1) Caricamento vettori\n\n");
			printf("   2) Elaborazione calcolo\n\n");
			printf("   3) Visualizza risposta\n\n");
			printf("   4) Esci\n\n\n\n");

			printf("       Inserisci la scelta: ");
			scanf("%d",&sw);
                    } while(sw<1 || sw>4);
                    switch(sw){
                        case 1:{
                            caricamento();
                        }break;
                        case 2:{
                        calcolo();
                            
                        }break;
                        case 3:{
                            stampa();
                        }
                    }
                }while(sw!=4);
}
