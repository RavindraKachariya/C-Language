#include<stdio.h>

int main()
{
    int i,j,s,space=0;

    for(i=1;i<=5;i++)
    {
        for(s=1;s<=space;s++)
        {
            printf("  ");
        }
        space++;
        for(j=5;j>=i;j--)
        {
            (j%2==0)
                ?printf("0 ")
                :printf("1 ");
        }
        printf("\n");
    }
}