#include<stdio.h>

int main()
{
    int n1,n2;

    printf("Enter The Value Of N1 : ");
    scanf("%d",&n1);
    printf("Enter The Value Of N2 : ");
    scanf("%d",&n2);


    printf("\n------------Array - A------------\n\n");


    int a[n1][n2];
    
    for(int i=0 ; i<n1 ;i++)
    {
        for(int j=0 ; j<n2 ; j++)
        {
            printf("Enter The Value Of a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }


    printf("\n------------Array - B------------\n\n");


    int b[n1][n2];
    
    for(int i=0 ; i<n1 ;i++)
    {
        for(int j=0 ; j<n2 ; j++)
        {
            printf("Enter The Value Of b[%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);       
        }
    }


    printf("\n------------Array - C------------\n\n");


    int sum=0;

    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            sum = a[i][j] + b[i][j];
            printf("%d  ",sum);
        }
        printf("\n");
    }

}