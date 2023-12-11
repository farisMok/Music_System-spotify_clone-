#ifndef LIKED_H
#define LIKED_H
#include "Songs.h"
#include <iostream>
#include <algorithm>
using namespace std;
class Liked {
private:
	int maxSongs;
	int currentSong = 0;
	Song* s;
public:
	Liked() {
		maxSongs = 10;
		s = new Song[maxSongs];
	}
	void addtoliked(Song song) {
		if (currentSong++ > maxSongs) {
			cout << " ERROR" << endl;
		}
		else {
			s[currentSong] = song;
		}
	}
	void removeLiked(int index) {
		if (currentSong-- < 0) {
			cout << "ERROR" << endl;
		}
		else {
			s[index].resetMethod();
		}
		
	}
	void displayLiked() {
		cout << " LIKES:-" << endl;
		for (int i = 1; i < maxSongs; i++) {
			if (s[i].getViews() != 0) {
				s[i].display3();
			}
			else if (s[i].getViews() == 0) {
				cout<<"";
			}
			//cout << endl;
		}
	}
};
#endif // !LIKED_H
