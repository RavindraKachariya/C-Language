#include<stdio.h>

main()
{
    int f,s;

    printf("Enter the first number : ");
    scanf("%d",&f);
    printf("Enter the second number : ");
    scanf("%d",&s);

    while (f<=s)
    {
        if(f%4==0)
        {
            printf("%d ",f);
        }
        f++;
    }
    
}