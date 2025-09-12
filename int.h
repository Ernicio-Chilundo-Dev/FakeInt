#ifndef INT_H
#define INT_H

#include <stdbool.h>

typedef struct {
    int value;
    bool overflow;
} Int;

// Criação e acesso
Int int_create(int v);
void int_set(Int *i, int v);
int int_get(const Int *i);
bool int_has_overflow(const Int *i);

// Operações
Int int_add(const Int *a, const Int *b);
Int int_sub(const Int *a, const Int *b);
Int int_mul(const Int *a, const Int *b);
Int int_div(const Int *a, const Int *b);

#endif
