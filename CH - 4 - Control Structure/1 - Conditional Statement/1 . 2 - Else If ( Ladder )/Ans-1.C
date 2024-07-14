#include<conio.h>

main()
{
	int a;

	clrscr();

	printf("Enter Your Persentage : ");
	scanf("%d",&a);

	if(a>90 && a<=100)
	{
		printf("Your Grade Is = A1");
	}

	else if(a>80 && a<=90)
	{
		printf("Your Grade Is = A2 ");
	}

	else if(a>70 && a<=80)
	{
		printf("Your Grade Is = B1 ");
	}

	else if(a>60 && a<=70)
	{
		printf("Your Grade Is = B2 ");
	}

	else if(a>50 && a<=60)
	{
		printf("Your Grade Is = C1 ");
	}

	else if(a>40 && a<=50)
	{
		printf("Your Grade Is = C2 ");
	}

	else if(a>=33 && a<=40)
	{
		printf("Your Grade Is = D1");
	}

	else
	{
		printf("Need Improvement");
	}

	getch();
}