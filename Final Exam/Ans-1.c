#include <stdio.h>

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("After Swapping A = %d And B = %d", a, b);
}

int main()
{
    int a, b;
    printf("Enter A : ");
    scanf("%d", &a);
    
    printf("Enter B : ");
    scanf("%d", &b);

    swap(a, b);

    return 0;
}
