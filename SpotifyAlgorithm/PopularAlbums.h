#ifndef POPULARALBUMS_H
#define POPULARALBUMS_H
#include <iostream>
#include "Album.h"
using namespace std;

class PopAlbum {
private:
	Album album[3];
public:
	PopAlbum(Album a1, Album a2, Album a3) {
		album[0] = a1;
		album[1] = a2;
		album[2] = a3;
		}
	void displayAlbumName() {
		cout << " \t   Popular Albums This Week:- " << endl;
		cout << "\t----------------------------------" << endl;
		int x = 1;
		for (int i = 0; i < 3; i++) {
			cout<<" "<<x<<": " << album[i].getAlbumName() << " | "<<album[i].getSingerName() << endl;
			cout << endl;
			x++;
		}
	}
	void setPopAlbum(Album a, int index) {
		album[index] = a;
	}
};
#endif // !POPULARALBUMS_H
