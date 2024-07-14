#include<stdio.h>
#include<conio.h>
#define P printf

main()
{
	int l = 10;
	int b = 11;
	float pi = 3.14;
	int r = 19;
	int h = 41;
	int p = 16;
	int n = 18;
	clrscr();
	P("eara of sqare\t\t : %d\n",l*l);
	P("eara of rectangle\t : %d\n",l*b);
	P("eara of circlue\t\t : %.2f\n",pi*r*r);
	P("paramitras of circlue\t : %f\n",2*pi*r);
	P("eara of triagake\t : %f\n",0.5*h*b);
	P("simple intrest\t\t : %f\n",(p*r*h)/100);
	getch();

}