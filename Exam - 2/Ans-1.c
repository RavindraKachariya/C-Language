#include<stdio.h>

int main()
{
	int a;
	printf("Enter The Number : ");
	scanf("%d",&a);

	(a>0)
		?printf("A is Positiv")

		:(a==0)
			?printf("A is Nutral")
			:printf("A is Nagativ");
}