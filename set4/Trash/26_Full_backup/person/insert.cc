#include "person.ih"

// Display data of person
void Person::insert(std::ostream &outputStream)
{
    outputStream << "Name: "         << d_name    << '\n'
                 << "Address: "      << d_address << '\n'
                 << "Phone number: " << d_phone   << '\n'
                 << "Mass: "         << d_mass    << "\n\n";
}