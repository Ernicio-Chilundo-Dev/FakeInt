#ifndef INT_H
#define INT_H

typedef struct {
    int value;
} Int;

// Funcoes basicas
int int_create(int n);
void int_set(Int *i, int v);
int int_get(const Int *i);
Int int_add(const Int *a, const Int *b);
Int int_sub(const Int *a, const Int *b);
Int int_mul(const Int *a, const Int *b);
Int int_div(const Int *a, const Int *b);

#endif