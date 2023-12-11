#ifndef SONGS_H
#define SONGS_H
#include <iostream>
#include "Time.h"
#include"Singer.h"
#include <string>
using namespace std;

class Song {
private:
	string Title;
	string singername;
	Time duration;
	int views;
public:
	Song() {
		Title = "UNKNOWN";
		singername = "UNKNOWN";
		duration = Time();
		views = 0;
	}
	Song(string t, string name, int h, int m, int s, int v) {
		Title = t;
		singername = name;
		duration = Time(h, m, s);
		views = v;
	}
	/*void setTitle(string n) {
		Title = n;
	}
	void setSingername(string n) {
		singername = n;
	}
	void setTime(int h, int m, int s) {
		duration = Time(h, m, s);
	}*/
	void resetMethod() {
		Title = "-";
		singername = "UNKNOWN";
		duration = Time(0, 0, 0);
		views = 0;
	}
	
	string getTitle() {
		return Title;
	}
	int getViews() {
		return views;
	}
	void display1() {
		cout << " TITLE: " << Title << endl;
		if (views <= 999) {
			cout << " VIEWS: " << views << endl;
		}
		else if(views <= 9999) {
			cout << " VIEWS: " << views / 1000 << " K" << endl;
		}
		else if (views <= 99999) {
			cout << " VIEWS: " << views / 1000 << " K" << endl;
		}
		else if (views <= 999999) {
			cout << " VIEWS: " << views / 1000 << " K" << endl;
		}
		else if (views <= 999999999) {
			cout << " VIEWS: " << views / 1000000 << " M" << endl;
		}
		else if (views > 999999999) {
			//cout << " VIEWS: " << views / 1000000 << " B" << endl;
		}
		else
			cout << " VIEWS: ---- " << endl;
	}
	void display2() {
		cout << " " << Title << endl;
		cout << " " << singername << endl;
		duration.display();
		cout << " views: " << views << endl;
		
	}
	void display3() {
		cout << " " << Title << "  |  "<< singername << endl;
	}


};
#endif // !Songs
