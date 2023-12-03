#include "main.ih"

void count_characters()
{
    int n_characters = 0;
    string Line;   // constant string
    while (true)
    {
        getline(cin, Line);            // will this work?
        int length = Line.length();

        for ( string::const_iterator iter = Line.cbegin();
              iter != Line.cend();
              ++iter
        )
        {
            if (!isspace(*iter))
                n_characters += 1;
        } 
        if ( cin.fail() )
            break;
    }

    cout << n_characters;
}