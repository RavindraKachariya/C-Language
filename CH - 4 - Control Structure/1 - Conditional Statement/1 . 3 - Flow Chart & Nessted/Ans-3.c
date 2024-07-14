#include<stdio.h>
#include<conio.h>

main()
{
    int a,b,c,d,e;
    clrscr();
    
    printf("Enter A :");
    scanf("%d",&a);
    
    printf("Enter B :");
    scanf("%d",&b);
    
    printf("Enter C :");
    scanf("%d",&c);
    
    printf("Enter D :");
    scanf("%d",&d);
    
    printf("Enter E :");
    scanf("%d",&e);
    
    if(a==b && b==c && c==d && d==e && e==a)
    {
        printf("All are Same");
    }
    
    else if(a<b)
    {
        if(a<c)
        {
            if(a<d)
            {
                if(a<e)
                {
                    printf("A is Small");
                }
                else
                {
                    printf("E is Small");
                }
            }
            else
            {
                if(d<e)
                {
                    printf("D is Small");
                }
                else
                {
                    printf("E is Small");
                }
                
            }
        }
        else
        {
            if(c<d)
            {
                if(c<e)
                {
                    printf("C is Small");
                }
                else
                {
                    printf("E is Small");
                }
            }
            else
            {
                if(d<e)
                {
                    printf("D is Small");
                }
                else
                {
                    printf("E is Small");
                }
                
            }
        }
    }
    else
    {
        if(b<c)
        {
            if(b<d)
            {
                if(b<e)
                {
                    printf("B is Small");
                }
                else
                {
                    printf("E is Small");
                }
            }
            else
            {
                if(b<e)
                {
                    printf("B is Small");
                }
                else
                {
                    printf("E is Small");
                }
            }
        }
        else
        {
            if(c<d)
            {
                if(c<e)
                {
                    printf("C is Small");
                }
                else
                {
                    printf("E is Small");
                }
            }
            else
            {
                if(d<e)
                {
                    printf("D is Small");
                }
                else
                {
                    printf("E is Small");
                }
            }
        }
    }
    getch();
}