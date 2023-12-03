#include "person.ih"

void Person::initialize(string inputValues[])
{
    setName(inputValues[0]);
    setAddress(inputValues[1]);
    setPhone(inputValues[2]);
    cout << "stoul input: " << inputValues[3] << '\n';
    // setMass(stoul(inputValues[3]));           // mass needs to be size_t
}