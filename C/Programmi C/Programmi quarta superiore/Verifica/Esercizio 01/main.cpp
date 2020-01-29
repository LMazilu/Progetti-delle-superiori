#include <cstdlib>
#include<iostream>
#include<cstdio>
#include<windows.h>

using namespace std;
int const n = 5;
int a[n],b[n],i,p,g=n-1,d;

int caricamento(){
    for(i=0;i<n;i++){
        std::cout<<"Digitare il valore "<<i<<" : ";
        std::cin>>a[i];
    }
} 



int elaborazione(){
    for(i=0;i<n;i++){
        d=a[i]%2;
        if(d==0){
            b[p]=a[i];
                    p++;
        }
        else{
            b[g]=a[i];
            g--;
        }
    }
}

int stampa(){
    for(i=0;i<i+1;i++){
        std::cout<<" "<<b[i];
    }
}

int main() {
    caricamento();
    elaborazione();
    stampa();
}

