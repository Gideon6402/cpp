#include "aux.ih"

void boundCall(int argc, char **argv)
{
    auto [ok, nr, value] = combine(argc, argv);
    print(nr, value);
}