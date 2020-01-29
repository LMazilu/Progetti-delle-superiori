#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<iostream>
#include<conio2.h>
#include<time.h>



int main()
{
    int coro, corv, an1, an2, an3, an4, x, y, key, ans, a, dif, c1, c2, c3, c4, ten, tem, m1, m2, m3, m4, gpg, gps, n;
	char fr = '>';
	a = 1;
    coro = 205;
    corv = 186;
    an1 = 201;
    an2 = 187;
    an3 = 200;
    an4 = 188;
    srand(time(NULL));
    //START (gui)
    textcolor(14);
    gotoxy(2,2);
    printf("%c",an1);
    Sleep(1);
    x = 3;
    y = 2;
    do
    {
       gotoxy(x,y);
       printf("%c",coro);
       Sleep(1);
       x = x+1;
    }while(x <= 78);
    gotoxy(79,2);
    printf("%c",an2);
    Sleep(1);
    x = 79;
    y = 3;
    do
    {
       gotoxy(x,y);
       printf("%c",corv);
       Sleep(10);
       y = y+1;
    }while(y <= 23);
    gotoxy(79,24);
    printf("%c",an4);
    Sleep(1);
    x = 78;
    y = 24;
    do
    {
       gotoxy(x,y);
       printf("%c",coro);
       Sleep(1);
       x = x-1;
    }while(x >= 3);
    gotoxy(2,24);
    printf("%c",an3);
    Sleep(1);
    x = 2;
    y = 23;
    do
    {
       gotoxy(x,y);
       printf("%c",corv);
       Sleep(10);
       y = y-1;
    }while(y >= 3);
    Sleep(300);
    textcolor(8);
    gotoxy(32,10);
    printf("-- MASTER MIND --");
    Sleep(300);
    textcolor(6);
    gotoxy(32,10);
    printf("-- MASTER MIND --");
    Sleep(300);
    textcolor(14);
    gotoxy(32,10);
    printf("-- MASTER MIND --");
    gotoxy(40,17);
    textcolor(15);
	printf("Gioca");
    getch();
    //STOP(gui)

	system("cls");
    do{
     ans = 0;
	 key = 0;
    gotoxy(38,17);
	gotoxy(40,12);
	textcolor(15);
	 textcolor(14);
    gotoxy(2,2);
    printf("%c",an1);
    x = 3;
    y = 2;
    do
    {
       gotoxy(x,y);
       printf("%c",coro);
       x = x+1;
    }while(x <= 78);
    gotoxy(79,2);
    printf("%c",an2);
    x = 79;
    y = 3;
    do
    {
       gotoxy(x,y);
       printf("%c",corv);
       y = y+1;
    }while(y <= 23);
    gotoxy(79,24);
    printf("%c",an4);
    x = 78;
    y = 24;
    do
    {
       gotoxy(x,y);
       printf("%c",coro);
       x = x-1;
    }while(x >= 3);
    gotoxy(2,24);
    printf("%c",an3);
    x = 2;
    y = 23;
    do
    {
       gotoxy(x,y);
       printf("%c",corv);
       y = y-1;
    }while(y >= 3);
    textcolor(15);
    gotoxy(32,5);
    printf("-- MASTER MIND --");
    gotoxy(32,11);
    printf("%c     Play",fr);
    gotoxy(32,13);
    printf("      Instruction",fr);
    gotoxy(32,15);
    printf("      Exit",fr);
	do{
            	key = getch();

            switch (key) {
                                case 72:{

                                   if(a == 3){
                                        system("cls");
                                              a = 2;
                                              gotoxy(38,17);
                            	gotoxy(40,12);
                            	textcolor(15);
                            	 textcolor(14);
                                gotoxy(2,2);
                                printf("%c",an1);
                                x = 3;
                                y = 2;

                                do
                                {
                                   gotoxy(x,y);
                                   printf("%c",coro);
                                   x = x+1;
                                }while(x <= 78);
                                gotoxy(79,2);
                                printf("%c",an2);
                                x = 79;
                                y = 3;
                                do
                                {
                                   gotoxy(x,y);
                                   printf("%c",corv);
                                   y = y+1;
                                }while(y <= 23);
                                gotoxy(79,24);
                                printf("%c",an4);
                                x = 78;
                                y = 24;
                                do
                                {
                                   gotoxy(x,y);
                                   printf("%c",coro);
                                   x = x-1;
                                }while(x >= 3);
                                gotoxy(2,24);
                                printf("%c",an3);
                                x = 2;
                                y = 23;
                                do
                                {
                                   gotoxy(x,y);
                                   printf("%c",corv);
                                   y = y-1;
                                }while(y >= 3);
                                textcolor(14);
                                gotoxy(32,5);
                                printf("-- MASTER MIND --");
                                gotoxy(40,17);
                                textcolor(15);
                                 gotoxy(32,11);
                                    printf("      Play",fr);
                                    gotoxy(32,13);
                                    printf("%c     Instruction",fr);
                                    gotoxy(32,15);
                                    printf("      Exit",fr);
                                                   }
                                                   else {
                                                        system("cls");
                                    a = 1;
								gotoxy(38,17);
                            	gotoxy(40,12);
                            	textcolor(15);
                            	 textcolor(14);
                                gotoxy(2,2);
                                printf("%c",an1);
                                x = 3;
                                y = 2;

                                do
                                {
                                   gotoxy(x,y);
                                   printf("%c",coro);
                                   x = x+1;
                                }while(x <= 78);
                                gotoxy(79,2);
                                printf("%c",an2);
                                x = 79;
                                y = 3;
                                do
                                {
                                   gotoxy(x,y);
                                   printf("%c",corv);
                                   y = y+1;
                                }while(y <= 23);
                                gotoxy(79,24);
                                printf("%c",an4);
                                x = 78;
                                y = 24;
                                do
                                {
                                   gotoxy(x,y);
                                   printf("%c",coro);
                                   x = x-1;
                                }while(x >= 3);
                                gotoxy(2,24);
                                printf("%c",an3);
                                x = 2;
                                y = 23;
                                do
                                {
                                   gotoxy(x,y);
                                   printf("%c",corv);
                                   y = y-1;
                                }while(y >= 3);
                                textcolor(14);
                                gotoxy(32,5);
                                printf("-- MASTER MIND --");
                                gotoxy(40,17);
                                textcolor(15);
                                 gotoxy(32,11);
                                    printf("%c     Play",fr);
                                    gotoxy(32,13);
                                    printf("      Instruction",fr);
                                    gotoxy(32,15);
                                    printf("      Exit",fr);
								} //up arrow
                                break;
                                case 80:{
                                     if(a == 2){
                                          system("cls");
                                         a = 3;
                                         	gotoxy(38,17);
                            	gotoxy(40,12);
                            	textcolor(15);
                            	 textcolor(14);
                                gotoxy(2,2);
                                printf("%c",an1);
                                x = 3;
                                y = 2;

                                do
                                {
                                   gotoxy(x,y);
                                   printf("%c",coro);
                                   x = x+1;
                                }while(x <= 78);
                                gotoxy(79,2);
                                printf("%c",an2);
                                x = 79;
                                y = 3;
                                do
                                {
                                   gotoxy(x,y);
                                   printf("%c",corv);
                                   y = y+1;
                                }while(y <= 23);
                                gotoxy(79,24);
                                printf("%c",an4);
                                x = 78;
                                y = 24;
                                do
                                {
                                   gotoxy(x,y);
                                   printf("%c",coro);
                                   x = x-1;
                                }while(x >= 3);
                                gotoxy(2,24);
                                printf("%c",an3);
                                x = 2;
                                y = 23;
                                do
                                {
                                   gotoxy(x,y);
                                   printf("%c",corv);
                                   y = y-1;
                                }while(y >= 3);
                                textcolor(14);
                                gotoxy(32,5);
                                printf("-- MASTER MIND --");
                                gotoxy(40,17);
                                textcolor(15);
                                 gotoxy(32,11);
                                    printf("      Play",fr);
                                    gotoxy(32,13);
                                    printf("      Instruction",fr);
                                    gotoxy(32,15);
                                    printf("%c     Exit",fr);
                                         }
                                         else if (a == 1){
                                     system("cls");
                                    a = 2;
                                    gotoxy(38,17);
                                	gotoxy(40,12);
                                	textcolor(15);
                                	 textcolor(14);
                                    gotoxy(2,2);
                                    printf("%c",an1);
                                    x = 3;
                                    y = 2;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",coro);
                                       x = x+1;
                                    }while(x <= 78);
                                    gotoxy(79,2);
                                    printf("%c",an2);
                                    x = 79;
                                    y = 3;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",corv);
                                       y = y+1;
                                    }while(y <= 23);
                                    gotoxy(79,24);
                                    printf("%c",an4);
                                    x = 78;
                                    y = 24;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",coro);
                                       x = x-1;
                                    }while(x >= 3);
                                    gotoxy(2,24);
                                    printf("%c",an3);
                                    x = 2;
                                    y = 23;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",corv);
                                       y = y-1;
                                    }while(y >= 3);
                                    textcolor(14);
                                    gotoxy(32,5);
                                    printf("-- MASTER MIND --");
                                    gotoxy(40,17);
                                    textcolor(15);
                                      gotoxy(32,11);
                                    printf("      Play",fr);
                                    gotoxy(32,13);
                                    printf("%c     Instruction",fr);
                                    gotoxy(32,15);
                                    printf("      Exit",fr); }
								}  //down arrow
                                break;
                                case 13:
                                    if(a==1){
                                        ans = 1;
                                    }
                                    else if (a == 2){
                                        ans = 2;
                                    }
                                    else {
                                         ans = 3;
                                         }      //enter
                                break;
                            }

                            }
        }while(ans == 0);
    switch(ans){
                case 1:{
                     system("cls");
                     gotoxy(38,17);
                                	gotoxy(40,12);
                                	textcolor(15);
                                	 textcolor(14);
                                    gotoxy(2,2);
                                    printf("%c",an1);
                                    x = 3;
                                    y = 2;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",coro);
                                       x = x+1;
                                    }while(x <= 78);
                                    gotoxy(79,2);
                                    printf("%c",an2);
                                    x = 79;
                                    y = 3;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",corv);
                                       y = y+1;
                                    }while(y <= 23);
                                    gotoxy(79,24);
                                    printf("%c",an4);
                                    x = 78;
                                    y = 24;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",coro);
                                       x = x-1;
                                    }while(x >= 3);
                                    gotoxy(2,24);
                                    printf("%c",an3);
                                    x = 2;
                                    y = 23;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",corv);
                                       y = y-1;
                                    }while(y >= 3);
                                    textcolor(14);
                                    do{
                                            gotoxy(38,17);
                                	gotoxy(40,12);
                                	textcolor(15);
                                	 textcolor(14);
                                    gotoxy(2,2);
                                    printf("%c",an1);
                                    x = 3;
                                    y = 2;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",coro);
                                       x = x+1;
                                    }while(x <= 78);
                                    gotoxy(79,2);
                                    printf("%c",an2);
                                    x = 79;
                                    y = 3;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",corv);
                                       y = y+1;
                                    }while(y <= 23);
                                    gotoxy(79,24);
                                    printf("%c",an4);
                                    x = 78;
                                    y = 24;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",coro);
                                       x = x-1;
                                    }while(x >= 3);
                                    gotoxy(2,24);
                                    printf("%c",an3);
                                    x = 2;
                                    y = 23;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",corv);
                                       y = y-1;
                                    }while(y >= 3);
				gotoxy(30,2);
				textcolor(15);
				gotoxy(10,8);
				printf("1)Easy");
				gotoxy(10,10);
				printf("2)Normal");
				gotoxy(10,12);
				printf("3)Hard");
				gotoxy(10,14);
				printf("Selezionare la difficoltà : ");
				printf("                ");
				gotoxy(50,14);
				fflush(stdin);
				scanf("%d",&dif);
				system("cls");
                                    } while (dif < 1 || dif > 3);
