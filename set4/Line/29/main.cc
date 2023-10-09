#include "main.ih"

int main()
{
    Parser parser;                     // WILD?
    parser.reset();

    double *numberPtr = new double;
    *numberPtr = 0.0;
    // for (int i = 0; i != 5; ++i)
    //     parser.number(numberPtr);

    Parser::Return status = parser.number(numberPtr);
    cout << status << '\n';
    cout << *numberPtr << '\n';

    delete numberPtr;           
}

// assuming that delte numberPtr removes both the pointer, 
// its contents and de allocates the memory