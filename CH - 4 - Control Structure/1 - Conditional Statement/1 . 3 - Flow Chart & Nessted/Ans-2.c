#include<stdio.h>
#include<conio.h>

main()
{

    int a, b, c, d;
    clrscr();
    
    printf("Enter A :");
    scanf("%d",&a);
    
    printf("Enter B :");
    scanf("%d",&b);
    
    printf("Enter C :");
    scanf("%d",&c);
    
    printf("Enter D :");
    scanf("%d",&d);

    
    if (a == b && b == c && c == d && d == a)
    {
        printf("All are same");
    }
    
    else if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("A is big");
            }
            else
            {
                printf("D is big");
            }
        }
        else
        {
            if (c > d)
            {
                printf("C is big");
            }
            else
            {
                printf("D is big");
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                printf("B is big");
            }
            else
            {
                printf("D is big");
            }
        }
        else
        {
            if (c > d)
            {
                printf("C is big");
            }
            else
            {
                printf("D is big");
            }
        }
    }

    getch();

}