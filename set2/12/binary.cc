#include <iostream>
#include <string>
#include <typeinfo>

int main()
{
    using namespace std;
    int value;                         
    cin >> value;                      //read command line
    
    //This string will contain "<input> = <binary representation> = ""
    string ouput;
    //This string will contain the calculation
    string calculation;  

    ouput += to_string(value); 
    ouput += " = ";

    int size = sizeof(value) * 8;       //number of bits of the input

    // in two's complement (-2)^32 corresponds to 1 with 31 zeros and
    // -1 to highest binary respresentation: 32 ones. Therefore we 
    // add 2^32 to negative numbers and then treat them as if they are
    // unsigned integers. 
    size_t svalue;
    if (value < 0)
    {
        value += 1 << (size - 1);          
        svalue = value + (1 << (size-1) );
        calculation += '-'; 
    }
    else
    {
        svalue = value;
    }

    // interpert value as unsigned int. Determines binary representation
    // of value.
    for(int power = size - 1;          // powers start with zero
            power != -1; --power)
    {   
        size_t bitValue = 1 << power;  // 1 << power is eq to pow(2, power)
        size_t bit = svalue / bitValue;// 0 or 1?
        svalue %= bitValue;            // remove calculated part
        
        
        if(bit)                         // don't add 0*bitValue
        {
            calculation += to_string(bitValue) += " + ";
        }

        ouput += to_string(bit);        //add bit to bitstring
    }

    ouput += " = ";                   //complete first part of output
    string::size_type on = calculation.length();
    calculation.erase(on - 3, on);     //erase the last ' + '
    cout << ouput << calculation << '\n';
    
}
