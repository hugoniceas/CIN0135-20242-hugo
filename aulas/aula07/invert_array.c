#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void main()
{
    int n;

    printf("Enter the size of the array ");
    scanf("%d", &n);

    int arr[n];
    int partition = 1000/n;
    int currentNumber = 0;

    for (int i = 0; i < n; i++)
    {
        int randomIncrement = rand() % partition;
        currentNumber += randomIncrement;
        arr[i] = currentNumber;
    }

    for (int i = 0; i< n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    int arr_temp[n];
    for (int i = n-1; i >= 0; i--)
    {
        arr_temp[i] = arr[n-1-i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr_temp[i];
    }

    for (int i = 0; i < n; i++)
    {
        
        printf("%d ",arr[i]);
    }

    printf("\n");
}