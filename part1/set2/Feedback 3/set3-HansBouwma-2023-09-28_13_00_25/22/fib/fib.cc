#include "fib.ih"
#include <iostream>    // ML: Put space after include statements.
enum {    // ML: Bracket style
    MAXFIB = 90
};

namespace {
    size_t fibval[MAXFIB];
}

// ML: NSC
size_t fib(size_t value)
{   
    size_t result = (value <= 2)        ? 1                               :
        (fibvalretrieve(value, fibval)) ? (fibvalretrieve(value, fibval)) :
                                          fibvalcompute(value, fibval);

    return result;
};
