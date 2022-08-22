#include<stdio.h>
#include<conio.h>

void main()
{int n;
 clrscr();
 printf("enter days of january(1-31)::");
 scanf("%d",&n);
 if(n%7==1 && n<=365)
 {
   printf("saturday");
 }
 else if(n%7==2 && n<=365)
 {
   printf("sunday");
 }
 else if(n%7==3 && n<=365)
 {
   printf("monday");
 }
 else if(n%7==4 && n<=365)
 {
   printf("tuesday");
 }
 else if(n%7==5 && n<=365)
 {
   printf("wednesday");
 }
 else if(n%7==6 && n<=365)
 {
   printf("thursday");
 }
 else if(n%7==0 && n<=365)
 {
   printf("friday");
 }
 if(n>=1 && n<=31)
 {
   printf(" january");
 }
 else if(n>=32 && n<=59)
 {
   printf(" february");
 }
  if(n>=60 && n<=90)
 {
   printf(" march");
 }
  if(n>=91 && n<=120)
 {
   printf(" april");
 }
  if(n>=121 && n<=151)
 {
   printf(" may");
 }
  if(n>=152 && n<=181)
 {
   printf(" june");
 }
  if(n>=182 && n<=212)
 {
   printf(" july");
 }
  if(n>=213 && n<=243)
 {
   printf(" august");
 }
  if(n>=244 && n<=273)
 {
   printf(" september");
 }
  if(n>=274 && n<=304)
 {
   printf(" october");
 }
  if(n>=305 && n<=334)
 {
   printf(" november");
 }
  if(n>=335 && n<=365)
 {
   printf(" december");
 }
 getch();
}