#include <stdbool.h>
#include "is_prime.h"

bool is_prime (int a)
{
    int i = 2;
    while (i*i <= a)
    {
        if (a%i == 0)
        {
            return false;
        }
        i++;
    }
    return true;
}


