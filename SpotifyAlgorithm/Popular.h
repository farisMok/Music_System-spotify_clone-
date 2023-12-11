#ifndef POPULAR_H
#define POPULAR_H
#include "Songs.h"
#include<iostream>
using namespace std;
class Popular {
private:
	Song popularSongs[5];
public:
	Popular(Song s1, Song s2, Song s3, Song s4, Song s5) {
		popularSongs[0] = s1;
		popularSongs[1] = s2;
		popularSongs[2] = s3;
		popularSongs[3] = s4;
		popularSongs[4] = s5;

	}
	void display() {
		cout << "\t    Popular Songs This Week" << endl;
		cout << "\t----------------------------------" << endl;
		int x = 1;
		for (int i = 0; i < 5; i++) {			
			cout << " " << x << ": " <<popularSongs[i].getTitle()<<endl;
			cout << endl;
			x++;
		}
		//cout << "----------------------------------" << endl;

	}
	void setPopularsong(Song s, int index) {
		popularSongs[index] = s;
	}
};
#endif // !POPULAR_H

