#include <stdio.h>
#include <stdlib.h>

void fill_matrix(M,a,b)
{
    int n = rand() % 100;
    int negative = rand() % 2;
    if (negative == 1)
    {
        n *= -1;
    }

    for 
}

void main()
{
    int m, n, p = 0;
    while (2 <= m <= 10 && 2<=n<=10 && 2<=p<=10)
    {
        printf("Enter the values of m, n and p separated by space: ");
        scanf("%d %d %d",&m, &n ,&p);
    }

    int **A;
    A = calloc(m, sizeof(int*));
    for (int i = 0; i < m; i++)
    {
        A[i] = calloc(n,sizeof(int));
    }

    int **B;
    B = calloc(n, sizeof(int*));
    for (int i = 0; i < n; i++)
    {
        B[i] = calloc (p, sizeof(int));
    }

    int **C;
    C = calloc(m, sizeof(int*));
    for (int i = 0; i < m; i++)
    {
        C[i] == calloc(p,sizeof(int));
    }


}