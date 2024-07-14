#include<stdio.h>
#include<conio.h>

main()
{
	float c,f;
	clrscr();
	printf("The Temerature in Celcius :");
	scanf("%f",&c);
	f=(c*9/5)+32;
	printf("the Temerature in Fahtenheit :%.2f",f);
	getch();
}