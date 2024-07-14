#include<stdio.h>
#include<conio.h>

main()
{       int a;
	float hr,da,ta;
	clrscr();
	printf("base salary :");
	scanf("%d",&a);
	hr=a*0.1;
	da=a*0.05;
	ta=a*0.08;
	printf("Rs : %.2f",a+hr+da+ta);
	getch();
}