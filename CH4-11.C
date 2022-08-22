#include<stdio.h>
#include<conio.h>

main()
{
  int a,b,c,d;
  clrscr();
  printf("enter 4 number::");
  scanf("%d %d %d %d",&a,&b,&c,&d);

  (a==b && b==c && c==d)
  ? printf("all number are same")
  :
   a<b
     ?
      a<c
	?
	 a<d
	   ? printf("a is min")
	   : printf("d is min")
	:c<d
	  ? printf("c is min")
	  : printf("d is min")
     :
      b<c
	?
	b<d
	  ? printf("b is min")
	  : printf("d is min")
	:
	  c<d
	  ? printf("c is min")
	  : printf("d is min");
  getch();
}