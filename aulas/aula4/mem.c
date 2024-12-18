#include <stdlib.h>
#include <stdio.h>

double pi = 3.1415;

double area(double r)
{
    return pi * r * r;
}

int main()
{
    double x = 10;
    printf("&x=%p\n", &x);

    double *p = &pi;
    printf("p=%p\n", p);
    printf("*p=%lf\n", *p);

    void *v = malloc(sizeof(double));

    printf("v=%p\n", v);
    printf("*v=%lf\n",*(double *) (v));
}