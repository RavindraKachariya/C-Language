#include<stdio.h>
#include<conio.h>
main()

{
	int a,b,c;

	clrscr();

	printf("Enter The A :");
	scanf("%d",&a);

	printf("Enter The B :");
	scanf("%d",&b);

	printf("Enter The C :");
	scanf("%d",&c);

	(a>b)
		//a
		? (a>c)
			//a
			?printf("A is Big")
			//c
			:printf("C is Big")
		//b
		:(b>c)
			//b
			?printf("B is Big")
			//c
			:printf("C is Big");

	getch();

}
