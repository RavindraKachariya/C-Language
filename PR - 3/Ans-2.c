#include<stdio.h>

int main()
{
    int i=0,n;

    printf("Enter Any Number : ");
    scanf("%d",&n);
    
    do
    {
        n/= 10;
        ++i;
    }while(n != 0);

    printf("Number Of Digits : %d",i);

}