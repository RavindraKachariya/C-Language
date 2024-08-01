#include<stdio.h>

int main()
{
	int r,c;
	
	printf("Enter R : ");
	scanf("%d",&r);
	printf("Enter C : ");
	scanf("%d",&c);
	
	int i,j,a[r][c],b[c][r];

	for(i=0;i<r;i++)
    {
		for(j=0;j<c;j++)
        {
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<r;i++)
    {
		for(j=0;j<c;j++)
        {
     		b[j][i] = a[i][j];
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}

}