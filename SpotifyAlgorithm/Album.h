#ifndef ALBUM_H
#define ALBUM_H
#include <iostream>
#include"Singer.h"
#include "Songs.h"
#include <string>
using namespace std;

class Album {
private:
	string albumName;
	Singer singer;
	int maxSongs;
	int numberOfsongs = 0;
	Song* song;
public:
	Album() {
		albumName = "UNKNOWN";
		numberOfsongs = 0;
	}
	Album(string n, Singer s, int max) {
		albumName = n;
		singer = s;
		numberOfsongs = 0;
		maxSongs = max;
		song = new Song[maxSongs];
	}
	void addSong(Song s) {
		if (numberOfsongs++ > maxSongs) {
			cout << " ERROR" << endl;
		}
		else {
			song[numberOfsongs] = s;
		//	numberOfsongs++;
		}
	}
	void display() {
		cout << " Album: " << albumName << endl;
		cout << " By: " << singer.getSingerName() << endl;
		cout << "--------------------"<<endl;
		for (int i = 1; i <= numberOfsongs; i++) {
			song[i].display1();
			cout << "___________________________" << endl;
		}
	}
	void display2() {
		for (int i = 1; i <= numberOfsongs; i++) {
			cout<<"\t"<<i<<": " << song[i].getTitle() << endl;
		}
	}

	void display3() {
		for (int i = 1; i <= numberOfsongs; i++) {
			cout << "\t\t" ;
			song[i].display3();
			cout<< endl;
		}

	}
	string getAlbumName() {
		return albumName;
	}
	string getSingerName() {
		return singer.getSingerName();
	}
	int getNumberOfSongs() {
		return numberOfsongs;
	}

	void SearchSongName(string name) {
		for (int i = 0; i <= numberOfsongs; i++) {
			if (name == song[i].getTitle()) {
				cout << " " << song[i].getTitle() << endl;
			}
			else
				cout << "";
				//cout << " Sorry, We Couldn't find " << name << endl;
		}
	}
};

#endif // !ALBUM_H

