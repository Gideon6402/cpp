#include "aux.ih"

bool structCall(int argc, char **argv)
{
    ReturnValues returnValues = combine(argc, argv);

    if (returnValues.ok)
    {
        printArg(returnValues.nr, returnValues.value); 
        return true;
    }
    else
    {
        cout << "requested argument doesn't exist" << '\n';
        return false;
    }

}
