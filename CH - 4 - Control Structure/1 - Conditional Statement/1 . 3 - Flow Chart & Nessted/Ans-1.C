#include<stdio.h>
#include<conio.h>

main()
{
	int  a,b,c;
	clrscr();

	printf("Enter A :");
	scanf("%d",&a);

	printf("Enter B :");
	scanf("%d",&b);

	printf("Enter C :");
	scanf("%d",&c);


	if(a==b && b==c && c==a)
	{
		printf("All Is Same");
	}

	else if(a==b)
	{
		if(a>c)
		{
			printf("A & B Big");
		}
		else
		{
			printf("C Is Big");
		}
	}

	else if(b==c)
	{
		if(b>a)
		{
			printf("B & C Big");
		}
		else
		{
			printf("A Is Big");
		}
	}

	else if(c==a)
	{
		if(c>b)
		{
			printf("C & B Big");
		}
		else
		{
			printf("B Is Big");
		}
	}

	else if(a>b)
	{
		if(a>c)
		{
			printf("A Is Big");
		}
		else
		{
			printf("C Is Big");
		}
	 }

	 else
	 {
		if(b>c)
		{
			printf("B Is Big");
		}
		else
		{
			printf("C is Big");
		}

	 }

	getch();
}