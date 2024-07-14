#include<stdio.h>
#include<conio.h>
main()
{
	int l;
	int b;
	int r;
	float pi=3.14;

	clrscr();
	printf("enter the value of area:");
	scanf("%d",&l);
	printf("area of squre:%d\n",l*l);
	printf("enter the value of l:");
	scanf("%d",&b);
	printf("area of rectangle:%d\n",l*b);
	printf("enter the value of r:");
	scanf("%d",&r);
	printf("area of crical:%f\n",pi*r*r);
	printf("value of pera:");
	scanf("%d",&r);
	printf("pera of crical:%f\n",2.0*pi*(float)r);

	getch();
}