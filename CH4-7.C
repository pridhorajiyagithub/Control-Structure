#include<stdio.h>
#include<conio.h>
// find maximum number from given 4 number
void main()
{ int a,b,c,d ;
clrscr();
printf("enter any 4 number::");
scanf("%d %d %d %d",&a,&b,&c,&d);
if(a==b && b==c && c==d)
{
printf("all number are same");
}
else
{
 if(a>b)
 {
  if(a>c)
   {
    if(a>d)
      {
	printf("(a)%d is maximum",a);
      }
    else
      {
	printf("(d)%d is maximum",d);
      }
   }
 }
 else
 {
   if(b>c)
   {
     if(b>d)
     {
       printf("(b)%d is maximum",b);
     }
     else
     {
      printf("(d)%d is maximum",d);
     }
     }
   else
     {
       if(c>d)
       {
	printf("(c)%d is maximum,c");
       }
       else
       {
	printf("(d)%d is maximum",d);
       }
     }

 }


}
 getch();
}