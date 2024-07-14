#include<stdio.h>
#include<conio.h>

main()
{
	int age;

	clrscr();

	printf("Enter Your Age :");
	scanf("%d",&age);
	if(age >=18 && age<=60)
	{
		printf("You Can Apply License");
	}
	else
	{
		printf("You Can't Apply License");
	}

	getch();
}