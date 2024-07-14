#include<conio.h>

int main()
{
	int a,b,c,r,total,sum;

    printf("Enter Your Roll No : ");
    scanf("%d",&r);

	printf("Enter Your Persentage A Subject Out Of 100 : ");
	scanf("%d",&a);

    printf("Enter Your Persentage B Subject Out Of 100 : ");
	scanf("%d",&b);

    printf("Enter Your Persentage C Subject Out Of 100 : ");
	scanf("%d",&c);

    total = a+b+c;
    sum = total/0.3;

	if(a>90 && a<=100)
	{
		printf("Your Grade Is = A1",sum);
	}

	else if(a>80 && a<=90)
	{
		printf("Your Grade Is = A2 ",sum);
	}

	else if(a>70 && a<=80)
	{
		printf("Your Grade Is = B1 ",sum);
	}

	else if(a>60 && a<=70)
	{
		printf("Your Grade Is = B2 ",sum);
	}

	else if(a>50 && a<=60)
	{
		printf("Your Grade Is = C1 ",sum);
	}

	else if(a>40 && a<=50)
	{
		printf("Your Grade Is = C2 ",sum);
	}

	else if(a>=33 && a<=40)
	{
		printf("Your Grade Is = D1",sum);
	}

	else
	{
		printf("Need Improvement",sum);
	}

}