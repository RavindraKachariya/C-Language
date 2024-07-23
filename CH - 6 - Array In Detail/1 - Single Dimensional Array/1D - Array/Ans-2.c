
#include<stdio.h>

int main()
{
    int n,i,sum=0;
    printf("Enter Size Of Array : ");
    scanf("%d",&n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("The Value Of a[%d] : ",i);
        scanf("%d",&a[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum+=a[i];
    }

    printf("Average of array : %.2f",(float)sum/n);
    
}
