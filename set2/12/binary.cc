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
    string ouput;
    //This string will contain the rest of the output            
    string Calculation;  

    ouput += to_string(value); 
    ouput += " = ";

    // in the this system
    // - add 0 if first bit is 0
    // - substract -32768 if first bit is -1
    if (value >= 0)
    {
        ouput += '0'; // Positive thus first bit zero and add nothing
    }
    else
    {
        ouput += '1';
        Calculation += '-32782';
        value += 32768; //compensate for adding
    }

    for(int power = sizeOfvalue -2;
            power != -1; --power)
    {   
        int bitValue = pow(2, power);
        int bit = value / bitValue;
        value %= bitValue;
        
        if(bit)
        {
            Calculation += to_string(bitValue * bit) += " + ";
        }

        ouput += to_string(bit);
    }

    ouput += " = ";
    string::size_type on = Calculation.length();
    Calculation.erase(on - 3, on);         //erase the last ' + '
    cout << ouput << Calculation << '\n';
    
}