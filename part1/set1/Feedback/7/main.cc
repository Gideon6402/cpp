// JB: ?
#include <iostream>

using namespace std;

union bitfield {

	struct {
		size_t bit_0: 		1 = 0;
		size_t bit_1_3: 	3 = 7;
		size_t bit_4_7: 	4 = 15;
		size_t bit_8_12: 	5 = 10;
		size_t bit_13_16: 	4 = 6;
		size_t bit_17_20: 	4 = 7;
		size_t bit_21_24: 	4 = 15;
		size_t bit_25_28: 	4 = 15;
		size_t bit_29_32: 	4 = 7;
		size_t bit_33_37: 	5 = 0;
		size_t bit_38_39: 	2 = 3;
	};
	size_t value;
};

int main() {

	cout << hex << bitfield{{}}.value << '\n';

};

/* JB:
   Nice program, but the explanation seems to be missing?
   (Not just comment, but we asked a question too.)
 */
