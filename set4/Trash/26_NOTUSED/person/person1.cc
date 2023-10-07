#include "person.ih"

Person::Person()
// all the other objects are automatically intialized
:   d_mass(0)                           // why are curly brackets not allowed here?                       
{
    cout << d_name << " initialized with empty values\n";   //inform user that object is initialized
}
