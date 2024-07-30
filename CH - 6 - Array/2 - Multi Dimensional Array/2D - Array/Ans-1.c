#include<stdio.h>

int main()
{
    int n1,n2;

    printf("Enter The Value Of N1 : ");
    scanf("%d",&n1);
    printf("Enter The Value Of N2 : ");
    scanf("%d",&n2);

    int a[n1][n2];
    
    for(int i=0 ; i<n1 ;i++)
    {
        for(int j=0 ; j<n2 ; j++)
        {
            printf("Enter The Value Of a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}