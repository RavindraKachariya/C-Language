#include "function.c"

int main()
{
    int n = getInt();
    int a[n];

    for(int i=0 ; i<n ; i++)
    {
        printf("Enter a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    int ans = getArraySum(a,n);

    printf("Sum Of Array : %d ",ans);

    printf("\nThe Average of Array : %.2f ",(float)ans/n);

}