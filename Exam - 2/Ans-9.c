#include <stdio.h>

int main()
{
    float percentage;
    printf("Enter Percentage: ");
    scanf("%f", &percentage);

    if (percentage >= 90)
    {
        printf("Grade: A");
    }
    else if (percentage >= 80)
    {
        printf("Grade: B");
    }
    else if (percentage >= 70)
    {
        printf("Grade: C");
    }
    else if (percentage >= 60)
    {
        printf("Grade: D");
    }
    else if (percentage >= 50)
    {
        printf("Grade: E");
    }
    else
    {
        printf("Grade: Failed");
    }

    return 0;
}
