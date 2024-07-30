#include<stdio.h>

int main()
{
    int r,c,sum=0;

    printf("Enter The Array's Row Size : ");
    scanf("%d",&r);

    printf("Enter The Array's Column Size : ");
    scanf("%d",&c);

    printf("\n");

    int a[r][r];
    
    for(int i=0 ; i<r ;i++)
    {
        for(int j=0 ; j<c ; j++)
        {
            printf("Enter The Value Of a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0 ; i<r ;i++)
    {
        for(int j=0 ; j<c ; j++)
        {
           if(i==0 || j==0 || i==r-1 || j==c-1)
           {
                printf("%d",a[i][j]);
                sum+=a[i][j];
           }
           else
           {
                printf(" ");
           }
        }
        printf("\n");
    }
    
    printf("Sum Of Diagonal : %d ",sum);

}