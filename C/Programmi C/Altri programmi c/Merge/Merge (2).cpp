#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<iostream>
#include<conio2.h>

int merge ()
{
    int i, j, k;
    int const m = 8;
    int const n = 4;
    int v1[m], v2[n], vu[m+n];
    
    for(i=0, j=0, k=0; i<m && j<n; k++){
             if(v1[i] < v2[j])
             {
                 vu[k] = v1[i];
                 i++;     
             }else
             {
                  vu[k] = v2[j];
                  j++;
             }
    }
    if(i == m)
    {
        do{
            vu[k] = v2[j];
            k++;
            j++;
          }while(j < n);
    }else
    {
          do{
             vu[k] = v1[i];
             k++;
             i++; 
            }while(i < n);
    }
}
