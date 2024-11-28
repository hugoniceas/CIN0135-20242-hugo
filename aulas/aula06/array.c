#include <stdio.h>
#include <stdlib.h>

int fixed_size()
{
    int arr[5];
    // int arr[5] = {1,3,5,7,9};

    for (int i = 0; i < 5 ; i++)
    {
        arr[i] = 2* i + 1;
    }

    for (int i = 0; i <5 ; i++)
    {
        if (i < 4)
        {
            printf("%d ", arr[i]);
        } 
        else
        {
            printf("%d\n", arr[i]);
        }
    }
}

int variable_size()
{
    int *arr;

    int n;

    printf("Enter array size ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    //calloc coloca tudo 0 ao inves de memoria vazia

    
     for (int i = 0; i < n ; i++)
    {
        arr[i] = 2* i + 1;
    }

    for (int i = 0; i <n  ; i++)
    {
        if (i < (n-1))
        {
            printf("%d ", arr[i]);
        } 
        else
        {
            printf("%d\n", arr[i]);
        }
    }

    free(arr);

}

void fixed_size_matrix()
{
    int arr[5][4];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j< 4; j++)
        {
            arr[i][j] = i + j;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j< 4; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int **arr;
    int nrows, ncols;

    printf("Enter number of rows:");
    scanf("%d", &nrows);
    arr = calloc(nrows, sizeof(int*));


    printf("Enter number of columns:");
    scanf("%d",&ncols);
    for (int i = 0; i<nrows; i++)
    {
        arr[i] = calloc(ncols, sizeof(int));
    }

    for (int i = 0; i < nrows; i++)
    {
        for (int j = 0; j< ncols; j++)
        {
            arr[i][j] = i + j;
        }
    }

    for (int i = 0; i < nrows; i++)
    {
        for (int j = 0; j< ncols; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < nrows; i++)
    {
        free(arr[i]);
    }

    free(arr);
}