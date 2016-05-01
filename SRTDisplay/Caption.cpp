//AUTHOR1: CONRAD LIU cliu21@bu.edu
//AUTHOR2: BEN CORN bcorn@bu.edu

#include "Caption.hpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Class costructors
Caption::Caption() {

}

Caption::Caption(int subID, double tStart, double tEnd, vector<string>& subtitles) {
	id = subID;
	start = tStart;
	end = tEnd;
	duration = setDuration();
	subs = subtitles;
}

//Method implementation
// void Caption::setStart() {
// 	start = tStart;
// }

// void Caption::setEnd() {
// 	end = tEnd;
// }

double Caption::setDuration() {
	return end - start;
}

double Caption::getStart() {
	return start;
}

double Caption::getEnd() {
	return end;
}

double Caption::getDuration() {
	return duration;
}

int Caption::getID() {
	return id;
}

void Caption::dispSub() {
	for (int i = 0; i < subs.size(); i++) {
		cout << subs[i] << endl;
	}
	cout << endl;
}