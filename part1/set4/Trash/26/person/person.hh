#ifndef INCLUDED_PERSON_
#define INCLUDED_PERSON_

#include <iosfwd>              // only declarations so no <string>
// how do I only include cin and cout here? No <iostream> right?

class Person
{
    std::string d_name;         // name of person
    std::string d_address;      // address field
    std::string d_phone;        // telephone number
    size_t      d_mass;         // the mass in kg, why no size_t

    public:
        // constructors:
        Person();               // empty strings and mass = 0
        // no references because will be initialized wiht xvalues.
        Person(std::string &name, std::string &address, std::string &phone, size_t &mass);

        // initializers:
        void setName(std::string const &name)         // const necesary such that d_name is protected.
            d_name = name;                            // pointer is not const so it can be changed.
        void setAddress(std::string const &address)
            d_address = address;
        void setPhone(std::string const &phone)       
            d_phone = phone;
        void setMass(size_t const &mass)
            d_mass = mass;

        // view data members
        std::string const &name()    const
            return d_name;                            // assume: d_name will promote to string const &
        std::string const &address() const
            return d_address;
        std::string const &phone()   const
            return d_phone;
        size_t      const &mass()    const
            return d_phone;

        void insert(std::ostream &cout);             // vscode gives error
        void extract(std::istream &cin);

};
        
#endif
