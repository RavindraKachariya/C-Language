#include<stdio.h>
#include<conio.h>

main()
{
	int a;

	clrscr();

	printf("Enter The Valu Of A : ");
	scanf("%d",&a);

	(a%2==0)
		?printf("Number Is Even")
		:printf("Number Is Odd");

	getch();
}