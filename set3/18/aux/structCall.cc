#include "aux.ih"

bool structCall(int argc, char **argv)
{
    ReturnValues returnValues = combine(argc, argv);   // does this work?

    if(returnValues.ok)
    {
        print(returnValues.nr, returnValues.value);  // can this be shorter?
        return true;
    }
    else
    {
        cout << "requested argument doesn't exist \n";
        return false;
    }

}