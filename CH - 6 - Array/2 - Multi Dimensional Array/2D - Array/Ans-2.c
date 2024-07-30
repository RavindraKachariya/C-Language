#include<stdio.h>

int main()
{
    int r,c,n,sum=0;

    printf("Enter The Array's Row Size : ");
    scanf("%d",&r);

    printf("Enter The Array's Column Size : ");
    scanf("%d",&c);

    int a[r][c];
    
    for(int i=0 ; i<r ;i++)
    {
        for(int j=0 ; j<c ; j++)
        {
            printf("Enter The Value Of a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);

            sum+=a[i][j];
        }
    }

    n=r*c;

    printf("Average of an Array : %.2f",(float)sum/n);
}