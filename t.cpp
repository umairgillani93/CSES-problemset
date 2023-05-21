#include <iostream>
#include <string>

using namespace std;

int main() {
	string s = "this is a string";

	for (auto i : s) {
		if (i == "s") {
			cout << "found: i" << '\n';
		}
		
	}

	return 0;

}
