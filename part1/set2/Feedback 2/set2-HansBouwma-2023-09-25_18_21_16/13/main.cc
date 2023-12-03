// ML: 0
// ML no summary -> ?
// Find a number that satisfies the following requirements:
// 1) number has 3 digits
// 2) number + 32 is a square
// 3) number - 13 is a square

// Give an error if no number is found.

#include <iostream>

using namespace std;

int main()
{
    bool small_is_square;
    bool large_is_square;
    
    // ML: Put a few more semantic comments throughout the code.
    for (size_t nr = 100; nr != 1000; ++nr)
    {
        small_is_square = false;
        large_is_square = false;

        for (size_t idx = 9; idx != 33; ++idx)
        {
            if (nr + 32 == idx * idx)
                large_is_square = true;

            if (nr - 13 == idx * idx)
                small_is_square = true;
        }

        if (small_is_square and large_is_square)
        {
            cout << '<'
                 << nr
                 << "> satisfies the requirments"
                 << '\n';
            
            return 0;
        }
    }
    
    cout << "No number satisfying the requirments was found"
         << '\n';
}
