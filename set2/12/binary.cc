#include <iostream>
#include <string>
#include <math.h>
#include <typeinfo>

int main()
{
    using namespace std;
    int value;                         //declare
    cin >> value;                      //read command line

    int sizeOfvalue = sizeof(value)*4; //determine size of value
    
    //This string will contain everything up untill '<binary value> ='
    string Output1;
    //This string will contain the rest of the output            
    string Output2;  

    Output1 += to_string(value); 
    Output1 += " = ";

    // in the this system
    // - add 0 if first bit is 0
    // - substract -32768 if first bit is -1
    if (value >= 0)
    {
        Output1 += '0'; // Positive thus first bit zero and add nothing
    }
    else
    {
        Output1 += '1'; // Negative thus first bit one and substract -32768
        
        // do this by printing '-' and act as if the value is actually
        // increased by 32768
        Output2 += '-';
        value += 32768; 
    }

    for(int power = sizeOfvalue -2;
            power != -1; --power)
    {   
        int bitValue = pow(2, power);
        int bit = value / pow(2, power);
        int remainder = value % bitValue;
        
        value = remainder;

        
        if(bit)
        {
            Output2 += to_string(bitValue * bit) += " + ";
        }

        Output1 += to_string(bit);
    }

    Output1 += " = ";
    string::size_type on = Output2.length();
    Output2.erase(on - 3, on);         //erase the last ' + '
    cout << Output1 << Output2 << '\n';
    
}