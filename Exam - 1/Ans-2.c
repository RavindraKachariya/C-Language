#include<stdio.h>

int main()
{
    int a;

    printf("1-MON\n");
    printf("2-TUE\n");
    printf("3-WED\n");
    printf("4-THU\n");
    printf("5-FRI\n");
    printf("6-SAT\n");
    printf("7-SUN\n");

    printf("Enter 1-7 : ");
    scanf("%d",&a);

    switch (a)
    {
    case 1:
        printf("This Day Is : Mon\n");
        break;

    case 2:
        printf("This Day Is : TUE\n");
        break;

    case 3:
        printf("This Day Is : WED\n");
        break;

    case 4:
        printf("This Day Is : THU\n");
        break;

    case 5:
        printf("This Day Is : FRI\n");
        break;

    case 6:
        printf("This Day Is : SAT\n");
        break;

    case 7:
        printf("This Day Is : SUN\n");
        break;
    
    default:
        printf("Invalid INput....!!\n");
    }
}