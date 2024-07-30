
#include<stdio.h>
#define p printf
#define s scanf

int main()
{
    int n1,n2;
    p("Enter First Year : ");
    s("%d",&n1);
    p("Enter Second Year : ");
    s("%d",&n2);

    int n=0,a[n2-n1];

   
        for (int j = n1; j <= n2; j++)
        {
            if (j%4==0)
            {
                a[n] = j;
                n++;
            } 
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d\n",a[i]);
        }
}
