#include "aux.ih"

double sum(int argc, char **argv, double acumulator)
{
    // skip program name
    // start with zero
    // add double values of arguments
    // return acumulator
    for(size_t index = 1;
        index != static_cast<size_t>(argc);
        ++index
    )
    {
        char const *argPntr = argv[index];     // pointer to argument
        double const doubleArg = stof(argPntr);  // double argument
        acumulator += doubleArg;
    }    

    return acumulator;
}