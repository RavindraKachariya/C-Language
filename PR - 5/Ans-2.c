#include<stdio.h>

int main()
{
	int r,c;
    printf("Enter R : ");
    scanf("%d",&r);
    printf("Enter C : ");
    scanf("%d",&c);

    int a[r][c];
    int max=0;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
                printf("Enter a[%d][%d] : ",i,j);
                scanf("%d",&a[i][j]);
                if(a[i][j] > max)
                {
                    max = a[i][j];
                }
        }
    }
    printf("The Largest Element Is : %d",max);
	
}