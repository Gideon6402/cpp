#ifndef COPYCAT_HH_4578798723
#define COPYCAT_HH_4578798723

#include <iosfwd>

class CopyCat
{
    size_t d_size;
    char **d_data;

    public:
        // constructors
        CopyCat();                            // copies environ
        CopyCat(int argc, char **argv);       
        CopyCat(char **data);                 // cp. any environ-like variable

        // make environ available for all functions:
        // extern char **environ;

    private:
        char **deep_copy(char const *const *original, size_t nElements);
};

#endif

