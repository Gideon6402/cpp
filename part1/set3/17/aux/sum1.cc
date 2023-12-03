#include "aux.ih"

int sum(int argc, char **argv, int acumulator)
{
    // add all the values of the arguments to the acumulator 
    // return the acumulator               
    for(size_t index = 1;
        index != static_cast<size_t>(argc);
        ++index
    )
    {
        char *argPntr = argv[index];   // pointer to an argument
        int argVal = stoi(argPntr);    // int acumulator of argument
        acumulator += argVal;             
    }

    return acumulator;
}