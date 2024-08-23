#include<stdio.h>

int main()
{
    int r,c,l=0;

    printf("Enter R : ");
    scanf("%d",&r);
    printf("Enter C : ");
    scanf("%d",&c);

    int a[r][c];

    for(int i=0 ; i<r ; i++)
    {
        for(int j=0 ; j<c ; j++)
        {
            printf("Enter a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0 ; i<r ; i++)
    {
        for(int j=0 ; j<c ; j++)
        {
            if(a[i][j]>l)
            {
                l=a[i][j];
            }
        }
    }
    printf("Maximum Number Is : %d",l);
}