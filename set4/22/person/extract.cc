#include person.ih

void Person::extract(std::istream cin)
{
    while (true)
    {
        string Line;
        getline(cin, Line)

        int dataMemberSpecifier = 0

        for (auto iter = Line.cbegin();
             iter != Line.cend();
             ++iter
        )
        {
            switch (dataMemberSpecifier)
            {
                case 0:
                    d_name += *iter
                case 1:
                    d_address += *iter
                case 2:
                    d_phone += *iter
                case 3: d_phone += *iter
            }
            if (*iter == ',')
                ++dataMemberSpecifier;
        }
    }
}