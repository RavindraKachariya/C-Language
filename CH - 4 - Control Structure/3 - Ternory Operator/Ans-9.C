#include<stdio.h>
#include<conio.h>
#define P printf

main()
{
	int a,b,c,d,e,f,g,h;

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

	P("Enter The Value Of H :");
	scanf("%d",&h);

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
							?(a>h)
								//a
								?P("A is Big")
								//h
								:P("H is Big")
						//g
						:(g>h)
							//g
							?P("G is Big")
							//h
							:P("H is Big")
					//f
					:(f>g)
						//f
						?(f>h)
							//f
							?P("F is Big")
							//h
							:P("H is Big")
						//g
						:(g>h)
							//g
							?P("G is Big")
							//h
							:P("H is Big")
				//d
				:(d>e)
					//d
					?(d>f)
						//d
						?(d>g)
							//d
							?(d>h)
								//d
								?P("D is Big")
								//h
								:P("H is Big")
						//f
						:(f>g)
							//f
							?(f>h)
								//f
								?P("F is Big")
								//h
								:P("H is Big")
							//g
							:(g>h)
								//g
								?P("G is Big")
								//h
								:P("H is Big")
					//e
					:(e>f)
						//e
						?(e>g)
							//e
							?(e>h)
								//e
								?P("E is Big")
								//h
								:P("H is Big")
							//g
							:(g>h)
								//g
								?P("G is Big")
								//h
								:P("H is Big")
						//f
						:(f>g)
							//f
							?(f>h)
								//f
								?P("F is Big")
								//h
								:P("H is Big")
							//g
							:(g>h)
								//g
								?P("G is Big")
								//h
								:P("H is Big")
			//c
			:(c>d)
				//c
				?(c>e)
					//c
					?(c>f)
						//c
						?(c>g)
							//c
							?(c>h)
								//c
								?P("C is Big")
								//h
								:P("H is Big")
						//g
						:(g>h)
							//g
							?P("G is Big")
							//h
							:P("H is Big")
					//f
					:(f>g)
						//f
						?(f>h)
							//f
							?P("F is Big")
							//h
							:P("H is Big")
						//g
						:(g>h)
							//g
							?P("G is Big")
							//h
							:P("H is Big")
				//d
				:(d>e)
					//d
					?(d>f)
						//d
						?(d>g)
							//d
							?(d>h)
								//d
								?P("D is Big")
								//h
								:P("H is Big")
						//f
						:(f>g)
							//f
							?(f>h)
								//f
								?P("F is Big")
								//h
								:P("H is Big")
							//g
							:(g>h)
								//g
								?P("G is Big")
								//h
								:P("H is Big")
					//e
					:(e>f)
						//e
						?(e>g)
							//e
							?(e>h)
								//e
								?P("E is Big")
								//h
								:P("H is Big")
							//g
							:(g>h)
								//g
								?P("G is Big")
								//h
								:P("H is Big")
						//f
						:(f>g)
							//f
							?(f>h)
								//f
								?P("F is Big")
								//h
								:P("H is Big")
							//g
							:(g>h)
								//g
								?P("G is Big")
								//h
								:P("H is Big")
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
							?(b>h)
								//b
								?P("B is Big")
								//h
								:P("H is Big")
						//g
						:(g>h)
							//g
							?P("G is Big")
							//h
							:P("H is Big")
					//f
					:(f>g)
						//f
						?(f>h)
							//f
							?P("F is Big")
							//h
							:P("H is Big")
						//g
						:(g>h)
							//g
							?P("G is Big")
							//h
							:P("H is Big")
				//d
				:(d>e)
					//d
					?(d>f)
						//d
						?(d>g)
							//d
							?(d>h)
								//d
								?P("D is Big")
								//h
								:P("H is Big")
						//f
						:(f>g)
							//f
							?(f>h)
								//f
								?P("F is Big")
								//h
								:P("H is Big")
							//g
							:(g>h)
								//g
								?P("G is Big")
								//h
								:P("H is Big")
					//e
					:(e>f)
						//e
						?(e>g)
							//e
							?(e>h)
								//e
								?P("E is Big")
								//h
								:P("H is Big")
							//g
							:(g>h)
								//g
								?P("G is Big")
								//h
								:P("H is Big")
						//f
						:(f>g)
							//f
							?(f>h)
								//f
								?P("F is Big")
								//h
								:P("H is Big")
							//g
							:(g>h)
								//g
								?P("G is Big")
								//h
								:P("H is Big")
			//c
			:(c>d)
				//c
				?(c>e)
					//c
					?(c>f)
						//c
						?(c>g)
							//c
							?(c>h)
								//c
								?P("C is Big")
								//h
								:P("H is Big")
						//g
						:(g>h)
							//g
							?P("G is Big")
							//h
							:P("H is Big")
					//f
					:(f>g)
						//f
						?(f>h)
							//f
							?P("F is Big")
							//h
							:P("H is Big")
						//g
						:(g>h)
							//g
							?P("G is Big")
							//h
							:P("H is Big")
				//d
				:(d>e)
					//d
					?(d>f)
						//d
						?(d>g)
							//d
							?(d>h)
								//d
								?P("D is Big")
								//h
								:P("H is Big")
						//f
						:(f>g)
							//f
							?(f>h)
								//f
								?P("F is Big")
								//h
								:P("H is Big")
							//g
							:(g>h)
								//g
								?P("G is Big")
								//h
								:P("H is Big")
					//e
					:(e>f)
						//e
						?(e>g)
							//e
							?(e>h)
								//e
								?P("E is Big")
								//h
								:P("H is Big")
							//g
							:(g>h)
								//g
								?P("G is Big")
								//h
								:P("H is Big")
						//f
						:(f>g)
							//f
							?(f>h)
								//f
								?P("F is Big")
								//h
								:P("H is Big")
							//g
							:(g>h)
								//g
								?P("G is Big")
								//h
								:P("H is Big");

	getch();

}