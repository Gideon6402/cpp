// ML: 0
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

namespace
{
        const size_t BYTE_SIZE_IN_BITS = 8; // Byte is 8 bits.    // ML: I would use an enum here
}

// ML: See annotations 2.5.1 this is not a proper variant of main
int main(const int _, const char* argv[])
{
        int value = stoul(argv[1]);
        
        // We append to strings first instead of using cout immediately,
        // because this would require two for loops.
        string binary_makeup = "";
        string sum_of_parts = "";
        
        // We iterate over all bits in the number from left to right.
        for (auto bit_index = BYTE_SIZE_IN_BITS * sizeof(value); bit_index--; )
                {
                if (decltype(value) bit_value
                    = ((decltype(value)) 1 << bit_index) & value;
                    bit_value != 0
                   )
                        {
                        // Make sure the sum does not start with a +-sign.
                        if (sum_of_parts != "")
                                sum_of_parts += " + ";

                        sum_of_parts += to_string(bit_value);
                        binary_makeup += "1";
                        }
                else
                        binary_makeup += "0";
                };
        
        // Special case if value is 0:
        if (value == 0)
                sum_of_parts = "0";
        
        cout << value
             << " = "
             << binary_makeup
             << " = "
             << sum_of_parts
             << '\n';

};
