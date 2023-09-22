#include "main.ih"

int main(int argc, char **argv)
{
    bool const dotBool = contains_dot(argc, argv);

    if(dotBool)  
    {                     
        double acumulator = 0.0;       // will acumulate all arguments
        std::cout << sum(argc, argv, acumulator); 
    }
    else
    {
        int acumulator = 0;            // dito
        std::cout << sum(argc, argv, acumulator);
    }
}