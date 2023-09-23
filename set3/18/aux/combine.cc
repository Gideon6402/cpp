#include "aux.ih"

ReturnValues combine(int argc, char argv)
{
    ReturnValues returnValues;

    if(argc==1)                    // can this be done more beatiful?
    {
        returnValues.ok = false;
        returnValuess.value = " ";
    }
    else
    {
        returnValues.ok = true;
        returnValues.nr = argv[1];
        returnValues.value = argv[ argv[1] ];  //inefficient (twice called argv[1]);
    }
    return returnValues;
}