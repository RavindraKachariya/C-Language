#include<stdio.h>
#include<conio.h>
#define P printf

main()
{
	int a,b,c,d,e,f,g;

	clrscr();

	P("Enter The Value Of A :");
	scanf("%d",&a);

	P("Enter The Value Of B :");
	scanf("%d",&b);

	P("Enter The Value Of C :");
	scanf("%d",&c);

	P("Enter The Value Of D :");
	scanf("%d",&d);

	P("Enter The Value Of E :");
	scanf("%d",&e);

	P("Enter The Value Of F :");
	scanf("%d",&f);

	P("Enter The Value Of G :");
	scanf("%d",&g);

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
						?(a>g)
							//a
							?P("A is Big")
							//g
							:P("G is Big")
						//f
						:(f>g)
							//f
							?P("F is Big")
							//g
							:P("G is Big")
					//e
					:(e>f)
						//e
						?(e>g)
							//e
							?P("E is Big")
							//g
							:P("G is Big")
						//f
						:(f>g)
							//f
							?P("F is Big")
							//g
							:P("G is Big")
				//d
				:(d>e)
					//d
					?(d>f)
						//d
						?(d>g)
							//d
							?P("D is Big")
							//g
							:P("G is Big")
						//f
						:(f>g)
							//f
							?P("F is Big")
							//g
							:P("G is Big")
					//e
					:(e>f)
						//e
						?(e>g)
							//e
							?P("E is Big")
							//g
							:P("G is Big")
						//f
						:(f>g)
							//f
							?P("F is Big")
							//g
							:P("G is Big")
			//c
			:(c>e)
					//c
					?(c>f)
						//c
						?(c>g)
							//c
							?P("C is Big")
							//g
							:P("G is Big")
						//f
						:(f>g)
							//f
							?P("F is Big")
							//g
							:P("G is Big")
					//e
					:(e>f)
						//e
						?(e>g)
							//e
							?P("E is Big")
							//g
							:P("G is Big")
						//f
						:(f>g)
							//f
							?P("F is Big")
							//g
				//d
				:(d>e)
					//d
					?(d>f)
						//d
						?(d>g)
							//d
							?P("D is Big")
							//g
							:P("G is Big")
						//f
						:(f>g)
							//f
							?P("F is Big")
							//g
							:P("G is Big")
					//e
					:(e>f)
						//e
						?(e>g)
							//e
							?P("E is Big")
							//g
							:P("G is Big")
						//f
						:(f>g)
							//f
							?P("F is Big")
							//g
							:P("G is Big")

		//b
		:(b>c)
			//b
			?(b>d)
				//b
				?(b>e)
					//b
					?(b>f)
						//b
						?(b>g)
							//b
							?P("B is Big")
							//g
							:P("G is Big")
						//f
						:(f>g)
							//f
							?P("F is Big")
							//g
							:P("G is Big")
					//e
					:(e>f)
						//e
						?(e>g)
							//e
							?P("E is Big")
							//g
							:P("G is Big")
						//f
						:(f>g)
							//f
							?P("F is Big")
							//g
							:P("G is Big")
				//d
				:(d>e)
					//d
					?(d>f)
						//d
						?(d>g)
							//d
							?P("D is Big")
							//g
							:P("G is Big")
						//f
						:(f>g)
							//f
							?P("F is Big")
							//g
							:P("G is Big")
					//e
					:(e>f)
						//e
						?(e>g)
							//e
							?P("E is Big")
							//g
							:P("G is Big")
						//f
						:(f>g)
							//f
							?P("F is Big")
							//g
							:P("G is Big")
			//c
			:(c>e)
					//c
					?(c>f)
						//c
						?(c>g)
							//c
							?P("C is Big")
							//g
							:P("G is Big")
						//f
						:(f>g)
							//f
							?P("F is Big")
							//g
							:P("G is Big")
					//e
					:(e>f)
						//e
						?(e>g)
							//e
							?P("E is Big")
							//g
							:P("G is Big")
						//f
						:(f>g)
							//f
							?P("F is Big")
							//g
				//d
				:(d>e)
					//d
					?(d>f)
						//d
						?(d>g)
							//d
							?P("D is Big")
							//g
							:P("G is Big")
						//f
						:(f>g)
							//f
							?P("F is Big")
							//g
							:P("G is Big")
					//e
					:(e>f)
						//e
						?(e>g)
							//e
							?P("E is Big")
							//g
							:P("G is Big")
						//f
						:(f>g)
							//f
							?P("F is Big")
							//g
							:P("G is Big");

	getch();


}