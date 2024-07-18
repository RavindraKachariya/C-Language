#include<stdio.h>

int main()
{
    int i,j,s;

    for(i=1;i<=5;i++)
    {
        for(s=5;s>=i;s--)
        {
            printf("  ");
        }
        for(j=1;j<=(i*2)-1;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}