#include <stdio.h>
#include <stdbool.h>
#include "is_prime.h"

void main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("%d = ",n);

    int d = 2;
    while (d <= n)
    {
        if (n%d == 0 && is_prime(d))
        {
            while (n%d == 0)
            {
                if (d != n)
            {
                printf("%d * ",d);
            }
            else
            {
                printf("%d\n", d);
            }
            
            n = n/d;
            }
            
        }
        d++;
    }
}
