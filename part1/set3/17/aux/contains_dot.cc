#include "aux.ih"

bool contains_dot(int argc, char **argv)
{
    bool dotBool = false;
    for(size_t index = argc; --argc;)   // don't include zero -> pre
    {
        string arg = argv[index];
        if( arg.contains(".") )
            dotBool = true;
    }
    return dotBool;
}