#include <iostream>

int main(int const argc, char const *argv[])
{
    using namespace std;
    ++argv;                      // remove program name
    size_t nrArg = argc - 1;            // number of arguments

    // For nrArg = 3
    // loop starts with Switch = 000
    // increments with 1
    // and stops when 1000 is reached
    // each bit represent whether this
    // bits indexs argument is shown or not.
    // With this all combinations
    // are reached
    // Switch: binary code that represents what arguments are shown
    //         and the nth try
    // nbit: the nth bit in Switch (starts at zero)
    // 1 << nrArg is number of options
    for(size_t Switch = 0; Switch != (1 << nrArg); ++Switch)
    {
        cout << Switch + 1 << " : ";   // displays nth try
        for(nbit = 0; nbit != nrArg; ++nbit)
        {
            
            // move nbit to the end
            // and turn all other bits to zero
            if ( (Switch >> nbit) & 1 == 1)
            {
                cout << arg[nbit] << " " ; 
            }
        }
        cout << '\n';
    }

}