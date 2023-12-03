// JB: ?
#include <iostream>

using namespace std;

int main() {
	
	size_t value; //JB: COCO
	cin >> value;

    //JB: SF 'std::'
    //JB: NSC
	std::cout << (value % 2 == 1 			? "odd" : "even")
		<< '\n';

    //JB: Why the excess zeroes?
	std::cout << ((value & 0x00000001) == 1		? "odd" : "even")
		<< '\n';
		
	std::cout << ((value | 0x00000001) == value	? "odd" : "even")
		<< '\n';

    //JB: BABO
	std::cout << (2*(value >> 1) == value		? "even" : "odd")
		<< '\n';
		
	std::cout << ((value ^ 0x00000001) == value + 1	? "even" : "odd")
		<< '\n';
		
	std::cout << ((value/2) << 1 == value		? "even" : "odd")
		<< '\n';

};
