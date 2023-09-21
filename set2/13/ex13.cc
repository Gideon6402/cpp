#include <iostream>
#include <cmath>


enum
{
    BEGIN = 100,
    END = 1000,
    ADD = 32,
    SUBS = 13
};

int main()
{
    using namespace std;
    bool numberFound = false;
    for(int const nr = 100; nr != 1000; ++nr)
    {
        bool boolLow = false;        // true if substracting 13 gives a square
        bool boolHigh = false;       // true if adding 32 gives a square

        int const low = nr - SUBS;         
        int const high = nr + ADD;

        double const sqrtLow = sqrt(low); 
        // round of to lowest integer:
        int const int_sqrtLow = static_cast<int>(sqrtLow); 
        double const diff = sqrtLow - int_sqrtLow;
        double const zero = 0.0;
        // if rounding of didn't change sqrtLow than it was a square
        if(diff == zero)
        {
            boolLow = true;
        }

        // do the same for nr + 32
        double const sqrtHigh = sqrt(high); 
        int const int_sqrtHigh = static_cast<int>(sqrtHigh);
        // no need to declare diff and zero this time
        diff = sqrtHigh - int_sqrtHigh;
        zero = 0.0;
        if(diff == zero)
        {
            boolHigh = true;
        }

        // if both requirements are satisfied:
        if(boolLow & boolHigh)
        {
            cout << nr << " satisfies the requirements" << '\n';
            numberFound = true;
            break;
        } 
    }

    if(not numberFound)
    {
        cout << "No number satisfying the requirements is found\n";
        return 1; 
    } 
}
