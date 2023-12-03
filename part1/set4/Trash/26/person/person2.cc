#include "person.ih"

// create constructor to initialize Person object
Person::Person(string name, string address, string phone, size_t mass)
:   d_name = name,
    d_addres = address,
    d_phone = phone,
    d_mass = mass
{
    cout << d_name << " initialized\n";   //inform user that object is initialized
}