#include "int.h"
#include <stdio.h>
#include <limits.h>

Int int_create(int v)
{
    return (Int){v, false};
}