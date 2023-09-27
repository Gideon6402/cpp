#ifndef INCLUDED_PERSON_
#define INCLUDED_PERSON_

#include <iosfwd>


class Person
{
    std::string d_name;         // name of person
    std::string d_address;      // address field
    std::string d_phone;        // telephone number
    size_t      d_mass;         // the mass in kg, why no size_t

    public:
        Person();
        Person(std::string name, std::string address, std::string d_phone, size_t mass);  // also const here?

        void setName(std::string const &name)         // how necesary is const here?
            d_name = name;
        void setAddress(std::string const &address)
            d_address = address;
        void setPhone(std::string const &phone)
            d_phone = phone;
        void setMass(size_t &mass)
            d_mass = mass;

        std::string const &name()    const
            return d_name;
        std::string const &address() const
            return d_address;
        std::string const &phone()   const
            return d_phone;
        size_t      const &mass()    const
            return d_phone;

        void insert(std::ostream &cout);

};
        
#endif
