// ML: ?
// ML no summary -> ?
// Design a program showing all combinations of all the program's command line arguments.

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
    // Make sure we only consider the (amount of) arguments to the programme.
    ++argv;
    const size_t nr_arguments = argc - 1;    // ML: size_t const nr_arguments (nr_arguments is a const size_t)
    
    // With `n` arguments, there are 2^n combinations to consider.
    for (size_t line_index = 0; line_index != pow(2, nr_arguments); ++line_index)
    {
        cout << line_index + 1 << ":";
        
        // Consider the first `nr_arguments` bits of `line_index`, FLTR.
        for (size_t bit_index = 0; bit_index != nr_arguments; ++bit_index)

            // Check if the `bit_index`th bit is `1`.
            if (((line_index >> bit_index) & 1) == 1)

                // Print the `n`th argument.
                cout << " " << argv[bit_index];

        cout << '\n';
    };
};
