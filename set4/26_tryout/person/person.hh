#ifndef INCLUDED_PERSON_
#define INCLUDED_PERSON_

#include <iosfwd>              // why doesn't <iosfwd> work here?

class Person
{
    #include <string>
    std::string d_name;         // name of person
    std::string d_address;      // address field
    std::string d_phone;        // telephone number
    std::size_t d_mass;         // the mass in kg, why no std::size_t

    public:
        // constructors:
        Person();               // empty strings and mass = 0
        // no references because will be initialized wiht xvalues.
        Person(std::string &name, std::string &address, std::string &phone, std::size_t &mass);

        // initializers:
        void setName(std::string const &name)         // const necesary such that d_name is protected.
            d_name = name;                            // pointer is not const so it can be changed.
        void setAddress(std::string const &address)
            d_address = address;
        void setPhone(std::string const &phone)       
            d_phone = phone;
        void setMass(std::size_t const &mass)
            d_mass = mass;

        // view data members
        // return a constant string reference such that d_name cannot be changed
        std::string const &name()    const
            return d_name;                            
        std::string const &address() const
            return d_address;
        std::string const &phone()   const
            return d_phone;
        std::size_t const &mass()    const
            return d_phone;

        void insert(std::ostream &cout);                // insert data into cout
        string * extract(std::istream cin);            // extract data from cin, string [] ?

    private:
        void add_characters(string &Line, size_t &dataMemberSpecifier);

        
};
        
#endif
