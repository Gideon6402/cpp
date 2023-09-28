#include "aux.ih"

// ML: string parameter copies the entire string argument. Is there a better alternative?
void printArg(size_t nr, string value)
{
    cout << "Argument number " 
         << nr 
         << " is " 
         << value 
         << '\n';
}
