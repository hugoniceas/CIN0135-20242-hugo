#include <stdio.h>
#include <stdbool.h>
#include "is_prime.h"

int main()
{
    int n ;
    printf("Digite o valor de um número natural\n");
    scanf("%d", &n);

    bool result = is_prime(n);

    if (result)
    {
        printf("N is prime\n");
    }
    else
    {
        printf("N is not prime\n");
    }

    return 0;
}