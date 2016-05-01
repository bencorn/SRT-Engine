//AUTHOR1: CONRAD LIU cliu21@bu.edu
//AUTHOR2: BEN CORN bcorn@bu.edu

#include "Caption.hpp"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<string> cap = {"one", "two", "three"};
	Caption captest(1, 12345, 13000, cap);
	cout << captest.getID() << endl;
	cout << captest.getStart() << " " << captest.getEnd() << " " << captest.getDuration() << endl;
	captest.dispSub();

	return 0;
}

// Output:
//
// 1
// 12345 13000 655
// one two three 