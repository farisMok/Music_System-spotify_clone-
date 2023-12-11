#ifndef TIME_H
#define TIME_H
#include <iostream>
using namespace std;
class Time {
private:
	int hour;
	int min;
	int sec;
public:
	Time() {
		hour = 0;
		min = 0;
		sec = 0;
	}
	Time(int h, int m, int s) {
		hour = h;
		min = m;
		sec = s;
	}
	void display() {
		if (hour == 0) {
			cout << " " << min << ":" << sec << endl;
		}
		else
			cout << " " << hour << ":" << min << ":" << sec << endl;
	}
};
#endif // !TIME_H

