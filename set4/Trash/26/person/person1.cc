//#define XERR       // ??

#include "person.ih"

person::person()
// all the other objects are automatically intialized
:   d_age{0}                           
{
    cout << d_name << " initialized with empty values\n";   //inform user that object is initialized
}
