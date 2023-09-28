#include "aux.ih"

void boundCall(int argc, char **argv)
{
    auto [ok, nr, value] = combine(argc, argv);    // ML: good use of structured binding
                                                   // declerations. How do they work?
                                                   // see part III.
    printArg(nr, value);
}
