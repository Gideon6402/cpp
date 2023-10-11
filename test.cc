#include <iostream>

const int fun()
{
    int x = 2;
    return x;
}

int main()
{
    int x = fun();
    x++;
    std::cout << x; 
}