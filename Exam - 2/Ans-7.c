#include<stdio.h>

int main()
{
    int n,i;
    printf("Enter Size Of Array : ");
    scanf("%d",&n);

    int A[n],B[n],C[n];

    printf("\n-----------Array - A-----------\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter Value Of A[%d] : ",i);
        scanf("%d",&A[i]);
    }

    printf("\n-----------Array - B-----------\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter VAlue Of B[%d] : ",i);
        scanf("%d",&B[i]);
    }

    printf("\n-----------Array - C-----------\n");
    for (i = 0; i < n; i++)
    {
        C[i]=A[i]+B[i];
        printf("Total Array A + Array B = c[%d] : %d\n",i,C[i]);
    }
}