#include<stdio.h>

// N Value Input
int getInt()
{
    int n;
    printf("Enter Any Number : ");
    scanf("%d",&n);
    return n;
}

// Array Input
int getArrayInput(int a[] , int n)
{
    for(int i=0 ; i<n ; i++)
    {
        printf("Enter a[%d] : ",i);
        scanf("%d",&a[i]);
    }
}

// Print Array
int PrintArray(int a[] , int n)
{
    for(int i=0 ; i<n ; i++)
    {
        printf("The Value OF Array a[%d] : %d\n",i,a[i]);
    }
}

// Sum OF Array
int getArraySum(int a[] ,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    return sum;
}

// Max Array
int getArrayMax(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++) 
    {
        if (a[i] > max) 
        {
            max = a[i];
        }
    }
    return max;
}

// Min Array
int getArrayMin(int a[], int n) 
{
    int min = a[0];
    for (int i = 1; i < n; i++) 
    {
        if (a[i] < min) 
        {
            min = a[i];
        }
    }
    return min;
}

// Ascending Array
void sortArrayAscending(int a[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (a[j] > a[j + 1]) 
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

// Descending Array
void sortArrayDescending(int a[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (a[j] < a[j + 1]) 
            {
                // Swap arr[j] and arr[j + 1]
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
