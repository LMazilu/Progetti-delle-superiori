#include<stdlib.h>
#include<stdio.h>
#include<conio2.h>
#include<iostream>
#include<stdbool.h>
#include<string.h>
#include<windows.h>

char id[50],b[12];
int i;
int const s = 150;

int login()
{
    gotoxy(23,4);
    system("COLOR 0B");
    printf(".____                 .__        ");
    gotoxy(23,5);
    printf("|    |    ____   ____ |__| ____  ");
    gotoxy(23,6);
    printf("|    |   /  _ \\ / ___\\|  |/    \\ ");
    gotoxy(23,7);
    printf("|    |__(  <_> ) /_/  >  |   |  \\ ");
    gotoxy(23,8);
    printf("|_______ \\____/\\___  /|__|___|  / ");
    gotoxy(23,9);
    printf("        \\/    /_____/         \\/ ");
    textcolor(15);
    gotoxy(27,13);
    printf("ID: ");
    gets(id);
}

int benv()
{   textcolor(15);
    gotoxy(2,2);
    printf("B");
    Sleep(s);
    gotoxy(3,2);
    printf("e");
    Sleep(s);
    gotoxy(4,2);
    printf("n");
    Sleep(s);
    gotoxy(5,2);
    printf("v");
    Sleep(s);
    gotoxy(6,2);
    printf("e");
    Sleep(s);
    gotoxy(7,2);
    printf("n");
    Sleep(s);
    gotoxy(8,2);
    printf("u");
    Sleep(s);
    gotoxy(9,2);
    printf("t");
    Sleep(s);
    gotoxy(10,2);
    printf("o");
    Sleep(s);
}

int main()
{
    login();
    system("cls");
    benv();
    gotoxy(12,2);
    textcolor(12);
    for(i=0;i<20;i++)
    {
         printf("%c",id[i]);
         Sleep(s);
    }
    
    getch();
    
}
