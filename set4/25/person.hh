#ifndef PERSON_HH_09184735
#def PERSON_HH_09184735
class Person
{
    string const d_name;         // name of person doesn't change
    string d_adress;             // address and age can change
    int d_age;

    public:
    string const name();
    string address();
    int age();
}

#endif