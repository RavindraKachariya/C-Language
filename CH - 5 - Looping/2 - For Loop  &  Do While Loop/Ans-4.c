#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter Any Number : ");
    scanf("%d",&b);

    for (a = 1; a <= 10; a++)
    {
        printf("%d * %d = %d \n", b, a, b * a);
    }
}