#include "person.ih"

// Display data of person
void Person::insert(std::ostream &out)
{
    cout << "Name: "         << d_name    << '\n'
         << "Address: "      << d_address << '\n'
         << "Phone number: " << d_phone   << '\n'
         << "Mass :"         << d_mass    << '\n';
}