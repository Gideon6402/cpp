#include "main.ih"

void count_words()
{
    int n_words = 0;
    while (true)
    {
        if (cin >> word)         
            n_words += 1;
        if (cin.fail())
            break;
    }

    cout << n_words;
}

