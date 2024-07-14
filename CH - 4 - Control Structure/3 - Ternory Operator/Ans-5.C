#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d;

	clrscr();

	printf("Enter The Value Of A : ");
	scanf("%d",&a);

	printf("Enter The Value Of B : ");
	scanf("%d",&b);

	printf("Enter The Value Of C : ");
	scanf("%d",&c);

	printf("Enter The Value Of D : ");
	scanf("%d",&d);

	(a>b)
		//a
		?(a>c)
			//a
			?(a>d)
				//a
				?printf("A is Big")
				//d
				:printf("D is Big")
			//c
			:(c>d)
				//c
				?printf("C is Big")
				//d
				:printf("D is Big")
		//b
		:(b>c)
			//b
			?(b>d)
				//b
				?printf("B is Big")
				//d
				:printf("D is Big")
			//c
			:(c>d)
				//c
				?printf("C is Big")
				//d
				:printf("D is Big");

	getch();


}