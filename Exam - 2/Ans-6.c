#include<stdio.h>

int main()
{
    int l,h;

    printf("Enter L : ");
    scanf("%d",&l);
    printf("Enter H : ");
    scanf("%d",&h);

    printf("\nTriangle Area : %.2f",(float)(l*h)/2);
}