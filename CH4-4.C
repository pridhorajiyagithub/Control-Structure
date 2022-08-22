#include<stdio.h>
#include<conio.h>

void main()
{ int num ;
clrscr();
printf("enter any number::");
scanf("%d",&num);
if(num==0)
{
printf("number is nutral");
}
else if(num>0)
{
printf("number is positive");
}
else
{
 printf("number is negetive");
}
 getch();
}