switch(dif) {
    case 1:{
                        c1=rand()%10;
						c2=rand()%10;
						c3=rand()%10;
						c4=rand()%10;

						ten=15;
						tem=ten;
						system("cls");

						gotoxy(38,17);
                                	gotoxy(40,12);
                                	textcolor(15);
                                	 textcolor(14);
                                    gotoxy(2,2);
                                    printf("%c",an1);
                                    x = 3;
                                    y = 2;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",coro);
                                       x = x+1;
                                    }while(x <= 78);
                                    gotoxy(79,2);
                                    printf("%c",an2);
                                    x = 79;
                                    y = 3;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",corv);
                                       y = y+1;
                                    }while(y <= 23);
                                    gotoxy(79,24);
                                    printf("%c",an4);
                                    x = 78;
                                    y = 24;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",coro);
                                       x = x-1;
                                    }while(x >= 3);
                                    gotoxy(2,24);
                                    printf("%c",an3);
                                    x = 2;
                                    y = 23;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",corv);
                                       y = y-1;
                                    }while(y >= 3);
						do {
gotoxy(38,17);
                                	gotoxy(40,12);
                                	textcolor(15);
                                	 textcolor(14);
                                    gotoxy(2,2);
                                    printf("%c",an1);
                                    x = 3;
                                    y = 2;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",coro);
                                       x = x+1;
                                    }while(x <= 78);
                                    gotoxy(79,2);
                                    printf("%c",an2);
                                    x = 79;
                                    y = 3;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",corv);
                                       y = y+1;
                                    }while(y <= 23);
                                    gotoxy(79,24);
                                    printf("%c",an4);
                                    x = 78;
                                    y = 24;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",coro);
                                       x = x-1;
                                    }while(x >= 3);
                                    gotoxy(2,24);
                                    printf("%c",an3);
                                    x = 2;
                                    y = 23;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",corv);
                                       y = y-1;
                                    }while(y >= 3);
							textcolor(15);
							gotoxy(30,4);
							printf("MASTER MIND %d%d%d%d",c1,c2,c3,c4);
							gotoxy(4,7);
							printf("Tentativi: %d",tem);
							do {
								gotoxy(4,11);
								printf("Digitare il numero: ");
								gotoxy(37,11);
								printf("                            ");
								gotoxy(37,11);
								fflush(stdin);
								scanf("%d",&n);
							} while(n<0 || n>9999);
							m1=n/1000;
							m2=(n%1000)/100;
							m3=(n%100)/10;
							m4=n%10;
							gpg=0;
							gps=0;

							if(m1==c2 || m1==c3 || m1==c4) {
								gps=gps+1;
							}
							if(m2==c1 || m2==c3 || m2==c4) {
								gps=gps+1;
							}
							if(m3==c1 || m3==c2 || m3==c4) {
								gps=gps+1;
							}
							if(m4==c1 || m1==c2 || m1==c3) {
								gps=gps+1;
							}
							if(m1==c1) {
								gpg=gpg+1;
							}
							if(m2==c2) {
								gpg=gpg+1;
							}
							if(m3==c3) {
								gpg=gpg+1;
							}
							if(m4==c4) {
								gpg=gpg+1;
							}




							gotoxy(4,13);
							printf("Cifre gps:   %d !",gps);
							gotoxy(4,14);
							printf("Cifre gpg:   %d !",gpg);
							getch();




							if((c1*1000+c2*100+c3*10+c4)==n) {
								gotoxy(2,16);
								printf("\nComplimenti! Hai vinto!");
								getch();
								system("cls");

							}


							tem=tem-1;

							if(tem==0) {
								system("cls");
                                gotoxy(38,17);
                                	gotoxy(40,12);
                                	textcolor(15);
                                	 textcolor(14);
                                    gotoxy(2,2);
                                    printf("%c",an1);
                                    x = 3;
                                    y = 2;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",coro);
                                       x = x+1;
                                    }while(x <= 78);
                                    gotoxy(79,2);
                                    printf("%c",an2);
                                    x = 79;
                                    y = 3;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",corv);
                                       y = y+1;
                                    }while(y <= 23);
                                    gotoxy(79,24);
                                    printf("%c",an4);
                                    x = 78;
                                    y = 24;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",coro);
                                       x = x-1;
                                    }while(x >= 3);
                                    gotoxy(2,24);
                                    printf("%c",an3);
                                    x = 2;
                                    y = 23;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",corv);
                                       y = y-1;
                                    }while(y >= 3);
								gotoxy(5,8);
								printf("AHAHAHAH! Non sei riuscito ad indovinare il mio numero!");
								gotoxy(5,10);
								printf("Ovviamente puoi riprovare sei hai voglia");
								gotoxy(5,12);
								printf("basta premere un tasto");
								tem=ten;
								getch();
								system("cls");
								n = c1*1000  +c2*100 + c3*10 + c4;
							}
