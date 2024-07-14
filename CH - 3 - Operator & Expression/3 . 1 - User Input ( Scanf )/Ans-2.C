#include<stdio.h>
#include<conio.h>

main()
{
	int a , b;
	int age;
	char name[10];
	char grade;
	float per;
	clrscr();
	printf("enter the value of a :");
	scanf("%d",&a);
	printf("enter the value of b ;");
	scanf("%d",&b);
	printf("inte age\t:");
	scanf("%d",&age);
	printf("enter grade\t:");
	fflush(stdin);
	scanf("%c",&grade);
	printf("enter per\t:");
	scanf("%s",&per);
	printf("enter name\t:");
	scanf("%s",&name);
	getch();
}