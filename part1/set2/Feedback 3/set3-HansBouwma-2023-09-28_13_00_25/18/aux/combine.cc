#include "aux.ih"

// ML: I personally often include a comment on top
// (or below if the comment is very long) describing
// generally what the function does.
// And include smaller semantic comments in the function
// where needed.
ReturnValues combine(int argc, char **argv)
{
    ReturnValues returnValues;

    if (argc == 1)                 
    {
        returnValues.ok = false;
    }
    else
    {
        returnValues.ok = true;

        size_t argNr = stoi(argv[1]); 
        returnValues.nr = argNr;
        
        // arrays start counting at zero:
        returnValues.value = argv[argNr - 1];  
    }
    return returnValues;
}
