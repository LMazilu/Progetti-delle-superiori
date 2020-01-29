#include<stdio.h>   //120,9001
#include<stdlib.h>
#include<windows.h>
#include<iostream>
#include<conio2.h>
#include<stdbool.h>
#include<fstream>
#include<cstring>

using namespace std;
    int const n = 30;
    int day,i2,mon,year,c3,ccc,i,c2,c4,a,gg, mm , aa, gf, LF, nc, I, err, cc, c, j, p, Anno[1], gs, ctrl, l;
    char city[50],cityv[50],code[5],codice[17],Nome[n], Nome1[n], Cognome[n], Cognome1[n], genere[1], CF[16], m , c1, d , u, risp,ctrl2[n];
    bool ver=false,fine=false,fine1=false;

void comune()
{
     ccc=0;
    string cityf;
    fstream textfile;
    textfile.open ("names.txt");
    for(i=0;i<50;i++)
       {
          city[i]=toupper(city[i]);
       }
    for(i=0,c2=0;fine==false;i++)
    {
         if(city[i] == '\0')
         {
             fine=true;
         }
         else
         {
             c2++;
         }
    }
    while(! textfile.eof() && ver==false)
    {
       getline(textfile,cityf);
       strcpy(cityv, cityf.c_str());
       c3 = strlen(cityv);
       ccc++;
       for(i=0;i<50;i++)
       {
          cityv[i]=toupper(cityv[i]);
       }
       if(c2 < c3)
       {
           c4 = c3;
       }
       else if(c2 >= c3)
       {
            c4 = c2;
       }
       for(i=0,ver=true;i<c4;i++)
       {
         if(ver==true){
          if(city[i] == cityv[i])
          {
              ver=true;
          }
          else
          {
              ver=false;
          }
         }
       }
      }
    textfile.close();
    if(ver==true){/*printf("\n\n success \n\n");}else{printf("\n\n fail \n\n");*/}
    string codef;
    textfile.open ("codes.txt");
    i2 = 1;
    while(! textfile.eof())
    {
       getline(textfile,codef);
       if(i2 == ccc)
       {
       strcpy(code, codef.c_str());
       }
       i2++;
    }
    textfile.close();
}


