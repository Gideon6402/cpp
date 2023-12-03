#include "main.ih"

int main(int argc, char **argv)
{
    string arg = argv[1];

    if ( arg.compare("-c") )
        count_characters();
    
    else if ( arg.compare("-w") )
        count_words();
    
    else if ( arg.compare("-l") )
        count_lines();
    else
        cerr << "No valid argument\n";
    
    cout << '\n';
}



// can I use argv[1] multiple times, would it be better? -Jurjen