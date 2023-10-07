#include "person.ih"

void Person::extract(std::istream cin)
{
    while (true)                           // iterate over all the input lines
    {
        string Line;
        getline(cin, Line)                 // copy output line onto Line

        int dataMemberSpecifier = 0    

        for (auto iter = Line.cbegin();
             iter != Line.cend();
             ++iter
        )
        {
            // go to the next memberspecifier if comma is encountered.
            if (*iter == ',')               
                ++dataMemberSpecifier      // no need to ++iter
            else            
                add_character(Person);     // probably give references to all data members :(((((
        }
        if (cin.fail())                    // break if last line is reached
            break;
    }
}