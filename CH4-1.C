#include<stdio.h>
#include<conio.h>

void main()
{int n;
 clrscr();
 printf("enter days of january(1-31)::");
 scanf("%d",&n);
 if(n%7==1 && n<=31)
 {
   printf("saturday");
 }
 else if(n%7==2 && n<=31)
 {
   printf("sunday");
 }
 else if(n%7==3 && n<=31)
 {
   printf("monday");
 }
 else if(n%7==4 && n<=31)
 {
   printf("tuesday");
 }
 else if(n%7==5 && n<=31)
 {
   printf("wednesday");
 }
 else if(n%7==6 && n<=31)
 {
   printf("thursday");
 }
 else if(n%7==0 && n<=31)
 {
   printf("friday");
 }
 getch();
}