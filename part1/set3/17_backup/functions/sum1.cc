#include "functions.ih"

int sum(int argc, char **argv)
{
    // start with value = 0,
    // add all the values of the argument, 
    // return the value

    int value = 0;                
    for(size_t index = 1;
        index != static_cast<size_t>(argc);
        ++index
    )
    {
        char *argPntr = argv[index];   // pointer to argument
        int argVal = stoi(argPntr);    // int value of argument
        value += argVal;             
    }

    return value;
}