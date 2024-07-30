#include<stdio.h>

int main()
{
    int r,sum=0;

    printf("Enter The Array's Row & Column Size : ");
    scanf("%d",&r);
    printf("\n");

    int a[r][r];
    
    for(int i=0 ; i<r ;i++)
    {
        for(int j=0 ; j<r ; j++)
        {
            printf("Enter The Value Of a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0 ; i<r ;i++)
    {
        for(int j=0 ; j<r ; j++)
        {
           if(i==j)
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