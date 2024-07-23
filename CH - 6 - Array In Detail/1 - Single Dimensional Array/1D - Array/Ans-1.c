
#include<stdio.h>

int main()
{
    int n,i;
    printf("Enter Size Of Array : ");
    scanf("%d",&n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("The Value OF a[%d] : ",i);
        scanf("%d",&a[i]);
    }

    printf("Lenth Of An Array : %d",n);
    
}
