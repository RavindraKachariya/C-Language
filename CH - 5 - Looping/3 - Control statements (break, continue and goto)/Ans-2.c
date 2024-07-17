#include<stdio.h>

int main()
{
    int i,n,multi=1;

    printf("Enter any number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        multi *= i;
    }

    printf("Factorial Of This Number : %d ",multi);

}