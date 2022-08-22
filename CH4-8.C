#include<stdio.h>
#include<conio.h>
// find minimum number from given 5 number
void main()
{ int a,b,c,d,e ;
clrscr();
printf("enter any 5 number::");
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
if(a==b && b==c && c==d && d==e)
{
printf("all number are same");
}
else
{
 if(a<b)
 {
  if(a<c)
   {
    if(a<d)
      {
       if(a<e)
       {
	printf("(a)%d is minimum",a);
       }
       else
       {
	printf("(e)%d is minimum",e);
       }
      }
   }
 }
 else
 {
   if(b<c)
   {
     if(b<d)
     {
       if(b<e)
       {
       printf("(b)%d is minimum",b);
	}
       else
	{
	printf("(e)%d is minimum",e);
	}
      }
   }
   else
     {
       if(c<d)
       {
	  if(c<e)
	    {
	     printf("(c)%d is minimum",c);
	    }
	  else
	    {
	     printf("(e)%d is minimum",e);
	    }

       }
	else
	{
	 if(d<e)
	 {
	  printf("(d)%d is minimum",d);
	 }
	  else
	   {
	    printf("(e)%d is minimum",e);
	   }
	}
     }

 }


}
 getch();
}