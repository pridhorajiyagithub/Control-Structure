#include<stdio.h>
#include<conio.h>
// find maximum number from given 3 number
void main()
{ int a,b,c ;
clrscr();
printf("enter any 3 number::");
scanf("%d %d %d",&a,&b,&c);
if(a==b && b==c)
{
printf("all number are same");
}
else
{
 if(a>b)
 {
  if(a>c)
  {
   printf("(a)%d is maximum",a);
  }
  else
  {
    printf("(c)%d is maximum",c);
  }
 }
 else
 {
   if(b>c)
   {
    printf("(b)%d is maximum",b);
   }
   else
   {
    printf("(c)%d is maximum",c);
   }
 }


}
 getch();
}