// ML: ?  
// ML no summary -> ?
// Create a pogram producing a multiplication table

#include <iostream>                    

using namespace std;                   

int main(int argc, char **argv)      
{
    const size_t value = stoul(argv[1]);    // ML: size_t const value (see reading types rules)

    // Loop over numbers 1 till 10.
    // Adding `value` to product is faster than computing `value * number`.
    for (size_t number = 1, product = value; number != 11;
         ++number, product += value)

        cout << number
             << " * "
             << argv[1]                // NTBS version of value
             << " = "
             << product
             << '\n';
};
