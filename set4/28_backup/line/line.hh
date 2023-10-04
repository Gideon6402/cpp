#ifndef LINE_HH_91328745
#define LINE_HH_91328745

#include <string>                      // my <iosfwd> doesn't work

class Line
{
    std::string d_line;
    size_t d_curPos;

    public:
        // constructors
        Line();


        bool getLine();
        std::string next();
};

#endif