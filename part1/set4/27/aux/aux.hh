#ifndef AUX_HH_2346923
#define AUX_HH_2346923 

#include "../../26/person/person.hh"   
enum Enum
{
    N_PERSONS = 5,
    N_INPUT = 4
};

typedef std::string::const_iterator Const_iter;

void getInputValues(std::string inputValues[], std::string &line);
void read(Person personArray[]);
void write(Person personArray[]);

#endif