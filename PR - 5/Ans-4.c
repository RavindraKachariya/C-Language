#include<stdio.h>

int main()
{
    int r,c;
	
	printf("Enter R : ");
	scanf("%d",&r);
	printf("Enter C : ");
	scanf("%d",&c);

    int i,j,a[r][c];

	for(i=0;i<r;i++)
    {
		for(j=0;j<c;j++)
        {
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}

    int r1,r_sum=0;

    printf("Enter Row Number : ");
    scanf("%d",&r1);
    printf("Elements of row %d : ",r1);
    for(int i=0;i<r;i++)
    {
        printf("%d, ",a[r1][i]);
        r_sum += a[r1][i];
    }
    printf("\nThe Sum Of a Row %d : %d",r1,r_sum);


    int c1,c_sum=0;

   printf("\nEnter Column Number\t: ");
	scanf("%d",&c1);
	printf("Elements of row %d\t: ",c1);
	
		for(i=0;i<r;i++)
        {
			printf("%d, ",a[i][c1]);
			c_sum+=a[i][c1];
		}
		
	printf("\nThe sum of a column %d\t: %d",c1,c_sum);

}