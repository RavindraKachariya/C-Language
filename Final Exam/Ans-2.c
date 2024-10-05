#include <stdio.h>

int main()
{
    float c, f;
    printf("Enter Temperature In Celsius: ");
    scanf("%f", &c);

    f = (c * 9 / 5) + 32;

    printf("Temperature In Fahrenheit : %.2f", f);

    return 0;
}
