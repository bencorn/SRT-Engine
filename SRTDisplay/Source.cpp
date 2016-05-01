// Subtitler - Boston University EC 327 Extra Credit Assignment
// Authors: Benjamin Corn bcorn@bu.edu
// Authors: Conrad Liu cliu21@bu.edu

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <math.h>
#include "caption.h"

using namespace std;

// start and end times in srt format to ms 
vector <double> parseTime(string line);


int main(int argc, const char* argv[]) {
	
	// cnt -> current line reference
	int cnt = 0;

	// caption object id from file
	int id = 0;

	// srt file
	ifstream srtfile("example.srt");
	string line;

	// lines of caption block
	vector <string> captionLines;

	// collection of caption objects
	vector <Caption> captionObjects;

	// start and end time
	vector <double> captionTime;

	if (srtfile.is_open()) {
		while (getline(srtfile, line)) {

			if (line.length() == 0) {
				cnt = 0;
				captionObjects.push_back(Caption(id, captionTime[0], captionTime[1], captionLines));
				continue;
			}

			// if line length 0 -> new caption block.
			if (cnt == 0) {
				id = stoi(line);
				cout << id << '\n';
			}

			else if (cnt == 1) {
				string time = line;
				captionTime = parseTime(time);
				cout << captionTime[0] << " --> " << captionTime[1] << '\n';
			}

			else if (cnt > 1) {
				cout << line << '\n';
				captionLines.push_back(line);
			}

			cnt += 1;
		}
		srtfile.close();
	}

	else cout << "SRT file could not be opened, please check your file name again.";

	system("PAUSE");
	return 0;


}

vector <double> parseTime(string line) {

	vector <double> time;
	double hours, minutes, seconds, mili;

	hours = stoi(line.substr(0, 2)) * 3600000;
	minutes = stoi(line.substr(3, 2)) * 60000;
	seconds = stoi(line.substr(6, 2)) * 1000;
	mili = stoi(line.substr(9, 3));

	time.push_back(hours + minutes + seconds + mili);

	hours = stoi(line.substr(17, 2)) * 3600000;
	minutes = stoi(line.substr(20, 2)) * 60000;
	seconds = stoi(line.substr(23, 2)) * 1000;
	mili = stoi(line.substr(26, 3));

	time.push_back(hours + minutes + seconds + mili);

	return time;

}