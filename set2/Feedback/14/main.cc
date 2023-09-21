// ML: 0
#include <iostream>
#include <cmath>

using namespace std;

// ML: See annotations 2.5.1 this is not a proper variant of main, spacing
int main(const int argc, const char **argv)
{
        // Make sure we only consider the (amount of) arguments to the programme.
        ++argv;
        const size_t nr_arguments = argc - 1;
        
        // With `n` arguments, there are 2^n combinations to consider.
        for (size_t line_index = 0; line_index != pow(2, nr_arguments); ++line_index)
        {
                cout << line_index + 1 << ":";
                
                // Consider the first `nr_arguments` bits of `line_index` from right to left.
                for (size_t bit_index = 0; bit_index != nr_arguments; ++bit_index)

                        // Check if the `bit_index`th bit is `1`.
                        if (((line_index >> bit_index) & 1) == 1)

                                // Print the `n`th argument.
                                cout << " " << argv[bit_index];

                cout << '\n';
        };
};
