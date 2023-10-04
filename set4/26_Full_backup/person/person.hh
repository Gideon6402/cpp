#ifndef INCLUDED_PERSON_
#define INCLUDED_PERSON_

#include <string>              // why doesn't <iosfwd> work here?

class Person
{
    std::string d_name;         // name of person
    std::string d_address;      // address field
    std::string d_phone;        // telephone number
    size_t d_mass;         // the mass in kg, why no std::size_t

    public:
        // constructors:
        Person();               // empty strings and mass = 0
        // no references because will be initialized wiht xvalues.
       Person(std::string name, std::string address, std::string phone, std::size_t mass);

        // initializers:
        // consideration: parameter type could have been `std::string`. Advantage: a non const arg can
        // be passed into here. Disadvantage: argument needs to be copied.
        void setName(std::string name)         // const necesary such that d_name is protected.   
        {
            d_name = name;                            // pointer is not const so it can be changed.
        }
        void setAddress(std::string address)
        {
            d_address = address;
        }
        void setMass(std::size_t mass)
        {
            d_mass = mass;
        }
        void setPhone(std::string phone);      // has own source file

        // view data members
        // return a constant string reference such that d_name cannot be changed
        std::string const &name() const 
        {
            return d_name;  
        }                          
        std::string const &address() const 
        {
            return d_address;
        }
        std::string const &phone() const 
        {
            return d_phone;
        }
        size_t const &mass() const 
        {
            return d_mass;
        }

        void insert(std::ostream &cout);                // insert data into cout
        void extract(std::istream &cin);                // extract data from cin, string [] ?
        void extractLine(std::istream &inputStream, std::string inputValues[], size_t &dataMemberSpecifier);
        void initialize(std::string inputValues[]);

    private:
        // support functions
        void add_characters(std::string *inputValues, std::string &Line, std::size_t &dataMemberSpecifier);

        
};
        
#endif


// This file is exremely long. Can't it be shorter?
