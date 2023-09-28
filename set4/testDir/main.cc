#include <iosfwd>
#include <iostream>
class MyClass
{
    std::string d_name;

    public:
        MyClass()
        :   d_name{"karel\n"}
        {}

        void name()
        {
            std::cout << d_name;
        }
};

int main()
{
    MyClass classInstance;
    classInstance.name();
}