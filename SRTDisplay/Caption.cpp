// AUTHOR1: CONRAD LIU cliu21@bu.edu
// AUTHOR2: BEN CORN bcorn@bu.edu

#include "caption.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Class costructors
Caption::Caption() {

}

// Default constructor not defined, since
// objects will always be created with the following parameters
Caption::Caption(int subID, int tStart, int tEnd, vector<string>& subtitles) {
	id = subID;
	start = tStart;
	end = tEnd;
	duration = setDuration();
	subs = subtitles;
}

// Implementing various getters and setters

int Caption::setDuration() {
	return end - start;
}

// Important when first executing main function:
// In its first iteration, tells main how long to pause for
int Caption::getStart() {
	return start;
}

int Caption::getEnd() {
	return end;
}

// Returns difference between start and end times; Tells main method how long to pause for
int Caption::getDuration() {
	return duration;
}

// Since Caption ID's are created in ascending order, sorting a vector
// of Captions will sort them into proper order when displayed
int Caption::getID() {
	return id;
}

// Prints all lines to terminal
void Caption::dispSub() {
	for (int i = 0; i < subs.size(); i++) {
		cout << subs[i] << endl;
	}
	cout << endl;
}