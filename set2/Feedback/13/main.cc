// ML: 0
#include <iostream>

using namespace std;

// ML: spacing, SLV, HAT
int main()
{
        bool small_is_square;
        bool large_is_square;
        
        for(size_t nr = 100; nr != 1000; ++nr)
        {
                small_is_square = false;
                large_is_square = false;

                for(size_t i = 9; i != 33; ++i)
                {
                        if (nr + 32 == i * i)
                                large_is_square = true;

                        if (nr - 13 == i * i)
                                small_is_square = true;
                };

                if (small_is_square and large_is_square)
                {
                        cout << '<'
                             << nr
                             << "> satisfies the requirments"
                             << '\n';
                        return 0;
                };
        };
        
        cout << "No number satisfying the requirments was found"
             << '\n';
};
