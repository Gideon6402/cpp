#ifndef PARSER_HH_093475
#define    PARSER_HH_093475

class Line;                            // is this a proper forward declaration?

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

        bool reset();
        Return number(double *dest);
        bool isIntegral();
        std::string next();
    
    private:
        Return convert(double *dest, std::string const &str);    // can the adress of str all of the sudden contain a double?
        bool pureDouble(double *dest, std::string const &str);
        


};

#endif

// are there more sensible numerical values for this enum?