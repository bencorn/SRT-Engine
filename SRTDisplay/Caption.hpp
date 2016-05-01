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
	Caption(int, double, double, vector<string>&);

	double getStart();
	double getEnd();
	double getDuration();
	int getID();
	void dispSub();

private:

	int id;
	double start;
	double end;
	double duration;
	vector<string> subs;

	void setStart();
	void setEnd();
	double setDuration();

};

#endif