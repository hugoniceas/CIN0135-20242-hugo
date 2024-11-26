#include <stdlib.h>
#include <stdio.h>

void a(int x)
{
    int *p = (int *)malloc(sizeof(int));
    *p = x;
    printf("p = %p\n",p );
    printf("*p = %d\n", *p);
}


int main ()
{
    a(12345);
}