// JB: ?
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) { //JB: L

	cout << "hello " <<

	((argc == 1) ? "world" : (
	(argc == 2) ? argv[1] :
	argv[stoul(argv[1])]))
        //JB: Possible segfault on the odd chance that argc == 0.
	<< '\n';
};
