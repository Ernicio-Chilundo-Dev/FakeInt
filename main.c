#include <stdio.h>
#include "int.h"

int main() {
    Int a = int_create(2147483640);
    Int b = int_create(100);

    Int soma = int_add(&a, &b);
    printf("Soma: %d", int_get(&soma));
    if (int_has_overflow(&soma))
        printf(" (Overflow detectado!)");
    printf("\n");

    Int mult = int_mul(&a, &b);
    printf("Multiplicação: %d", int_get(&mult));
    if (int_has_overflow(&mult))
        printf(" (Overflow detectado!)");
    printf("\n");

    return 0;
}
