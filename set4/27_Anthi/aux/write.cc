#include "aux.ih"

// iterate over all person and display output
void write(Person personArray[])
{
    for (size_t idx = 0; idx != Enum::N_PERSONS; ++idx)
    {
        personArray[idx].insert(cout);
    }
}