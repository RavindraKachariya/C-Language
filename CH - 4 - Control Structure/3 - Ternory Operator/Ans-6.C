#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d,e;

	clrscr();

	printf("Enter The Value Of A :");
	scanf("%d",&a);

	printf("Enter The Value Of B :");
	scanf("%d",&b);

	printf("Enter The Value Of C :");
	scanf("%d",&c);

	printf("Enter The Value Of D :");
	scanf("%d",&d);

	printf("Enter The Value Of E :");
	scanf("%d",&e);

	(a>b)
		//a
		?(a>c)
			//a
			?(a>d)
				//a
				?(a>e)
					//a
					?printf("A is Big")
					//e
					:printf("E is BIg")
				//d
				:(d>e)
					//d
					?printf("D is Big")
					//e
					:printf("E is Big")
			//c
			:(c>d)
				//c
				?(c>e)
					//c
					?printf("C is Big")
					//e
					:printf("E is Big")
				//d
				:(d>e)
					//d
					?printf("D is Big")
					//e
					:printf("E is Big")
		//b
		:(a>c)
			//b
			?(b>d)
				//b
				?(b>e)
					//b
					?printf("B is Big")
					//e
					:printf("E is BIg")
				//d
				:(d>e)
					//d
					?printf("D is Big")
					//e
					:printf("E is Big")
			//c
			:(c>d)
				//c
				?(c>e)
					//c
					?printf("C is Big")
					//e
					:printf("E is Big")
				//d
				:(d>e)
					//d
					?printf("D is Big")
					//e
					:printf("E is Big");


	getch();
}