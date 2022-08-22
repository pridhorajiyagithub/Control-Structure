#include<stdio.h>
#include<conio.h>
// find minimum number from given 3 number
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
 if(a<b)
 {
  if(a<c)
  {
   printf("(a)%d is minimum",a);
  }
  else
  {
    printf("(c)%d is minimum",c);
  }
 }
 else
 {
   if(b<c)
   {
    printf("(b)%d is minimum",b);
   }
   else
   {
    printf("(c)%d is minimum",c);
   }
 }


}
 getch();
}