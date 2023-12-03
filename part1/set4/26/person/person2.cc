#include "person.ih"

// create constructor to initialize Person object
Person::Person(string const &name, string const &address, string const &phone, size_t const &mass)
:   d_name(name),
    d_address(address),
    d_phone(phone),
    d_mass(mass)
{
    cout << d_name << " initialized\n";   //inform user that object is initialized
}