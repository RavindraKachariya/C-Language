#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	int b;
	int c;
	int sum;
	float dis;
	float d,e;
	clrscr();
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("enter c:");
	scanf("%d",&c);

	sum=a+b+c;
	printf("total:%d\n",sum);

	printf("enter disscount:");
	scanf("%f",&dis);
	d=sum*dis/100;
	printf("total disscount:%.2f\n",sum-d);

	e=sum-d;
	e += e*0.18;
	printf("total gst:%.2f",e);




	getch();


}