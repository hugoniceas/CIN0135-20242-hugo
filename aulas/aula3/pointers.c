#include <stdio.h>

int main()
{
    int i = 1024;

    printf("valor de i = %d\n", i);
    printf("tamanho de i = %ld\n", sizeof(i));
    printf("endereço de i = %ld\n", &i);

    int *p;
    p = &i;
    int j = *p;

    printf("valor de p = %ld\n", p);
    printf("tamanho de p = %ld\n", sizeof(p));
    printf("endereço de p = %ld\n", &p);


    printf("valor de j = %d\n", j);
    printf("tamanho de j = %ld\n", sizeof(j));
    printf("endereço de j = %ld\n", &j);

}