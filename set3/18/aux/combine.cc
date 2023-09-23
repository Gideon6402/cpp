#include "aux.ih"

ReturnValues combine(int argc, char **argv)
{
    ReturnValues returnValues;

    if(argc==1)                    // can this be done more beatiful?
    {
        returnValues.ok = false;
        returnValues.value = " ";
    }
    else
    {
        returnValues.ok = true;

        size_t argNr = stoi( argv[1] );
        returnValues.nr = argNr;
        returnValues.value = argv[argNr];  
    }
    return returnValues;
}