system("cls");
						} while((c1*1000+c2*100+c3*10+c4)!=n);

    }break;
case 2 :{
c1=rand()%10;
						c2=rand()%10;
						c3=rand()%10;
						c4=rand()%10;

						ten=10;
						tem=ten;
						system("cls");

						gotoxy(38,17);
                                	gotoxy(40,12);
                                	textcolor(15);
                                	 textcolor(14);
                                    gotoxy(2,2);
                                    printf("%c",an1);
                                    x = 3;
                                    y = 2;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",coro);
                                       x = x+1;
                                    }while(x <= 78);
                                    gotoxy(79,2);
                                    printf("%c",an2);
                                    x = 79;
                                    y = 3;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",corv);
                                       y = y+1;
                                    }while(y <= 23);
                                    gotoxy(79,24);
                                    printf("%c",an4);
                                    x = 78;
                                    y = 24;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",coro);
                                       x = x-1;
                                    }while(x >= 3);
                                    gotoxy(2,24);
                                    printf("%c",an3);
                                    x = 2;
                                    y = 23;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",corv);
                                       y = y-1;
                                    }while(y >= 3);
						do {
gotoxy(38,17);
                                	gotoxy(40,12);
                                	textcolor(15);
                                	 textcolor(14);
                                    gotoxy(2,2);
                                    printf("%c",an1);
                                    x = 3;
                                    y = 2;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",coro);
                                       x = x+1;
                                    }while(x <= 78);
                                    gotoxy(79,2);
                                    printf("%c",an2);
                                    x = 79;
                                    y = 3;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",corv);
                                       y = y+1;
                                    }while(y <= 23);
                                    gotoxy(79,24);
                                    printf("%c",an4);
                                    x = 78;
                                    y = 24;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",coro);
                                       x = x-1;
                                    }while(x >= 3);
                                    gotoxy(2,24);
                                    printf("%c",an3);
                                    x = 2;
                                    y = 23;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",corv);
                                       y = y-1;
                                    }while(y >= 3);
							textcolor(15);
							gotoxy(30,4);
							printf("MASTER MIND %d%d%d%d",c1,c2,c3,c4);
							gotoxy(4,7);
							printf("Tentativi: %d",tem);
							do {
								gotoxy(4,11);
								printf("Digitare il numero: ");
								gotoxy(37,11);
								printf("                            ");
								gotoxy(37,11);
								fflush(stdin);
								scanf("%d",&n);
							} while(n<0 || n>9999);
							m1=n/1000;
							m2=(n%1000)/100;
							m3=(n%100)/10;
							m4=n%10;
							gpg=0;
							gps=0;

							if(m1==c2 || m1==c3 || m1==c4) {
								gps=gps+1;
							}
							if(m2==c1 || m2==c3 || m2==c4) {
								gps=gps+1;
							}
							if(m3==c1 || m3==c2 || m3==c4) {
								gps=gps+1;
							}
							if(m4==c1 || m1==c2 || m1==c3) {
								gps=gps+1;
							}
							if(m1==c1) {
								gpg=gpg+1;
							}
							if(m2==c2) {
								gpg=gpg+1;
							}
							if(m3==c3) {
								gpg=gpg+1;
							}
							if(m4==c4) {
								gpg=gpg+1;
							}




							gotoxy(4,13);
							printf("Cifre gps:   %d !",gps);
							gotoxy(4,14);
							printf("Cifre gpg:   %d !",gpg);
							getch();




							if((c1*1000+c2*100+c3*10+c4)==n) {
								gotoxy(2,16);
								printf("\nComplimenti! Hai vinto!");
								getch();
								system("cls");

							}


							tem=tem-1;

							if(tem==0) {
								system("cls");
                                gotoxy(38,17);
                                	gotoxy(40,12);
                                	textcolor(15);
                                	 textcolor(14);
                                    gotoxy(2,2);
                                    printf("%c",an1);
                                    x = 3;
                                    y = 2;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",coro);
                                       x = x+1;
                                    }while(x <= 78);
                                    gotoxy(79,2);
                                    printf("%c",an2);
                                    x = 79;
                                    y = 3;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",corv);
                                       y = y+1;
                                    }while(y <= 23);
                                    gotoxy(79,24);
                                    printf("%c",an4);
                                    x = 78;
                                    y = 24;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",coro);
                                       x = x-1;
                                    }while(x >= 3);
                                    gotoxy(2,24);
                                    printf("%c",an3);
                                    x = 2;
                                    y = 23;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",corv);
                                       y = y-1;
                                    }while(y >= 3);
								gotoxy(5,8);
								printf("AHAHAHAH! Non sei riuscito ad indovinare il mio numero!");
								gotoxy(5,10);
								printf("Ovviamente puoi riprovare sei hai voglia");
								gotoxy(5,12);
								printf("basta premere un tasto");
								tem=ten;
								getch();
								system("cls");
								n = c1*1000  +c2*100 + c3*10 + c4;
							}
