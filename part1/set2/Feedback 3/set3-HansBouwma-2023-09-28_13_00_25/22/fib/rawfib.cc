#include "fib.ih"

size_t rawfib(size_t value)
{
    if (value <= 2)
        return 1;
    else
        return rawfib(value - 1) + rawfib(value - 2);
};
