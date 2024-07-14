#include<stdio.h>

int main()
{
    int i,n,c=0;

    printf("Enter Any Number : ");
    scanf("%d",&n);

    for(i=1;i<=n;++i)
    {
        if(n%i==0)
        {
            printf(" %d ",i);
            c++;
        }
    }
    (c==2)
        ?printf("\nThis Number Is Prime...!")
        :printf("\nThis Number Is Not Prime...!");
}