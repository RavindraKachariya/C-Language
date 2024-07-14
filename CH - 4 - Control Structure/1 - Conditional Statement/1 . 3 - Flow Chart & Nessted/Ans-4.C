
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d,e,f;
	clrscr();

	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("enter c:");
	scanf("%d",&c);
	printf("enter d:");
	scanf("%d",&d);
	printf("enter e:");
	scanf("%d",&e);
	printf("enter f:");
	scanf("%d",&f);

	if(a==b && b==c && c==d && d==e && e==f && f==a)
	{
		printf("all are same");
	}
	//a
	else if(a>b)
	{
		//a
		if(a>c)
		{        //a
			if(a>d)
			{        //a
				 if(a>e)
				 {
					 //a
					if(a>f)
					{
						printf("a is big");

					}
					//f
					else
					{
						printf("f is big");
					}
				 }
				 //e
				 else
				 {
					if(e>f)
					{
						printf("e is big");

					}
					else
					{
						printf("f is big");
					}
				 }
			}
			//d
			else
			{       //d
				if(d>e)
				{
					if(d>f)
					{
						printf("d is big");
					}
					else
					{
						printf("f is big");
					}
				}
				//e
				else
				{
					if(e>f)
					{
						printf("e is big");

					}
					else
					{
						printf("f is big");
					}
				}
			}
		}

		 //c
		else
		{
			//c
			if(c>d)
			{
				//c
				if(c>e)
				{
					//c
					if(c>f)
					{
						printf("c is big");
					}
					//f
					else
					{
						printf("f is big");
					}
				}
				//e
				else
				{
					if(e>f)
					{
						printf("e is big");

					}
					else
					{
						printf("f is big");
					}
				}
			}
			//d
			else
			{
				//d
				if(d>e)
				{
					//d
					if(d>f)
					{
						printf("d is big");
					}
					//f
					else
					{
						printf("f is big");
					}
				}
				//e
				else
				{
					if(e>f)
					{
						printf("e is big");

					}
					else
					{
						printf("f is big");
					}
				}
			}
		}
	}
	//b
	else
	{
		//b
		if(b>c)
		{        //a
			if(b>d)
			{        //a
				 if(b>e)
				 {
					 //a
					if(b>f)
					{
						printf("b is big");

					}
					//f
					else
					{
						printf("f is big");
					}
				 }
				 //e
				 else
				 {
					if(e>f)
					{
						printf("e is big");

					}
					else
					{
						printf("f is big");
					}
				 }
			}
			//d
			else
			{       //d
				if(d>e)
				{
					if(d>f)
					{
						printf("d is big");
					}
					else
					{
						printf("f is big");
					}
				}
				//e
				else
				{
					if(e>f)
					{
						printf("e is big");

					}
					else
					{
						printf("f is big");
					}
				}
			}
		}

		 //c
		else
		{
			//c
			if(c>d)
			{
				//c
				if(c>e)
				{
					//c
					if(c>f)
					{
						printf("c is big");
					}
					//f
					else
					{
						printf("f is big");
					}
				}
				//e
				else
				{
					if(e>f)
					{
						printf("e is big");

					}
					else
					{
						printf("f is big");
					}
				}
			}
			//d
			else
			{
				//d
				if(d>e)
				{
					//d
					if(d>f)
					{
						printf("d is big");
					}
					//f
					else
					{
						printf("f is big");
					}
				}
				//e
				else
				{
					if(e>f)
					{
						printf("e is big");

					}
					else
					{
						printf("f is big");
					}
				}
			}
		}
	}

	getch();


}