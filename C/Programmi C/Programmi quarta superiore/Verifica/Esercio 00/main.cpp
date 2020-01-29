#include <cstdlib>
#include<iostream>
#include<cstdio>
#include<windows.h>

using namespace std;
int const n=2,m=3;
int mat[n][m],d,i,p,mag;

int caricamento(){
    for(i=0;i<n;i++){
        for(p=0;p<m;p++){
            cout<<"inserire il valore "<<i<<" di "<<p<<" : ";
           cin>>(mat[i][p]);
        }
    }
    mag=mat[0][0];
} 



int elaborazione(){
    for(i=0;i<n;i++){
        for(p=0;p<m;p++){
            
            if(mat[i][p]>mag){
                mag=mat[i][p];
            }
        }   
    }
}

int stampa(){
    
    cout<<mag;
}

int main() {
    caricamento();
    elaborazione();
    stampa();
}

