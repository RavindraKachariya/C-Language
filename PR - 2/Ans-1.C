#include<stdio.h>
#include<conio.h>

main()
{
	int a;
	clrscr();

	printf("Enter The Number : ");
	scanf("%d",&a);

	(a%2==0)
		?printf("This Number Is Even")
		:printf("This Number Is Odd");

	getch();
}