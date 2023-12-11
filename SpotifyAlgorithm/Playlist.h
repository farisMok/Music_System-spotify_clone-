#ifndef PLAYLIST_H
#define PLAYLIST_H
#include <string>
#include<iostream>
#include"Songs.h"
using namespace std;

class Playlist {
private:
	string name;
	int maxS;
	int currentsong = 0;
	Song* song;
public:

	Playlist() {
		cout << " ENTER PLAYLIST NAME: ";
		cin >> name;
		maxS = 10;
		song = new Song[maxS];
	}
	void addtoPlaylist(Song s) {
		if (currentsong++ > maxS) {
			cout << " ERROR" << endl;
		}
		else {
			song[currentsong] = s;
			cout << "\t " << s.getTitle() << " Is Added To Your Playlist\n" << endl;
		}
	}
	void removePlaylist(int index) {
		if (currentsong-- < 0) {
			cout << "ERROR" << endl;
		}
		else {
			cout << "\t " << song[index].getTitle() << " Has Been Removed From Your Playlist\n" << endl;
			song[index].resetMethod();

		}
	}
	int getCurrent() {
		return currentsong;
	}
	string getName() {
		return name;
	}
	void displayPlaylist() {
		cout << "\t" << name << ":-" << endl;
		for (int i = 1; i < maxS; i++) {
			if (song[i].getViews() != 0) {
				cout << "\t  " << i << ": ";
				song[i].display3();
			}
			else if (song[i].getViews() == 0) {
				cout << "";
			}
			
		}
	}
};
#endif // !PLAYLIST_H

