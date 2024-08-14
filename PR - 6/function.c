int sum(int a, int b)
{
    return a+b;
}

int sub(int a, int b)
{
    return a-b;
}

int mult(int a, int b)
{
    return a*b;
}

int div(int a, int b)
{
    return a/b;
}

int modulus(int a, int b)
{
    return a%b;
}

void calc(a, b)
{
    int n,ans;
    tmp:
    printf("\n1. For +\n");
    printf("2. For -\n");
    printf("3. For *\n");
    printf("4. For /\n");
    printf("5. For %%\n");
    printf("0. For Exit\n");
    printf("\nEnter Your Choice : ");
    scanf("%d",&n);

    switch (n)
    {
        case 1:
            ans=sum(a,b);
            printf("%d",ans);
            goto tmp;
    
        case 2:
            ans=sub(a,b);
            printf("%d",ans);
            goto tmp;

        case 3:
            ans=mult(a,b);
            printf("%d",ans);
            goto tmp;

        case 4:
            ans=div(a,b);
            printf("%d",ans);
            goto tmp;

        case 5:
            ans=modulus(a,b);
            printf("%.2f",(float)ans);
            goto tmp;
        
        case 0:
            break;

        default:
            printf("\n\tInvalid Input\n");
            break;
    }
}