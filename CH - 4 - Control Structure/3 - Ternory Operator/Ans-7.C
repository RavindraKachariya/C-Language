#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d,e,f;

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

	printf("Enter The Value Of F :");
	scanf("%d",&f);

	(a>b)
		//a
		?(a>c)
			//a
			?(a>d)
				//a
				?(a>e)
					//a
					?(a>f)
						//a
						?printf("A is Big")
						//f
						:printf("F is Big")
					//e
					:(e>f)
						//e
						?printf("E is Big")
						//f
						:printf("F is Big")
				//d
				:(d>e)
					//d
					?(d>f)
						//d
						?printf("D is Big")
						//f
						:printf("F is Big")
					//e
					:(e>f)
						//e
						?printf("E is Big")
						//f
						:printf("F is Big")
			//c
			:(c>d)
				//c
				?(c>e)
					//c
					?(c>f)
						//c
						?printf("C is Big")
						//f
						:printf("F is Big")
					//e
					:(e>f)
						//e
						?printf("E is Big")
						//f
						:printf("F is Big")
				//d
				:(d>e)
					//d
					?(d>f)
						//d
						?printf("D is Big")
						//f
						:printf("F is Big")
					//e
					:(e>f)
						//e
						?printf("E is Big")
						//f
						:printf("F is Big")
		//b
		:(b>c)
			//b
			?(b>d)
				//b
				?(b>e)
					//b
					?(b>f)
						//b
						?printf("B is Big")
						//f
						:printf("F is Big")
					//e
					:(e>f)
						//e
						?printf("E is Big")
						//f
						:printf("F is Big")
				//d
				:(d>e)
					//d
					?(d>f)
						//d
						?printf("D is Big")
						//f
						:printf("F is Big")
					//e
					:(e>f)
						//e
						?printf("E is Big")
						//f
						:printf("F is Big")
			//c
			:(c>d)
				//c
				?(c>e)
					//c
					?(c>f)
						//c
						?printf("C is Big")
						//f
						:printf("F is Big")
					//e
					:(e>f)
						//e
						?printf("E is Big")
						//f
						:printf("F is Big")
				//d
				:(d>e)
					//d
					?(d>f)
						//d
						?printf("D is Big")
						//f
						:printf("F is Big")
					//e
					:(e>f)
						//e
						?printf("E is Big")
						//f
						:printf("F is Big");

	getch();

}
