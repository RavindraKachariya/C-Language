#include "function.c"

int main() {
    int n = getInt();
    int a[n];

    getArrayInput(a, n);
    int c;
    int ans = getArraySum(a, n);
    int min, max;

    do {
        printf("\n========== Select an option ==========\n");
        printf("1 = Print Array\n");
        printf("2 = Sum Of Array\n");
        printf("3 = Average Of Array\n");
        printf("4 = Minimum Of Array\n");
        printf("5 = Maximum Of Array\n");
        printf("6 = Sort Array in Descending Order\n");
        printf("7 = Sort Array in Ascending Order\n");
        printf("0 = Exit\n");
        printf("=======================================\n");

        printf("Enter Your Choice: ");
        scanf("%d", &c);

        switch(c) 
        {
            case 1:
                printf("\nArray Elements : \n");
                PrintArray(a, n);
                printf("=======================================\n");
                break;

            case 2:
                printf("\nSum Of Array : %d \n", ans);
                printf("=======================================\n");
                break; 

            case 3:
                printf("\nAverage Of Array : %.2f \n", (float)ans / n);
                printf("=======================================\n");
                break;

            case 4:
                min = getArrayMin(a, n);
                printf("\nMinimum Of Array : %d \n", min);
                printf("=======================================\n");
                break;

            case 5:
                max = getArrayMax(a, n);
                printf("\nMaximum Of Array : %d \n", max);
                printf("=======================================\n");
                break;

            case 6:
                sortArrayDescending(a, n);
                printf("\nArray Sorted in Descending Order :\n");
                PrintArray(a, n);
                printf("=======================================\n");
                break;

            case 7:
                sortArrayAscending(a, n);
                printf("\nArray Sorted in Ascending Order :\n");
                PrintArray(a, n);
                printf("=======================================\n");
                break;

            case 0:
                printf("\nExiting...\n");
                printf("=======================================\n");
                break;

            default:
                printf("\nInvalid choice. Please try again.\n");
                printf("=======================================\n");
                break;
        }

    } while (c != 0);

}
