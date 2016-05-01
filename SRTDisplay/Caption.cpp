// AUTHOR1: CONRAD LIU cliu21@bu.edu
// AUTHOR2: BEN CORN bcorn@bu.edu

#include "Caption.hpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Class costructors
Caption::Caption() {

}

// Default constructor not defined, since
// objects will always be created with the following parameters
Caption::Caption(int subID, double tStart, double tEnd, vector<string>& subtitles) {
	id = subID;
	setStart(tStart);
	setEnd(tEnd);
	duration = setDuration();
	subs = subtitles;
}

// Implementing various getters and setters

void Caption::setStart(double s) {
	start = s;
}

void Caption::setEnd(double e) {
	end = e;
}

double Caption::setDuration() {
	return end - start;
}

// Important when first executing main function:
// In its first iteration, tells main how long to pause for
double Caption::getStart() {
	return start;
}

double Caption::getEnd() {
	return end;
}

// Returns difference between start and end times; Tells main method how long to pause for
double Caption::getDuration() {
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