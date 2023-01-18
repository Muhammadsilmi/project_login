/*
Nama  :MUHAMMAD SILMI KAFFAH
Kelas :X-PPLG
User  :KAFFAH
Pass  :YTTAISDL
*/
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<iostream.h>
#include "header.h"
main()
{
program("HEADER");
int i,a=0;
char np[20],tum;
char pw[15]="YTTAISDL";
ulang:
cout<<"Nama User:";gets(np);
cout<<"Password :";
for(i=0;i<=8;i++)
{tum=getch();
cout<<"*";
if (tum==pw[i])
{a=a+1;}
}
if((strcmp(np,"KAFFAH")==0)&&a==8)
{
clrscr();
cout<<"        "<<np<<" Berhasil Login "<<endl;
}
else
{
clrscr();
cout<<" Maaf Anda Gagal Login"<<endl;
a=0;
goto ulang;
}

getch();
}