#include "functions.ih"

int sum(int argc, char **argv)
{
    int sum = 0;                           // is this a local variable?
    for(int  i = 0; i != argc; ++i)
    {
        using namespace std;
        string chvalue = *argv[i];         // do I need to declare chvalue as being an adress?
        int ivalue = stoi(&chvalue);
        sum += ivalue;
    }                                      // is this correct?
    return sum;
}



// why doesn't make treat all warning as errors?
// What am I not understanding here?
