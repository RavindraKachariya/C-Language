#include<stdio.h>

int main()
{
    int i=2,n,sum=0;

    printf("Enter N :");
    scanf("%d",&n);

    do
    {
        if(i%2==0)
        {
            sum += i;
            i+=2;
        }
    } while (i<=n);

    printf("Sum Of All Even Number 1 To %d : %d \n",n,sum);

}