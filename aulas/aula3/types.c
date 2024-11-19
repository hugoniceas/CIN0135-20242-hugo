#include <stdbool.h>
#include <stdio.h>

int main()
{
    bool b = true;
    printf("bool b = %d size = %ld\n",b, sizeof(b));

    char c = 'c';
    printf("char c = %c\n", c);

    int maior = 0b01111111111111111111111111111111;
    maior++;
    printf("int maior  = %d\n", maior);

    long l = 1234;
    printf("long l = %l\n", l);

    float f = 3.1415;
    printf("float f = %f\n", f);
}