#ifndef LINE_HH_91328745
#define LINE_HH_91328745

#include <string>                      // my <iosfwd> doesn't work

class Line
{
    std::string d_line;
    size_t d_curPos;

    typedef std::string::const_iterator C_iter;

    public:
        // constructors
        Line();

        // member functions
        bool getLine();
        std::string next();

    private:
        // support member functions 
        bool has_non_ws(std::string const &line);
        void create_substring(std::string &substring);
};

#endif