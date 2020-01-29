#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<iostream>
#include<conio2.h>
#include<windows.h>
#include<stdbool.h>

int main()
{
    int key,ans;
    bool a;
	char fr = '>';
	char str1[4];
	//str1[0] = 'E';
	//str1[1] = 's';
	//str1[2] = 'c';
	//str1[3] = 'i';
	//str1[4] = '\0';
	char str0[5];
	str0[0] = 'A';
	str0[1] = 'v';
	str0[2] = 'v';
	str0[3] = 'i';
	str0[4] = 'a';
	str0[5] = '\0';
	do{
     system("cls");
     ans = 0;
	 key = 0;
	gotoxy(46,6);
	textcolor(15);
	printf("Google's CMD\n");
	gotoxy(40,10);
	textcolor(15);
	printf("%c      %s",fr,str0);
	gotoxy(40,12);
	textcolor(15);
	printf("       %s",str1);
		do{
            key = getch();

                switch (key) {
                                case 72:{
                                    a = false;
									system("cls");
									gotoxy(46,6);
                                    textcolor(15);
                                    printf("Google's CMD\n");
                                    gotoxy(40,10);
                                    textcolor(15);
                                    printf("%c      %s",fr,str0);
                                    gotoxy(40,12);
                                    textcolor(15);
                                    printf("       %s",str1);

								} //up arrow
                                break;
                                case 75:  //left arrow
                                break;
                                case 77:  //right arrow
                                break;
                                case 80:{
                                    a = true;
                                    system("cls");
									gotoxy(46,6);
                                    textcolor(15);
                                    printf("Google's CMD\n");
                                    gotoxy(40,10);
                                    textcolor(15);
                                    printf("       %s",str0);
                                    gotoxy(40,12);
                                    textcolor(15);
                                    printf("%c      %s",fr,str1);
								}  //down arrow
                                break;
                                case 13:
                                    if(a==false){
                                        ans = 1;
                                    }
                                    else{
                                        ans = 2;
                                    }      //enter
                                break;
                            }
        }while(ans == 0);
        switch(ans){
            case 1:{
                system("cls");
                gotoxy(40,6);
                printf("Google is working...");
                system("start www.google.com");
                printf("\n\n\n\n\n\n\n");
                system("pause");
                system("cls");
            } break;
            case 2:{
                system("cls");
                gotoxy(40,6);
                textcolor(15);
                printf("Grazie e Arrivederci");
                gotoxy(78,22);
                textcolor(15);
                printf("Produced by A.A.Wayne\n\n\n\n\n\n");
                Sleep(2250);
                system("exit");
                exit(main);
                exit (EXIT_FAILURE);
                exit (EXIT_SUCCESS);
                abort();
                return 0;
            } break;
        }
	}while(ans != 2);
}
