// JB: ?
#include <iostream>

// JB: Naming. Name variables for their purpose, not for their type.
// JB: Also: Q. A nameless namespace doesn't make much sense in a
// JB: single-source program. But unless you knew that (and why) you should've
// JB: used one.
char const raw_string_literal[] = R"delimiter(^\s+Encryption key:(\w+)
^\s+Quality=(\d+)
^\s+E?SSID:"([[:print:]]+)"
^\s+ssid="([[:print:]]+)"
)delimiter";

int main() { //JB: L

	std::cout << raw_string_literal;
};
