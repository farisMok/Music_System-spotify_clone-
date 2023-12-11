#ifndef SINGER_H
#define SINGER_H
#define size 10
#include<iostream>
#include <string>
using namespace std;

class Singer {
private:
	string singerName;
	int songsNum;
	int albumNumber;
	string albumName[size];
public:
	Singer() {
		singerName = "UNKNOWN";
		songsNum = 0;
		albumNumber = 0;
	}

	Singer(string n, int songN, int albumN) {
		singerName = n;
		songsNum = songN;
		albumNumber = albumN;
		//albumName = new string[albumNumber];
	}
	string getSingerName() {
		return singerName;
	}
	void display() {
		cout << " " << singerName << endl;
		cout << " ALBUMS: " << albumNumber << endl;
		cout << " SONGS: " << songsNum << endl;
	}
	//add album function

};

#endif // !SINGER_H
