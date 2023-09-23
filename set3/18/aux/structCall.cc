#include "aux.ih"

bool structCall(int argc, char **argv)
{
    ReturnValues returnvalues = combine(argc, argv);   // does this work?

    if(returnValues.ok)
    {
        print(returnValues.nr, returnVales.value);  // can this be shorter?
        return true;
    }
    else
    {
        cout << "requested argument doesn't exist \n";
        return false;
    }

}