system("cls");
						} while((c1*1000+c2*100+c3*10+c4)!=n);
}break;

case 3:{
c1=rand()%10;
						c2=rand()%10;
						c3=rand()%10;
						c4=rand()%10;

						ten=5;
						tem=ten;
						system("cls");

						gotoxy(38,17);
                                	gotoxy(40,12);
                                	textcolor(15);
                                	 textcolor(14);
                                    gotoxy(2,2);
                                    printf("%c",an1);
                                    x = 3;
                                    y = 2;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",coro);
                                       x = x+1;
                                    }while(x <= 78);
                                    gotoxy(79,2);
                                    printf("%c",an2);
                                    x = 79;
                                    y = 3;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",corv);
                                       y = y+1;
                                    }while(y <= 23);
                                    gotoxy(79,24);
                                    printf("%c",an4);
                                    x = 78;
                                    y = 24;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",coro);
                                       x = x-1;
                                    }while(x >= 3);
                                    gotoxy(2,24);
                                    printf("%c",an3);
                                    x = 2;
                                    y = 23;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",corv);
                                       y = y-1;
                                    }while(y >= 3);
						do {
gotoxy(38,17);
                                	gotoxy(40,12);
                                	textcolor(15);
                                	 textcolor(14);
                                    gotoxy(2,2);
                                    printf("%c",an1);
                                    x = 3;
                                    y = 2;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",coro);
                                       x = x+1;
                                    }while(x <= 78);
                                    gotoxy(79,2);
                                    printf("%c",an2);
                                    x = 79;
                                    y = 3;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",corv);
                                       y = y+1;
                                    }while(y <= 23);
                                    gotoxy(79,24);
                                    printf("%c",an4);
                                    x = 78;
                                    y = 24;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",coro);
                                       x = x-1;
                                    }while(x >= 3);
                                    gotoxy(2,24);
                                    printf("%c",an3);
                                    x = 2;
                                    y = 23;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",corv);
                                       y = y-1;
                                    }while(y >= 3);
							textcolor(15);
							gotoxy(30,4);
							printf("MASTER MIND %d%d%d%d",c1,c2,c3,c4);
							gotoxy(4,7);
							printf("Tentativi: %d",tem);
							do {
								gotoxy(4,11);
								printf("Digitare il numero: ");
								gotoxy(37,11);
								printf("                            ");
								gotoxy(37,11);
								fflush(stdin);
								scanf("%d",&n);
							} while(n<0 || n>9999);
							m1=n/1000;
							m2=(n%1000)/100;
							m3=(n%100)/10;
							m4=n%10;
							gpg=0;
							gps=0;

							if(m1==c2 || m1==c3 || m1==c4) {
								gps=gps+1;
							}
							if(m2==c1 || m2==c3 || m2==c4) {
								gps=gps+1;
							}
							if(m3==c1 || m3==c2 || m3==c4) {
								gps=gps+1;
							}
							if(m4==c1 || m1==c2 || m1==c3) {
								gps=gps+1;
							}
							if(m1==c1) {
								gpg=gpg+1;
							}
							if(m2==c2) {
								gpg=gpg+1;
							}
							if(m3==c3) {
								gpg=gpg+1;
							}
							if(m4==c4) {
								gpg=gpg+1;
							}




							gotoxy(4,13);
							printf("Cifre gps:   %d !",gps);
							gotoxy(4,14);
							printf("Cifre gpg:   %d !",gpg);
							getch();




							if((c1*1000+c2*100+c3*10+c4)==n) {
								gotoxy(2,16);
								printf("\nComplimenti! Hai vinto!");
								getch();
								system("cls");

							}


							tem=tem-1;

							if(tem==0) {
								system("cls");
                                gotoxy(38,17);
                                	gotoxy(40,12);
                                	textcolor(15);
                                	 textcolor(14);
                                    gotoxy(2,2);
                                    printf("%c",an1);
                                    x = 3;
                                    y = 2;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",coro);
                                       x = x+1;
                                    }while(x <= 78);
                                    gotoxy(79,2);
                                    printf("%c",an2);
                                    x = 79;
                                    y = 3;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",corv);
                                       y = y+1;
                                    }while(y <= 23);
                                    gotoxy(79,24);
                                    printf("%c",an4);
                                    x = 78;
                                    y = 24;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",coro);
                                       x = x-1;
                                    }while(x >= 3);
                                    gotoxy(2,24);
                                    printf("%c",an3);
                                    x = 2;
                                    y = 23;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",corv);
                                       y = y-1;
                                    }while(y >= 3);
								gotoxy(5,8);
								printf("AHAHAHAH! Non sei riuscito ad indovinare il mio numero!");
								gotoxy(5,10);
								printf("Ovviamente puoi riprovare sei hai voglia");
								gotoxy(5,12);
								printf("basta premere un tasto");
								tem=ten;
								getch();
								system("cls");
								n = c1*1000  +c2*100 + c3*10 + c4;
							}
