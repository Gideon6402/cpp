#include <ctype.h>
#include <string>
#include <iostream>

int main()
{
    std::string List;
    for(char character = 1; character!=0; character++)
    {
        if( isalpha(character) )
            if ( islower(character) )
                List += character;
    }

    std::cout << List << '\n';
}