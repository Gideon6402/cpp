#include "functions.ih"

float sum(int argc, char **argv)
{
    float value = 0;

    // skip program name
    // start with zero
    // add float values of arguments
    // return value
    for(size_t index = 1;
        index != static_cast<size_t>(argc);
        ++index
    )
    {
        char const *argPntr = argv[index];     // pointer to argument
        float const floatArg = stof(argPntr);  // float argument
        value += floatArg;
    }    

    return value;
}