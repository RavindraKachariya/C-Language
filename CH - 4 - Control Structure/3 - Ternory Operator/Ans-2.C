#include<stdio.h>
#include<conio.h>

main()
{
	int a;
	clrscr();

	printf("Enter The Number : ");
	scanf("%d",&a);

	(a>0)
		?printf("A is Positiv")

		:(a==0)
			?printf("A is Nutral")
			:printf("A is Nagativ");

	getch();
}