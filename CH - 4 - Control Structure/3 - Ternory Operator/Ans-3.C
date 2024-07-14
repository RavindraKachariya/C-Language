#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	clrscr();

	printf("Enter The Value Of A : ");
	scanf("%d",&a);

	printf("Enter The Value Of B : ");
	scanf("%d",&b);

	(a>b)
		?printf("A is Big")
		:printf("B is Big");

	getch();

}