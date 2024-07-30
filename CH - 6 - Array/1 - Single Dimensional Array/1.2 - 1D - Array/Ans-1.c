#include<stdio.h>
#define p printf
#define s scanf

int main()
{
    printf("-----------Array - A-----------\n");
    int as;
    p("Enter Array A Size : ");
    s("%d",&as);
    printf("-------------------------------\n");
    printf("Enter Array A's Elements \n");
    int a[as];
    for (int i = 0; i < as; i++)
    {
        p("a[%d] : ",i);
        s("%d",&a[i]);
    }

    printf("-----------Array - B-----------\n");

    int bs;
    p("Enter Array B Size : ");
    s("%d",&bs);
    printf("-------------------------------\n");
    printf("Enter Array B's Elements \n");
    int b[bs];
    for (int i = 0; i < bs; i++)
    {
        p("b[%d] : ",i);
        s("%d",&b[i]);
    }

    int c[as+bs]; 
    for (int i = 0; i < as; i++)
    {
        c[i]=a[i];
    }
 
    for (int i = 0; i < bs; i++)
    {
        c[i+as]=b[i];
    }  
 
    printf("---------Merge - A & B ---------\n");   
    
    for (int i = 0; i < as+bs; i++)
    {
        p("%d ",c[i]);
    }
}