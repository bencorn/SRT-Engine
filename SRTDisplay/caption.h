#ifndef CAPTION_H
#define CAPTION_

#include <vector>
#include <ostream>
#include <chrono>
#include <thread>
#include <iostream>

using namespace std;

class Caption {
public:
	Caption(int capId, int tBegin, int tEnd, vector<string> subs);
	double calcPause(int begin, int end);
	void displaySub(double pause, vector<string> subs);
	//this_thread::sleep_for(chrono::seconds(1));

private:
	int id;
	int timeBegin;
	int timeEnd;
	vector<string> subtitles;
};





#endif