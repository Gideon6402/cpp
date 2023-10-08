#include "copycat.ih"

// copy environ
CopyCat::CopyCat()
// :   d_data{environ}
{
}

// how do I declare environ?

// older version:
    // // declare environ externally
    // extern char **environ;

    // // define a copy        
    // char *copy[]

    // // copy all the data from environ to the copy
    // deep_copy(environ, copy, nElements(environ));

    // // initialize d_size and d_data