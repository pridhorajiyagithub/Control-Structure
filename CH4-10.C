#include<stdio.h>
#include<conio.h>
main()
{int choice,type,type2,type3;
clrscr();
printf("press 1 for endlish\n");
printf("press 2 for hindi\n");
printf("press 3 for gujrati\n");

printf("enter your choice::\n");
scanf("%d",&choice);
switch(choice)
{
 case 2:
	printf("you choose hindi\n\n");

	printf("recharge plan ke liye 1 press kariye\n");
	printf("special rechage offer ke liye 2 press kariye\n");
	printf("free callertune ke liye 3 press kariye\n");
	printf("data validity ke liye 4 press kariye \n");

	printf("\nenter your type::");
	scanf("%d",&type2);

	switch(type2)
	{
	  case 1:
		printf("apne recharge plan pasand kiya hai");
		break;
	  case 2:
		printf("apne specail recharge offer pasand kiya hai");
		break;
	  case 3:
		printf("apne free callertune pasand ki hai");
		break;
	  case 4:
		printf("apne data validity ko pasand kiya hai");
		break;
	  default:
		printf("invalid type!!");
		break;
	}
	break;

  case 1:
	printf("you choose english\n\n");
	printf("press 1 for recharge plan\n");
	printf("press 2 for special rechage offer\n");
	printf("press 3 for free callertune\n");
	printf("press 1 for data validity\n");

	printf("\nenter your type::");
	scanf("%d",&type);

	switch(type)
	{
	  case 1:
		printf("you choose recharge plan");
		break;
	  case 2:
		printf("you choose specail recharge offer");
		break;
	  case 3:
		printf("you choose free callertune");
		break;
	  case 4:
		printf("you choose data validity");
		break;
	  default:
		printf("invalid type!!");
		break;
	}
	break;

case 3:
	printf("tame gujrati pasand karyu che.\n\n");
	printf("recharge plan mate 1 dabavo\n");
	printf("special rechage offer mate 2 dabavo\n");
	printf("free callertune mate 3 dabavo\n");
	printf("data validity mate 4 dabavo\n");

	printf("\nenter your type::");
	scanf("%d",&type3);

	switch(type3)
	{
	  case 1:
		printf("tame recharge plan pasand karyu che");
		break;
	  case 2:
		printf(" tame specail recharge offer pasand kareli che");
		break;
	  case 3:
		printf("tame free callertune pasand kareli che");
		break;
	  case 4:
		printf("tame data validity pasand kareli che");
		break;
	  default:
		printf("invalid type!!");
		break;
	}
	break;
    default:
    {
     printf("invalid choice!!");
    }

}

getch();
}
