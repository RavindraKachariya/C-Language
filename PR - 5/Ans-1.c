#include<stdio.h>

int main()
{
	int n;
	
	printf("Enter N : ");
	scanf("%d",&n);
	
	int i,a[n];

	for(i=0;i<n;i++)
    {
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}

	printf("Negative Number From An Array...\n");
	for(i=0;i<n;i++)
    {
		if(a[i]<0)
        {
			printf("%d, ",a[i]);
		}
	}
}