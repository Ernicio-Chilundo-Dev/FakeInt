#include "int.h"
#include <stdio.h>
#include <limits.h> // INT_MAX e INT_MIN

Int int_create(int v) {
    return (Int){v, false};
}

void int_set(Int *i, int v) {
    i->value = v;
    i->overflow = false;
}

int int_get(const Int *i) {
    return i->value;
}

bool int_has_overflow(const Int *i) {
    return i->overflow;
}

Int int_add(const Int *a, const Int *b) {
    long long res = (long long)a->value + (long long)b->value;
    Int result = int_create((int)res);
    if (res > INT_MAX || res < INT_MIN) {
        result.overflow = true;
    }
    return result;
}

Int int_sub(const Int *a, const Int *b) {
    long long res = (long long)a->value - (long long)b->value;
    Int result = int_create((int)res);
    if (res > INT_MAX || res < INT_MIN) {
        result.overflow = true;
    }
    return result;
}

Int int_mul(const Int *a, const Int *b) {
    long long res = (long long)a->value * (long long)b->value;
    Int result = int_create((int)res);
    if (res > INT_MAX || res < INT_MIN) {
        result.overflow = true;
    }
    return result;
}

Int int_div(const Int *a, const Int *b) {
    if (b->value == 0) {
        printf("Erro: divisão por zero!\n");
        return int_create(0);
    }
    // Caso especial: INT_MIN / -1 gera overflow
    if (a->value == INT_MIN && b->value == -1) {
        Int r = int_create(0);
        r.overflow = true;
        return r;
    }
    return int_create(a->value / b->value);
}
