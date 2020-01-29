/* =============================================================================== */
/*                                                                                 */
/*        Filename.c                                                               */
/*     (c) 2016 A.A.Wayne                                                          */
/*                                                                                 */
/*        Description                                                              */
/*                                                                                 */
/* =============================================================================== */


 #include<stdio.h>
 #include<stdlib.h>
 #include<windows.h>
 #include<iostream>
 #include<conio2.h>
int main()
{
            int c,nt,t,n,no,s;
			char risp;
				do //intro e ripetizione programma
					{
						c = 0;
						gotoxy(12,25);
						printf("Programma per la stampa del maggiore o del minore\n\n");
						system("PAUSE");
						system("CLS");
					do //digitazione serie numeri
						{
							//gotoxy(x,y);
							printf("Quanti numeri desidera? ------------> ");
							scanf("%d",&nt);
							system("CLS");
						}
					while(nt < 2);

						do //scelta maggiore minore
							{
								//gotoxy(x,y);
								printf("Digita 1 per stampare il maggiore\n\nDigita 2 per stampare il minore\n\n------------> ");
								scanf("%d",&t);
								system("CLS");
							}
						while(t != 1 && t != 2);

					if( t == 1) //Parte logica-matematica del programma(maggiore)
						{
                            do
                                {
                                    printf("Digita il numero desiderato --------> ");
                                    scanf("%d",&n);
                                    system("CLS");
                                        if (c == 0)
                                            {
                                                no = n;
                                                c = c + 1;
                                            }
                                        else
                                            {
                                                if(no < n)
                                                    {
                                                        no = n;
                                                        c = c + 1;
                                                    }
                                                else
                                                    {
                                                        c = c + 1;
                                                    }
                                            }
                                }
                            while(c < nt);
			printf("Il numero maggiore della serie e' %d\n\n",no);
			system("PAUSE");
			system("CLS");
						}
					else //Parte logica-matematica del programma(minore)
						{

                            do
                                {
                                    printf("Digita il numero desiderato --------> ");
							        scanf("%d",&n);
                                    system("CLS");
                                        if (c == 0)
                                            {
                                                no = n;
                                                c = c + 1;
                                            }
                                        else
                                            {
                                                if(no > n)
                                                    {
                                                        no = n;
                                                        c = c + 1;
                                                    }
                                                else
                                                    {
                                                        c = c + 1;
                                                    }
                                            }
                                }
                            while(c < nt);
			printf("Il numero minore della serie e' %d\n\n",no);
			system("PAUSE");
			system("CLS");
						}
				    do //vuoi riprovare
						{
							printf("Vuoi riprovare? [S/N]----------> ");
							scanf("%c",& risp);
							system("CLS");
						}
				while(risp != 's' && risp !='S' && risp != 'n' && risp != 'N');

				}
			while (risp == 's' || risp == 'S');















































}