void im()
{
     for(i=0;i<40;i++){city[i]=NULL;}
     for(i=0;i<40;i++){cityv[i]=NULL;}
     for(i=0;i<5;i++){code[i]=NULL;}
     for(i=0;i<40;i++){ctrl2[i]=NULL;}
     gotoxy(33,5);
    textcolor(LIGHTCYAN);
    printf("INSERIMENTO DATI");
    textcolor(LIGHTGREEN);
    gotoxy(30,10); printf("Nome:           .............................");
    gotoxy(30,12); printf("Cognome:    .............................");
    gotoxy(30,14); printf("Data di nascita: gg/mm/aaaa");
    gotoxy(30,16); printf("Luogo di nascita: ");
    gotoxy(30,18); printf("Sesso [m/f]: ");
    I=0;
    do{
        gotoxy(30,10); printf("Nome:       .............................");
        gotoxy(36,10);
        fflush(stdin);
        gets(Nome);
        nc=strlen(Nome);
        for(err=0, I=0; I<nc; I++)
        {
          Nome[I]=toupper(Nome[I]);
          if((!(Nome[I]>='A' && Nome[I]<='Z'||Nome[I]==' '||Nome[I]=='\''))||Nome[0]==' ')
          {
            err=1;
          }
        }
        gotoxy(36,10);
       
      }while(err==1);
      puts(Nome);
    do{
        do{
            gotoxy(30,12);
            printf("Cognome: ");
            gotoxy(39,12);
            fflush(stdin);
            gets(Cognome1);
            nc=strlen(Cognome1);
            for(err=0, I=0; I<nc; I++)
            {
              Cognome1[I]=toupper(Cognome1[I]);
              if((!(Cognome1[I]>='A' && Cognome1[I]<='Z'||Cognome1[I]==' '||Cognome1[I]=='\''))||Cognome1[0]==' ')
              {
                err=1;
              }
            }
            gotoxy(39,12);
            puts(Cognome1);
          }while(err==1);
      }while(c=strlen(Cognome1)==0);
    do{
	    gotoxy(30,14);
        printf("Data di nascita  gg/mm/aaaa");
        gotoxy(53,14);
        fflush(stdin);
        scanf("%d", &aa);
      }while(aa<1900 || aa>2016);
      if(aa%4==0) gf=29;
      else gf=28;
    do{
        gotoxy(30, 14);
        printf("Data di nascita  gg/mm/%d",aa);
        gotoxy(50, 14);
        fflush(stdin);
        scanf("%d", &mm);
      }while(mm<1||mm>12);
    do{
        do{
            do{
	            gotoxy(30, 14);
                if(mm>10) printf("Data di nascita  gg/%d/%d",mm,aa);
                else printf("Data di nascita  gg/0%d/%d",mm,aa);
                gotoxy(47, 14);
                fflush(stdin);
                scanf("%d", &gg);
                gotoxy(47, 14);
                if(gg>10) printf("%d",gg);
                else printf("0%d",gg);
              }while(gg < 1 || gg > 31);
          }while((gg>30) && (mm==4) || (gg>30)&& (mm==6) || (gg>30) && (mm==9) || (gg>30) && (mm==11));
      }while (mm==2 && gg>gf);
   
   fflush(stdin);
     gotoxy(30,16); printf("Luogo di nascita: ");
   
      gotoxy(49,16);
      gets(city);
      comune();
   
    do{
        gotoxy(30,18); printf("Sesso (m/f):_");
        gotoxy(53,18);
        fflush(stdin);
        gets(genere);
        nc=strlen(genere);
        for(err=0,I=0;I<nc;I++)
        {
          genere[I]=toupper(genere[I]);
        }
        gotoxy(53,18);
        puts(genere);
      }while((!((genere[0]=='F')||(genere[0]=='M')))||nc>2);
      
//Surname
      nc=strlen(Cognome1);
      I=0;
      j=-1;
      while(I<nc)
      {
        if(Cognome1[I]!=' '&&Cognome1[I]!='\'')
        {
          j++;
          Cognome[j]=Cognome1[I];
        }
          I++;
        }
        Cognome[j+1]='\0';
        nc=strlen(Cognome);
        for(I=0,cc=0;I<nc;I++)
        {
          if(!(Cognome[I]=='A'||Cognome[I]=='E'||Cognome[I]=='I'||Cognome[I]=='O'||Cognome[I]=='U'))
          cc=cc+1;
        }
        if(nc==1)
        {
          CF[0]=Cognome[0];
          CF[1]='X';
          CF[2]='X';
        }
        else
        {
	      if(nc==0)
          {
            CF[0]='X';
            CF[1]='X';
            CF[2]='X';
          }
          else
          {
            if(nc>2)
            {
              if(cc>=3)
              {
                for(I=0,c=0;I<nc,c<3;I++)
                {
                  if(!(Cognome[I]=='A'||Cognome[I]=='E'||Cognome[I]=='I'||Cognome[I]=='O'||Cognome[I]=='U'))
                  {
                    CF[c]=Cognome[I];
                    c++;
                  }
                }
              }
              if(cc==2)
              {
                for(I=0, c=0; I<nc, c<2; I++)
                {
                  if(!(Cognome[I]=='A'||Cognome[I]=='E'||Cognome[I]=='I'||Cognome[I]=='O'||Cognome[I]=='U'))
                  {
                    CF[c]=Cognome[I];
                    c++;
                  }
                }
                for(I=0; I<nc, c<3; I++)
                {
                  if(Cognome[I]=='A'||Cognome[I]=='E'||Cognome[I]=='I'||Cognome[I]=='O'||Cognome[I]=='U')
                  {
                    CF[c]=Cognome[I];
                    c++;
                  }
                }
              }
              if(cc==1)
              {
                for(I=0, c=0; I<nc, c<1; I++)
                {
                  if(!(Cognome[I]=='A'||Cognome[I]=='E'||Cognome[I]=='I'||Cognome[I]=='O'||Cognome[I]=='U'))
                                           {
                                            CF[c]=Cognome[I];
                                            c++;
                                }
                           }
                            for(I=0; I<nc, c<3; I++)
                                {
                                if(Cognome[I]=='A'||Cognome[I]=='E'||Cognome[I]=='I'||Cognome[I]=='O'||Cognome[I]=='U')
                                {
                                CF[c]=Cognome[I];
                                c++;
                                }
                                }
                            }

							if(cc==0)
                             {
                             for(I=0,c=0;I<nc,c<3;I++)
                              {
                               CF[c]=Cognome[I];
                               c++;
                              }
                             }
            }
            else
            {
              if(nc=2)
			    {
                if(cc==2)
                  {
                    for(I=0, c=0; I<nc, c<2; I++)
                    {
                       if(!(Cognome[I]=='A'||Cognome[I]=='E'||Cognome[I]=='I'||Cognome[I]=='O'||Cognome[I]=='U'))
                        {
                         CF[c]=Cognome[I];
                         c++;
                        }


                    }
                            for(I=0; I<nc, c<2; I++)
                                {
                                if(Cognome[I]=='A'||Cognome[I]=='E'||Cognome[I]=='I'||Cognome[I]=='O'||Cognome[I]=='U')
                                {
                                CF[c]=Cognome[I];
                                c++;
                                }
                                }


                   }
                              if(cc==1)
                            {
                                    for(I=0, c=0; I<nc, c<1; I++)
                                {
                                if(!(Cognome[I]=='A'||Cognome[I]=='E'||Cognome[I]=='I'||Cognome[I]=='O'||Cognome[I]=='U'))
                                {
                                    CF[c]=Cognome[I];
                                    c++;
                                }
                                }
                            for(I=0; I<nc, c<2; I++)
                                {
                                if(Cognome[I]=='A'||Cognome[I]=='E'||Cognome[I]=='I'||Cognome[I]=='O'||Cognome[I]=='U')
                                {
                                CF[c]=Cognome[I];
                                c++;
                                }
                                }

                            }
                             if(cc==0)
                             {
                             for(I=0, c=0; I<nc, c<2; I++)
                             {
                             CF[c]=Cognome[I];
                             c++;
                             }
                             }
                             CF[2]='X';
            }

            }
                }
  }
//Name


      nc=strlen(Nome);
      I=0;
      j=-1;
      while(I<nc)
      {
      if(Nome[I]!=' ' && Nome[I]!='\'')
      {
      j++;
      Nome1[j]=Nome[I];
      }
      I++;
      }
      Nome1[j+1]='\0';

 nc=strlen(Nome1);
 for(I=0,cc=0;I<nc;I++)
 {
 if(!(Nome1[I]=='A'||Nome1[I]=='E'||Nome1[I]=='I'||Nome1[I]=='O'||Nome1[I]=='U'))
 cc=cc+1;
 }

if(nc<4)
{
switch(nc)
{
case 0:
        {
            CF[3]='X';
            CF[4]='X';
            CF[5]='X';
        }
        break;
case 1:
        {
            CF[3]=Nome1[0];
            CF[4]='X';
            CF[5]='X';
        }
        break;

case 2:
        {
           CF[5]='X';

			for(I=0, cc=0; I<nc; I++)
                {

                if(!(Nome1[I]=='A'||Nome1[I]=='E'||Nome1[I]=='I'||Nome1[I]=='O'||Nome1[I]=='U'))
                cc=cc+1;
                }

switch(cc)
 {
       case 2:
       {
             for(I=0, c=3; I<nc, c<5; I++)
               {

                                if(!(Nome1[I]=='A'||Nome1[I]=='E'||Nome1[I]=='I'||Nome1[I]=='O'||Nome1[I]=='U'))
                                {
                                    CF[c]=Nome1[I];
                                    c++;
                                }


                }


       }
       break;

       case 1:
       {

          for(I=0, c=3; I<nc, c<4; I++)
                                {

                                if(!(Nome1[I]=='A'||Nome1[I]=='E'||Nome1[I]=='I'||Nome1[I]=='O'||Nome1[I]=='U'))
                                {
                                    CF[c]=Nome1[I];
                                    c++;
                                }


                                }
                            for(I=0; I<nc, c<5; I++)
                                {

                                if(Nome1[I]=='A'||Nome1[I]=='E'||Nome1[I]=='I'||Nome1[I]=='O'||Nome1[I]=='U')
                                {
                                CF[c]=Nome1[I];
                                c++;
                                }


                                }



       }

       }
       }break;
       case 3:
        {
             for(I=0,cc=0;I<nc;I++)
                                {

                                if(!(Nome1[I]=='A'||Nome1[I]=='E'||Nome1[I]=='I'||Nome1[I]=='O'||Nome1[I]=='U'))
                                cc=cc+1;
                                }

			switch(cc)
            {

        case 3:
            {

            for(I=0, c=3; I<nc, c<6; I++)
                                {

                                if(!(Nome1[I]=='A'||Nome1[I]=='E'||Nome1[I]=='I'||Nome1[I]=='O'||Nome1[I]=='U'))
                                {
                                    CF[c]=Nome1[I];
                                    c++;
                                }

                                }


            }
            break;
        case 2:
            {
            for(I=0, c=3; I<nc, c<5; I++)
                {

                if(!(Nome1[I]=='A'||Nome1[I]=='E'||Nome1[I]=='I'||Nome1[I]=='O'||Nome1[I]=='U'))
                                {
                                    CF[c]=Nome1[I];
                                    c++;
                                }
                }


											for(I=0; I<nc, c<6; I++)
                                            {

                                                if(Nome1[I]=='A'||Nome1[I]=='E'||Nome1[I]=='I'||Nome1[I]=='O'||Nome1[I]=='U')
                                                    {
                                                        CF[c]=Nome1[I];
                                                        c++;
                                                    }


                                            }


            }
            break;


            case 1:
            {
                for(I=0, c=3; I<nc, c<4; I++)
                                {

                                if(!(Nome1[I]=='A'||Nome1[I]=='E'||Nome1[I]=='I'||Nome1[I]=='O'||Nome1[I]=='U'))
                                {
                                    CF[c]=Nome1[I];
                                    c++;
                                }


                           }
                            for(I=0; I<nc, c<6; I++)
                                {

                                if(Nome1[I]=='A'||Nome1[I]=='E'||Nome1[I]=='I'||Nome1[I]=='O'||Nome1[I]=='U')
                                {
                                CF[c]=Nome1[I];
                                c++;
                                }


                                }
       }
       }

       }break;
       }


       }
       else
       {
        if(nc>3)
       {
        if(cc>3)
       {
        for(I=0, c=3; c<5; I++)
        {

        if(!(Nome1[I]=='A'||Nome1[I]=='E'||Nome1[I]=='I'||Nome1[I]=='O'||Nome1[I]=='U'))
            {

        CF[c]=Nome1[I];
        c++;
            }
        }
            for(c=4; c<6; I++)
                {
                    if(!(Nome1[I]=='A'||Nome1[I]=='E'||Nome1[I]=='I'||Nome1[I]=='O'||Nome1[I]=='U'))
                      {
                        CF[c]=Nome1[I];
                        c++;
                      }

                }
      }
    else
    {
    for(I=0, cc=0; I<nc; I++)
        {
        if(!(Nome1[I]=='A'||Nome1[I]=='E'||Nome1[I]=='I'||Nome1[I]=='O'||Nome1[I]=='U'))
        cc=cc+1;
        }


			switch(cc)
            {
               case 3:
                {

                    for(I=0, c=3; I<nc, c<6; I++)
                        {
                            if(!(Nome1[I]=='A'||Nome1[I]=='E'||Nome1[I]=='I'||Nome1[I]=='O'||Nome1[I]=='U'))
                                {
                                    CF[c]=Nome1[I];
                                    c++;
                                }

                        }


                }
                break;
            case 2:
            {

                                    for(I=0, c=3; I<nc, c<5; I++)
                                    {
                                      if(!(Nome1[I]=='A'||Nome1[I]=='E'||Nome1[I]=='I'||Nome1[I]=='O'||Nome1[I]=='U'))
                                      {
                                       CF[c]=Nome1[I];
                                       c++;
                                      }


                                    }
                                            for(I=0; I<nc, c<6; I++)
                                            {

                                                if(Nome1[I]=='A'||Nome1[I]=='E'||Nome1[I]=='I'||Nome1[I]=='O'||Nome1[I]=='U')
                                                    {
                                                        CF[c]=Nome1[I];
                                                        c++;
                                                    }


                                            }
            }break;

            case 1:
            {
                for(I=0, c=3; I<nc, c<4; I++)
                    {

                                if(!(Nome1[I]=='A'||Nome1[I]=='E'||Nome1[I]=='I'||Nome1[I]=='O'||Nome1[I]=='U'))
                                {
                                    CF[c]=Nome1[I];
                                    c++;
                                }


                    }
                            for(I=0; I<nc, c<6; I++)
                                {
                                 if(Nome1[I]=='A'||Nome1[I]=='E'||Nome1[I]=='I'||Nome1[I]=='O'||Nome1[I]=='U')
                                        {
                                        CF[c]=Nome1[I];
                                        c++;
                                        }
                                }
            }
            }
            }
            }
            }


//Date
                    m=(aa/1000);
                    c1=(aa-m*1000)/100;
                    d=(aa-(m*1000+c1*100))/10;
                    u=aa-(m*1000+c1*100+d*10);
                    if(d==0) CF[6]=48;
                    if(d==1) CF[6]=49;
                    if(d==2) CF[6]=50;
                    if(d==3) CF[6]=51;
                    if(d==4) CF[6]=52;
                    if(d==5) CF[6]=53;
                    if(d==6) CF[6]=54;
                    if(d==7) CF[6]=55;
                    if(d==8) CF[6]=56;
                    if(d==9) CF[6]=57;
                    if(u==0) CF[7]=48;
                    if(u==1) CF[7]=49;
                    if(u==2) CF[7]=50;
                    if(u==3) CF[7]=51;
                    if(u==4) CF[7]=52;
                    if(u==5) CF[7]=53;
                    if(u==6) CF[7]=54;
                    if(u==7) CF[7]=55;
                    if(u==8) CF[7]=56;
                    if(u==9) CF[7]=57;


                    if(mm==1)  CF[8]='A';
                    if(mm==2)  CF[8]='B';
                    if(mm==3)  CF[8]='C';
                    if(mm==4)  CF[8]='D';
                    if(mm==5)  CF[8]='E';
                    if(mm==6)  CF[8]='H';
                    if(mm==7)  CF[8]='L';
                    if(mm==8)  CF[8]='M';
                    if(mm==9)  CF[8]='P';
                    if(mm==10) CF[8]='R';
                    if(mm==11) CF[8]='S';
                    if(mm==12) CF[8]='T';



                    if(genere[0]=='F')
                    { gs=gg+40; }

					else
                    { gs=gg; }


                    d=(gs/10);
                    u=(gs-d*10);
                    if(d==0) CF[9]=48;
                    if(d==1) CF[9]=49;
                    if(d==2) CF[9]=50;
                    if(d==3) CF[9]=51;
                    if(d==4) CF[9]=52;
                    if(d==5) CF[9]=53;
                    if(d==6) CF[9]=54;
                    if(d==7) CF[9]=55;
                    if(d==8) CF[9]=56;
                    if(d==9) CF[9]=57;
                    if(u==0) CF[10]=48;
                    if(u==1) CF[10]=49;
                    if(u==2) CF[10]=50;
                    if(u==3) CF[10]=51;
                    if(u==4) CF[10]=52;
                    if(u==5) CF[10]=53;
                    if(u==6) CF[10]=54;
                    if(u==7) CF[10]=55;
                    if(u==8) CF[10]=56;
                    if(u==9) CF[10]=57;

// ctrl
                    for(I=1, ctrl=0; I<15; I=I+2)
                    {
                        if(CF[I]=='0') ctrl=ctrl+0;
                        if(CF[I]=='1') ctrl=ctrl+1;
                        if(CF[I]=='2') ctrl=ctrl+2;
                        if(CF[I]=='3') ctrl=ctrl+3;
                        if(CF[I]=='4') ctrl=ctrl+4;
                        if(CF[I]=='5') ctrl=ctrl+5;
                        if(CF[I]=='6') ctrl=ctrl+6;
                        if(CF[I]=='7') ctrl=ctrl+7;
                        if(CF[I]=='8') ctrl=ctrl+8;
                        if(CF[I]=='9') ctrl=ctrl+9;
                        if(CF[I]=='A') ctrl=ctrl+0;
                        if(CF[I]=='B') ctrl=ctrl+1;
                        if(CF[I]=='C') ctrl=ctrl+2;
                        if(CF[I]=='D') ctrl=ctrl+3;
                        if(CF[I]=='E') ctrl=ctrl+4;
                        if(CF[I]=='F') ctrl=ctrl+5;
                        if(CF[I]=='G') ctrl=ctrl+6;
                        if(CF[I]=='H') ctrl=ctrl+7;
                        if(CF[I]=='I') ctrl=ctrl+8;
                        if(CF[I]=='J') ctrl=ctrl+9;
                        if(CF[I]=='K') ctrl=ctrl+10;
                        if(CF[I]=='L') ctrl=ctrl+11;
                        if(CF[I]=='M') ctrl=ctrl+12;
                        if(CF[I]=='N') ctrl=ctrl+13;
                        if(CF[I]=='O') ctrl=ctrl+14;
                        if(CF[I]=='P') ctrl=ctrl+15;
                        if(CF[I]=='Q') ctrl=ctrl+16;
                        if(CF[I]=='R') ctrl=ctrl+17;
                        if(CF[I]=='S') ctrl=ctrl+18;
                        if(CF[I]=='T') ctrl=ctrl+19;
                        if(CF[I]=='U') ctrl=ctrl+20;
                        if(CF[I]=='V') ctrl=ctrl+21;
                        if(CF[I]=='W') ctrl=ctrl+22;
                        if(CF[I]=='X') ctrl=ctrl+23;
                        if(CF[I]=='Y') ctrl=ctrl+24;
                        if(CF[I]=='Z') ctrl=ctrl+25;

                    }

                    for(I=0; I<15; I=I+2)
                    {
                        if(CF[I]=='0') ctrl=ctrl+1;
                        if(CF[I]=='1') ctrl=ctrl+0;
                        if(CF[I]=='2') ctrl=ctrl+5;
                        if(CF[I]=='3') ctrl=ctrl+7;
                        if(CF[I]=='4') ctrl=ctrl+9;
                        if(CF[I]=='5') ctrl=ctrl+13;
                        if(CF[I]=='6') ctrl=ctrl+15;
                        if(CF[I]=='7') ctrl=ctrl+17;
                        if(CF[I]=='8') ctrl=ctrl+19;
                        if(CF[I]=='9') ctrl=ctrl+21;
                        if(CF[I]=='A') ctrl=ctrl+1;
                        if(CF[I]=='B') ctrl=ctrl+0;
                        if(CF[I]=='C') ctrl=ctrl+5;
                        if(CF[I]=='D') ctrl=ctrl+7;
                        if(CF[I]=='E') ctrl=ctrl+9;
                        if(CF[I]=='F') ctrl=ctrl+13;
                        if(CF[I]=='G') ctrl=ctrl+15;
                        if(CF[I]=='H') ctrl=ctrl+17;
                        if(CF[I]=='I') ctrl=ctrl+19;
                        if(CF[I]=='J') ctrl=ctrl+21;
                        if(CF[I]=='K') ctrl=ctrl+2;
                        if(CF[I]=='L') ctrl=ctrl+4;
                        if(CF[I]=='M') ctrl=ctrl+18;
                        if(CF[I]=='N') ctrl=ctrl+20;
                        if(CF[I]=='O') ctrl=ctrl+11;
                        if(CF[I]=='P') ctrl=ctrl+3;
                        if(CF[I]=='Q') ctrl=ctrl+6;
                        if(CF[I]=='R') ctrl=ctrl+8;
                        if(CF[I]=='S') ctrl=ctrl+12;
                        if(CF[I]=='T') ctrl=ctrl+14;
                        if(CF[I]=='U') ctrl=ctrl+16;
                        if(CF[I]=='V') ctrl=ctrl+10;
                        if(CF[I]=='W') ctrl=ctrl+22;
                        if(CF[I]=='X') ctrl=ctrl+25;
                        if(CF[I]=='Y') ctrl=ctrl+24;
                        if(CF[I]=='Z') ctrl=ctrl+23;

                    }
                    ctrl=ctrl%26;
                    for(I=0, l=65; I<26; I++, l++)
                    {
                    if(ctrl==I) ctrl2[0]=l;
                    }
}

void gn()
{
    printf("Il codice fiscale e': ");
    puts(CF);
    gotoxy(34,1);
    puts(code);
    gotoxy(38,1);
    puts(ctrl2);
    getch();
    system("cls");
}
int main()
{

    do{
         do{
                         system("cls");
                         gotoxy(27,4);
                         textcolor(11);
                         printf("Codice fiscale");
                         gotoxy(10,8);
                         textcolor(15);
                         printf("1)Immisione dati");
                         gotoxy(10,10);
                         printf("2)Genera e visualizza il codice fiscale");
                         gotoxy(10,12);
                         printf("3)Esci");
                         gotoxy(38,23);
                         printf("Scegli ------->  ");
                         fflush(stdin);
                         scanf("%d",&a);
                        }while(a > 3 or a < 1);
           system("cls");
           switch(a){
                case 1:{im();}break;
                case 2:{gn();}break;

           }
    }while(a != 3);






}




