#include<stdio.h>

int main()
{

    int i,fd,ld,sum;

    printf("Enter Any Number : ");
    scanf("%d",&i);

    ld=i%10; 

    while(i>=10)
    {
        i/=10;
    }
    
    fd=i;

    sum = ld + fd;

    printf("The Sum Of First And Last Digit : %d",sum);

}