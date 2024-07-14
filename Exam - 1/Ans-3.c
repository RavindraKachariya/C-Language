#include<stdio.h>

int main()
{
    int y1;

    printf("Enter A Year : ");
    scanf("%d",&y1);

    if(y1%4==0)
    {
        printf("This Is A Leap Year...!",y1);
    }
    else
    {
        printf("This Is Not A Leap Year...!",y1);
    }

}