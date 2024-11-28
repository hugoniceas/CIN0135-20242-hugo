#include <stdbool.h>
#include <stdio.h>

typedef struct{
    int number;
    double balance;
    bool special;
    } Account;

// typedef int cremosinho;

void printAccount(Account acc)
{
    printf("number = %d\n", acc.number);
    printf("balance = %lf\n", acc.balance);
    printf("special = %c\n", acc.special?'Y':'N');
}

void main()
{
    Account acc;

    acc.number = 123;
    acc.balance = 1412.00;
    acc.special = true;

    printAccount(acc);
    printf("sizeof int %ld\n", sizeof(acc.number));
    printf("sizeof double %ld\n", sizeof(acc.balance));
    printf("sizeof bool %ld\n", sizeof(acc.special));
    printf("sizeof Account %ld\n", sizeof(acc)); //c struct padding
}