#include<stdio.h>
#include<conio.h>

main()
{
	int a;
	clrscr();
	printf("Enter The Value Of A : ");
	scanf("%d",&a);

	if(a>0)
	{
		printf("A is Positive");
	}
	else
	{
		printf("A is Nagative");
	}
	getch();
}