system("cls");
						} while((c1*1000+c2*100+c3*10+c4)!=n);
}
}



                     }break;
                case 2:{
                     system("cls");
                     gotoxy(38,17);
                                	gotoxy(40,12);
                                	textcolor(15);
                                	 textcolor(14);
                                    gotoxy(2,2);
                                    printf("%c",an1);
                                    x = 3;
                                    y = 2;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",coro);
                                       x = x+1;
                                    }while(x <= 78);
                                    gotoxy(79,2);
                                    printf("%c",an2);
                                    x = 79;
                                    y = 3;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",corv);
                                       y = y+1;
                                    }while(y <= 23);
                                    gotoxy(79,24);
                                    printf("%c",an4);
                                    x = 78;
                                    y = 24;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",coro);
                                       x = x-1;
                                    }while(x >= 3);
                                    gotoxy(2,24);
                                    printf("%c",an3);
                                    x = 2;
                                    y = 23;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",corv);
                                       y = y-1;
                                    }while(y >= 3);
                                    textcolor(15);

    gotoxy(36,2);
    printf("Regole");
    gotoxy(5,7);
    printf("MASTER MIND penserà un numero da 4 cifre che tu dovrai indovinare");
    gotoxy(5,9);
    printf("entro un numero di tentativi che dipenderà dalla difficoltà del gioco. ");
    gotoxy(5,11);
    printf("Il numero che pensera' sara' compreso tra 1 e 9999.");
    gotoxy(5,13);
    printf("Le difficoltà sono : ");
    gotoxy(5,15);
    printf("Facile  = Hai a disposizione 15 tentativi");
    gotoxy(5,17);
    printf("Normale = Hai a disposizione 10 tentativi");
    gotoxy(5,19);
    printf("Difficile = Hai a disposizione 5 tentativi");
    gotoxy(5,22);
    printf("Premere un tasto tornare al menu.");
    getch();
                    system("cls");
                     }break;
                }


}while (ans != 3);
system("cls");
gotoxy(38,17);
                                	gotoxy(40,12);
                                	textcolor(15);
                                	 textcolor(14);
                                    gotoxy(2,2);
                                    printf("%c",an1);
                                    x = 3;
                                    y = 2;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",coro);
                                       x = x+1;
                                    }while(x <= 78);
                                    gotoxy(79,2);
                                    printf("%c",an2);
                                    x = 79;
                                    y = 3;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",corv);
                                       y = y+1;
                                    }while(y <= 23);
                                    gotoxy(79,24);
                                    printf("%c",an4);
                                    x = 78;
                                    y = 24;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",coro);
                                       x = x-1;
                                    }while(x >= 3);
                                    gotoxy(2,24);
                                    printf("%c",an3);
                                    x = 2;
                                    y = 23;
                                    do
                                    {
                                       gotoxy(x,y);
                                       printf("%c",corv);
                                       y = y-1;
                                    }while(y >= 3);
                                    gotoxy(25,10);
                                    printf("Grazie per aver giocato!");
                                    gotoxy(25,14);
                                    printf("Arrivederci!");
                                    Sleep(2000);

}

