#include<iostream>
#include<conio2.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

int carattere;
//Riceve un caratere e dice Vero se e' vocale
int isvocali(carattere){
if(carattere=='A' ||carattere=='E'|| carattere=='I' || carattere=='O' || carattere=='U'||carattere=='a'|| carattere=='e'|| carattere=='i' ||carattere=='o' || carattere=='u'){
//True 1: sono vocali
return 1;
}
else{
//False 0: sono consonanti
return 0;   

}
}

//Trasforma la stringa da minuscola in minuscola
char maiuscolo(char carattere){
int n=0;
n=carattere;
if(n>=97 && n<=122){
n-=32;
}
return n;
}

int main(){

//Introduzioni delle variabili
int DIM=7;
char nome[20],cognome[30];
char codfiscale[DIM]; //Output
int i,j; //Variabili for
int risn,risc; //Verifica vocali/consonanti
int contatore=0; //Contatore
int isvocali;
//char x='X';
char x[2]={'X',0};

//Input
printf("Inserisci il tuo nome: ");
gets(nome);
for (i=0; i<strlen(nome); i++) {
nome[i]=toupper(nome[i]);
}

printf("Inserisci il tuo cognome: ");
gets(cognome);
for (i=0; i<strlen(cognome); i++) {
cognome[i]=toupper(cognome[i]);
}

//Inserimento cognome
for(i=0;i<strlen(cognome);i++){
risc=isvocali(cognome[i]);
//Funzionamento normale
if(risc==0 && contatore<4){
codfiscale[contatore]=cognome[i];
contatore=contatore+1;
}
if(contatore>=3){
break; //BREAK
}
//Funzionamento ausiliario: se finiscono le consonanti
if(i==strlen(cognome)-1 && contatore<4){
for(j=0;j<strlen(cognome);j++){
if(risc==1 && contatore<4){
codfiscale[contatore]=cognome[j];
contatore=contatore+1;
}
while(j==strlen(cognome)-1 && contatore<3){
codfiscale[contatore]='X';
contatore=contatore+1;
//strcat(codfiscale,x); //Inserisco X
}
}
}
}

//Inserimento nome
if(contatore>2 && contatore<7){
for(i=0;i<strlen(nome);i++){
risn=isvocali(nome[i]);
//Funzionamento normale
if(risn==0 && contatore<7){ //Se consonanti
codfiscale[contatore]=nome[i];
contatore=contatore+1;
}
if (contatore>=5 && contatore<7 && risn==0) { //Se consonanti
i++;
if (contatore>4 && contatore<7 && risn==0) {
codfiscale[contatore]=nome[i];
contatore=contatore+1;
}
}
if(contatore>=6){
break; //BREAK
}
//Funzionamento ausiliario: se finiscono le consonanti
if(i==strlen(nome)-1 && contatore<7){
for(j=0;j<strlen(nome);j++){
if(risn==1 && contatore<7){ //Se vocali
codfiscale[contatore]=nome[j];
contatore=contatore+1;
}
while(j==strlen(nome)-1 && contatore<6){
codfiscale[contatore]='X';
contatore=contatore+1;
//strcat(codfiscale,x); //Inserisco X
}
}
}
}
}


//Stampa della lista
for(i=0;i<strlen(codfiscale);i++){
printf("%c",codfiscale[i]);
}

//The End
getchar();
return 0;
}
