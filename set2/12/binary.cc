#include <iostream>
#include <string>
#include <math.h>

int main()
{
    using namespace std;
    int Input;                         //declare
    cin >> Input;                      //read command line

    int sizeOfInput = sizeof(Input)*4; //determine size of input
    
    
    string bitString;                 //string containing binary
                                      // representation

    if (Input < 0)
    {
        bitString += "-";             //determine sign of input
    }
    //first determine the power of the bit
    for(int power = sizeOfInput -1, value = Input;
            power != -1; --power)
    {
        int bitValue = pow(2, power);
        int bit = value / pow(2, power);
        int remainder = Input % bitValue;
        
        value = remainder;

        bitString += to_string(bit);
    }

    cout << bitString;
}