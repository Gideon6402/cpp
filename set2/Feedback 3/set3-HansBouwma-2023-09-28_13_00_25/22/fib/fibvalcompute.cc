#include "fib.ih"

// ML: NSC
size_t fibvalcompute(size_t value, size_t fibval[])
{
    size_t result = fib(value - 1) + fib(value - 2);
    fibval[value] = result;
    return result;
}
