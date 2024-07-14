#include<stdio.h>

int main()
{
    int n,ld,fd,r=0;

    printf("Enter Any Number : ");
    scanf("%d",&n);

    fd = n;

    while( n != 0)
    {
        ld = n%10;
        r = r*10+ld;
        n = n/10;
    }

    if( fd == r )
    {
        printf("This Number Is Palindrome...!",fd);
    }
    else
    {
        printf("This Number Is Not Palindrome...!",fd);
    }

}   