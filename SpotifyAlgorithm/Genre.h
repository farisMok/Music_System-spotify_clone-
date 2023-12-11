#ifndef GENRE_H
#define GENRE_H
#include"Album.h"
#include<iostream>
using namespace std;

class Genre {
private:
	int max;
	int current=0;
	Album* albums;
public:
	Genre() {
		max = 10;
		current = 0;
		albums = new Album[max];
	}
	void display() {
		for (int i = 0; i < max; i++) {
			albums[i].display2();
		}
	}
	void display2() {
		int x = 1;
		for (int i = 0; i < current; i++) {
			cout << "\t" << x << ":- "<<endl;
			albums[i].display3();
				 cout<< endl;
				 x++;
		}
	}
	void addAlbumGenre(Album& a) {
		if (current > max) {
			cout << "ERROR" << endl;
		}
		else {
			albums[current] = a;
			current++;
		}
	}
	//void Search(string name) {
	//	for (int i = 0; i < max; i++) {
	//		if(albums[i].)
	//	}
	//}

};
#endif // !GENRE_H
