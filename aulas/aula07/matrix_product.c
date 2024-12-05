#include <stdio.h>
#include <stdlib.h>

int randrange()
{
    int n = rand() % 100;
    int negative = rand() % 2;
    if (negative == 1)
    {
        n *= -1;
    }

    return n;
}

void fill_matrix(int **M, int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            M[i][j] = randrange();
        }
    }
}

void print_matrix(int **M, int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
}

void multiply_matrix(int **A, int **B, int **C, int m, int n, int p)
{
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < n; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void fill_empty_matrix(int **M, int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            M[i][j] = 0;
        }
    }
}

/*
C[0][0] += A[0][0]*B[0][0] i = 0 j = 0
C[0][0] += A[0][1]*B[1][0] i = 0 j = 0
C[0][1] += A[0][0]*B[0][1] i = 0 j = 1
C[0][1] += A[0][1]*B[1][1] i = 0 j = 1
C[1][0] += A[1][0]*B[0][0] i = 1 j = 0
C[1][0] += A[1][1]*B[1][0] i = 1 j = 0
C[1][1] += A[1][0]*B[0][1] i = 1 j = 1
c[1][1] += A[1][1]*B[1][1] i = 1 j = 1


*/

void main()
{
    int m, n, p = 0;
    while ((m < 2 || m > 10) && (n < 2 || n > 10) && (p < 2 || p > 10))
    {
        printf("Enter the values of m, n and p separated by space: ");
        scanf("%d %d %d", &m, &n, &p);
    }

    int **A;
    A = calloc(m, sizeof(int *));
    for (int i = 0; i < m; i++)
    {
        A[i] = calloc(n, sizeof(int));
    }

    int **B;
    B = calloc(n, sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        B[i] = calloc(p, sizeof(int));
    }

    int **C;
    C = calloc(m, sizeof(int *));
    for (int i = 0; i < m; i++)
    {
        C[i] = calloc(p, sizeof(int));
    }

    fill_matrix(A, m, n);
    fill_matrix(B, n, p);
    print_matrix(A, m, n);
    printf("\n");
    print_matrix(B, n, p);
    printf("\n");

    multiply_matrix(A, B, C, m, n, p);

    print_matrix(C, m, p);
    printf("\n");
}
