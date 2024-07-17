#include<stdio.h>

int main()
{
    int i,n;
    
    int t1=0 , t2=1;

    int total = t1 + t2;

    printf("Enter N :");
    scanf("%d",&n);

    printf("Fibanaccis Series : %d %d",t1,t2);

    for(i=3 ; i<=n ; ++i)
    {
        printf(" %d ",total);
        t1 = t2;
        t2 = total;
        total = t1 + t2;
    }

}