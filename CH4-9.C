#include<stdio.h>
#include<conio.h>
// find max num from 3 num (tarnary)
void main()
{
 int a,b,c;
 clrscr();
 printf("enter any 3 number::");
 scanf("%d %d %d",&a,&b,&c);

  a==b && b==c
	       ? printf("all value are same")
	       :
		a>b
		 ? a>c
		     ? printf("a is max")
		     : printf("c is max")
		 : b>c
		     ? printf("b is max")
		     : printf("c is max");


 getch();
}