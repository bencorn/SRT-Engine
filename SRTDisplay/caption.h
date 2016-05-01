//AUTHOR1: CONRAD LIU cliu21@bu.edu
//AUTHOR2: BEN CORN bcorn@bu.edu

#ifndef CAPTIONHPP
#define CAPTIONHPP

#include <iostream>
#include <string>
#include <vector>
#include <string>

using namespace std;

class Caption
{
public:

	Caption();
	Caption(int, int, int, vector<string>&);

	int getStart();
	int getEnd();
	int getDuration();
	int getID();
	void dispSub();

private:

	int id;
	int start;
	int end;
	int duration;
	vector<string> subs;

	// The following methods are private, and are only used within the Caption class
	//void setStart();
	//void setEnd();
	int setDuration();

};

#endif