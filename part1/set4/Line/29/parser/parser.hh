#ifndef PARSER_HH_093475
#define    PARSER_HH_093475

#include <string>                      // really necesary?
#include "../../28/line/line.hh"       //
// class Line;                            // is this a proper forward declaration?

class Parser
{
    Line d_line;

    public:
        enum Return
        {
            NO_NUMBER = 0,
            NUMBER = 1,
            EOLN = 2
        };

        typedef std::string::const_iterator C_iter;

        // needs no constructors because only data member is an object

        // getters
        Line line();

        // member function
        bool reset();
        Return number(double *dest);
        bool isIntegral();
        std::string next();
    
    private:
        Return convert(double *dest, std::string const &str);    // can the adress of str all of the sudden contain a double?
        bool pureDouble(double *dest, std::string const &str);
        


};

inline Line Parser::line()
{
    return d_line;
}

#endif

// are there more sensible numerical values for this enum?