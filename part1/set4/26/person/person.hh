#ifndef INCLUDED_PERSON_09283475
#define INCLUDED_PERSON_09283475

#include <string>        

class Person
{
    std::string d_name;                // name of person
    std::string d_address;             // address field
    std::string d_phone;               // telephone number
    size_t d_mass;                     // the mass in kg, why no std::size_t

    enum
    {
        NAME = 0,
        ADDRESS = 1,
        PHONE = 2,
        MASS = 3,
        SIZE = 4
    };

    public:
        // constructors:
        Person();                      // empty strings and mass = 0
       Person(std::string const &name, std::string const &address, std::string const &phone, size_t const &mass);

        // initializers:
        void setName(std::string const &name);
        void setAddress(std::string const &address);
        void setMass(size_t const &mass);
        void setPhone(std::string phone);      // has own source file

        // view data members
        // return a constant string reference such that d_name cannot be changed
        std::string const &name()    const;                      
        std::string const &address() const;
        std::string const &phone()   const;
        size_t      const &mass()    const;

        // public member function
        void insert(std::ostream &cout);
        void extract(std::istream &cin);                
        void initialize(std::string inputValues[]);

    private:
        // support functions
        static void getInputValues(std::string *inputValues,
                                   std::string &Line,
                                   std::size_t &dataMemberSpecifier
        );
        bool checkPhone(std::string &phone);

        // type defintions
        typedef std::string::const_iterator Const_iter;
        
};


// set data members
inline void Person::setName(std::string const &name)   
{
    d_name = name;                         
}

inline void Person::setAddress(std::string const &address)
{
    d_address = address;
}

inline void Person::setMass(size_t const &mass)
{
    d_mass = mass;
}

// view data members
inline std::string const &Person::name() const 
{
    return d_name;  
}   

inline std::string const &Person::address() const 
{
    return d_address;
}

inline std::string const &Person::phone() const 
{
    return d_phone;
}

inline size_t const &Person::mass() const 
{
    return d_mass;
}

#endif


// am I allowed to indent with the one line function to make structure more clear?
// indent with comments?