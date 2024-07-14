#include<stdio.h>
#include<conio.h>
#define P printf

main()
{
	int a,b,c;
	clrscr();

	P("Enter The Value Of A :");
	scanf("%d",&a);
	P("Enter The Value Of B :");
	scanf("%d",&b);

	P("1) Add(+)\n");
	P("2) Multi(*)\n");
	P("3) Dev(/)\n");
	P("4) Minus(-)\n");
	P("5) Modulas(%)\n");
	P("Enter Choice: ");
	scanf("%d",&c);

	switch(c)
	{
		case 1:
		      P("Your Valu Is : %d\n",a+b);
		      break;

		case 2:
		      P("Your Valu Is : %d\n",a*b);
		      break;

		case 3:
		      P("Your Valu Is : %d\n",a/b);
		      break;

		case 4:
		      P("Your Valu Is : %d\n",a-b);
		      break;

		case 5:
		      P("Your Valu Is : %d\n",a%b);
		      break;

		default:
		      P("Invalid Input !! \n ");
	}

	getch();
}