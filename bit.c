#include<stdio.h>
#include<conio.h>
void ch(char num[3],int n)
{
if(n>0)
{
num[3-n]='0';
ch(num,n-1);
num[3-n]='1';
ch(num,n-1);
}
else
printf("%s\n",num);
}
void main()
{
char num[]={0};
int n;
clrscr();
scanf("%d",&n);
ch(num,n);
getch();
}
