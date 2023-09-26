// ML: 1
#include <iostream>
#include <string>

using namespace std;

int main()
{       
        // Extended ASCII has an 8 bit encoding, from 0 to 255.
        for (char character = 255; character--; )
                if (isalpha(character))
                        cout << character;

        cout << '\n';
};
