#include<stdio.h>
#include<conio.h>

main()
{
	float unit, amt , total , bill;
	clrscr();

	printf("Enter The Unit :");
	scanf("%f",&unit);

	if(unit>=0 && unit<=50)
	{
		amt = unit * 0.50;
	}

	else if(unit>=51 && unit <=150)
	{
		amt = 25 + ((unit - 50) * 0.75);
	}

	else if(unit>=151 && unit<=250)
	{
		amt= 100 + ((unit - 150) * 1.20);
	}

	else
	{
		amt = 220 + ((unit - 250) * 1.5);
	}

	total = amt * 0.20;

	bill = amt + total;

	printf("Total Bill : %.2f",bill);

	getch();

}