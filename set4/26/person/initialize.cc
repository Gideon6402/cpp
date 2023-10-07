#include "person.ih"

void Person::initialize(string inputValues[])
{
    setName(inputValues[NAME]);
    setAddress(inputValues[ADDRESS]);
    setPhone(inputValues[PHONE]);
    setMass(stoul(inputValues[MASS]));           // mass needs to be size_t
}