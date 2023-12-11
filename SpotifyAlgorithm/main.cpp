#include <iostream>
#include <string>
#include <algorithm>
#include"Singer.h"
#include "Songs.h"
#include"Album.h"
#include "Time.h"
#include"Popular.h"
#include"Playlist.h"
#include "Liked.h"
#include"PopularAlbums.h"
#include "Genre.h"

using namespace std;

//The strokes songs and albums
	Singer TheStrokes("The Strokes",73,6);

	Album TheNewAbnormal("The New Abnormal", TheStrokes, 10);

	Song OdeToTheMets("Ode To The Mets", TheStrokes.getSingerName(), 0, 5, 51, 43688106);
	Song Selfless("Selfless", TheStrokes.getSingerName(), 0,3,42,22698);
	Song TheAdultsAreTalking("The Adults Are Talking", TheStrokes.getSingerName(), 0, 5, 9, 185881379);
	Song EternalSummer("Eternal Summer", TheStrokes.getSingerName(), 0, 6, 16, 63100);
	Song AttheDoor("At The Door", TheStrokes.getSingerName(), 0, 5, 10, 1235444);
	Song Brooklyn("Brooklyn Bridge To Chorus", TheStrokes.getSingerName(), 0, 3, 55, 5136153);
	Song WhyAreS("Why Are Sundays So Depressing", TheStrokes.getSingerName(), 0, 4, 32, 54100);
	Song NotTheSame("Not The Same Anymore", TheStrokes.getSingerName(), 0, 5, 37, 22961548);
	Song BadDes("Bad Decision", TheStrokes.getSingerName(), 0, 4, 53, 78233);

//Arctic monkeys songs and albums
	Singer ArcticMonkeys("Arctic Monkeys", 100, 6);

	Album Am( "AM", ArcticMonkeys, 10);
	
	Song DoIwanna("DO I Wanna Know?", ArcticMonkeys.getSingerName(), 0, 4, 32, 890000);
	Song RUMine("R U Mine?", ArcticMonkeys.getSingerName(), 0, 3, 21, 500000);
	Song Arabella("Arabella", ArcticMonkeys.getSingerName(), 0, 3, 27, 987000);
	Song OneForTheRoad("One For The Road", ArcticMonkeys.getSingerName(), 0, 3, 26, 869000);
	Song No1Party("No. 1 Party Anthem", ArcticMonkeys.getSingerName(), 0, 4, 3, 78000);
	Song WhydYouCall("Why'd You Call Me When You're High?", ArcticMonkeys.getSingerName(), 0, 2, 41, 970000);
	Song KneeSocks("Knee Socks", ArcticMonkeys.getSingerName(), 0, 4, 17, 9500000);
	Song IWannaBeYours("I Wanna Be Yours", ArcticMonkeys.getSingerName(), 0, 3, 3, 990000);

//Queen songs and albums
	Singer Queen("Queen", 150, 9);

	Album NightAtOpera("A Night At The Opera", Queen, 7);

	Song Bohemian("Bohemian Rhapsody", Queen.getSingerName(), 0, 5, 54, 1234000000);
	Song Killer("Killer Queen", Queen.getSingerName(), 0, 4, 23, 897000);
	Song DontStop("Don't Stop Me Now", Queen.getSingerName(), 0, 4, 12, 78000);
	Song DeathOnTwo("Death On Two Legs", Queen.getSingerName(), 0, 3, 43, 37000);
	Song SombodyTolove("Somebody To Love", Queen.getSingerName(), 0, 4, 56, 899000);
	

int main() {
	//adding The new abnormal songs
	TheNewAbnormal.addSong(OdeToTheMets);
	TheNewAbnormal.addSong(Selfless);
	TheNewAbnormal.addSong(TheAdultsAreTalking);
	TheNewAbnormal.addSong(EternalSummer);
	TheNewAbnormal.addSong(AttheDoor);
	TheNewAbnormal.addSong(Brooklyn);
	TheNewAbnormal.addSong(WhyAreS);
	TheNewAbnormal.addSong(NotTheSame);
	TheNewAbnormal.addSong(BadDes);

	//adding AM songs
	Am.addSong(DoIwanna);
	Am.addSong(RUMine);
	Am.addSong(Arabella);
	Am.addSong(OneForTheRoad);
	Am.addSong(No1Party);
	Am.addSong(WhydYouCall);
	Am.addSong(KneeSocks);
	Am.addSong(IWannaBeYours);

	//adding Queen songs
	NightAtOpera.addSong(Bohemian);
	NightAtOpera.addSong(Killer);
	NightAtOpera.addSong(DontStop);
	NightAtOpera.addSong(DeathOnTwo);
	NightAtOpera.addSong(SombodyTolove);

	//Setting Popular songs of the week
	Popular popularSongs (OdeToTheMets, Arabella, DontStop, KneeSocks, AttheDoor);
	
	//Setting Popular albums of the week
	PopAlbum popularAlbums(TheNewAbnormal, Am, NightAtOpera);

	//creating Rock genre
	Genre Rock;

	//adding Rock albums to Rock Genre 
	Rock.addAlbumGenre(TheNewAbnormal);
	Rock.addAlbumGenre(Am);
	Rock.addAlbumGenre(NightAtOpera);

	Liked liked;

	int choise = 10;
	cout << "\n\t\t Spotify Clone" << endl;
	cout<<"\t--------------------------------------" << endl;
	while (choise != 0) {
		cout << " 1: Popular Songs Of The Week " << endl;
		cout << " 2: Popular Albums Of The Week" << endl;
		cout << " 3: My Playlist" << endl;
		cout << " 4: Liked" << endl;
		cout << " 5: All Songs" << endl;
		cout << " 0: EXIT" << endl;
			cin >> choise;
		switch (choise) {
		case 1:
			popularSongs.display();
			cout << "\t Enter The Song's Number To Add It In Liked" << endl;
			cout << "\t 0: EXIT" << endl;
			int popularSong;
			cin >> popularSong;
			switch (popularSong) {
			case 1:
				liked.addtoliked(OdeToTheMets);
				break;
			case 2:
				liked.addtoliked(Arabella);
				break;
			case 3:
				liked.addtoliked(DontStop);
				break;
			case 4:
				liked.addtoliked(KneeSocks);
				break;
			case 5:
				liked.addtoliked(AttheDoor);
				break;
			default:
				break;
			}
			break;// case 1 break
		case 2:
			popularAlbums.displayAlbumName();
			cout << "\t Enter The Album's Number To See Their Songs" << endl;
			cout << "\t 0: EXIT" << endl;
			int albmChoise;
			cin >> albmChoise;
			switch (albmChoise) {
			case 1:
				TheNewAbnormal.display2();
				cout << "-----------------------------------------" << endl;
				cout << " Enter The Song's Number To Add It To Liked" << endl;
				int num;
				cin >> num;
				switch (num) {
				case 1:
					liked.addtoliked(OdeToTheMets);
					break;
				case 2:
					liked.addtoliked(Selfless);
					break;
				case 3:
					liked.addtoliked(TheAdultsAreTalking);
					break;
				case 4:
					liked.addtoliked(EternalSummer);
					break;
				case 5:
					liked.addtoliked(AttheDoor);
					break;
				case 6:
					liked.addtoliked(Brooklyn);
					break;
				case 7:
					liked.addtoliked(WhyAreS);
					break;
				case 8:
					liked.addtoliked(NotTheSame);
					break;
				case 9:
					liked.addtoliked(BadDes);
					break;
				default:
					break;
				}
				break; //New abnormal album switch case
			case 2:
				Am.display2();
				cout << "-----------------------------------------" << endl;
				cout << " Enter The Song's Number To Add It To Liked" << endl;
				int Amnum;
				cin >> Amnum;
				switch (Amnum) {
				case 1:
					liked.addtoliked(DoIwanna);
					break;
				case 2:
					liked.addtoliked(RUMine);
					break;
				case 3:
					liked.addtoliked(Arabella);
					break;
				case 4:
					liked.addtoliked(OneForTheRoad);
					break;
				case 5:
					liked.addtoliked(No1Party);
					break;
				case 6:
					liked.addtoliked(WhydYouCall);
					break;
				case 7:
					liked.addtoliked(KneeSocks);
					break;
				case 8:
					liked.addtoliked(IWannaBeYours);
					break;
				default:
					break;
				}
				break;//Am Album switch case
			case 3:
				NightAtOpera.display2();
				cout << "-----------------------------------------" << endl;
				cout << " Enter The Song's Number To Add It To Liked" << endl;
				int NightAl;
				cin >> NightAl;
				switch (NightAl) {
				case 1:
					liked.addtoliked(Bohemian);
					break;
				case 2:
					liked.addtoliked(Killer);
					break;
				case 3:
					liked.addtoliked(DontStop);
					break;
				case 4:
					liked.addtoliked(DeathOnTwo);
					break;
				case 5:
					liked.addtoliked(SombodyTolove);
					break;
				default:
					break;
				}
				break;//Night at Opera album switch case
			}
			break;// case 2 break
		case 3: {
			static Playlist myPlaylist;
			int PlaylistChoise;
			cout << " 1: Add Song" << endl;
			cout << " 2: Show " << myPlaylist.getName() << endl;
			cin >> PlaylistChoise;
			switch (PlaylistChoise) {
			case 1:
				cout << " 1: Show albums " << endl;
				cout << " 2: Show All Songs" << endl;
				int s;
				cin >> s;
				switch (s) {
				case 1:
					cout << " 1: " << TheNewAbnormal.getAlbumName() << "  |  " << TheNewAbnormal.getSingerName() << endl;
					cout << " 2: " << Am.getAlbumName() << "  |  " << Am.getSingerName() << endl;
					cout << " 3: " << NightAtOpera.getAlbumName() << "  |  " << NightAtOpera.getSingerName() << endl;
					cout << " 0: EXIT" << endl;
					int P;
					cin >> P;
					switch (P) {
					case 1:
						TheNewAbnormal.display2();
						cout << "\n 0: EXIT" << endl;
						cout << endl;
						int newAbnnormalChoice;
						cin >> newAbnnormalChoice;
						switch (newAbnnormalChoice) {
						case 1:
							myPlaylist.addtoPlaylist(OdeToTheMets);
							break;
						case 2:
							myPlaylist.addtoPlaylist(Selfless);
							break;
						case 3:
							myPlaylist.addtoPlaylist(TheAdultsAreTalking);
							break;
						case 4:
							myPlaylist.addtoPlaylist(EternalSummer);
							break;
						case 5:
							myPlaylist.addtoPlaylist(AttheDoor);
							break;
						case 6:
							myPlaylist.addtoPlaylist(Brooklyn);
							break;
						case 7:
							myPlaylist.addtoPlaylist(WhyAreS);
							break;
						case 8:
							myPlaylist.addtoPlaylist(NotTheSame);
							break;
						case 9:
							myPlaylist.addtoPlaylist(BadDes);
							break;
						default:
							break;
						}
						break; //P case 1 break

					case 2:
						Am.display2();
						cout << "\n 0: EXIT" << endl << endl;
						int AMPLAY;
						cin >> AMPLAY;
						switch (AMPLAY) {
						case 1:
							myPlaylist.addtoPlaylist(DoIwanna);
							break;
						case 2:
							myPlaylist.addtoPlaylist(RUMine);
							break;
						case 3:
							myPlaylist.addtoPlaylist(Arabella);
							break;
						case 4:
							myPlaylist.addtoPlaylist(OneForTheRoad);
							break;
						case 5:
							myPlaylist.addtoPlaylist(No1Party);
							break;
						case 6:
							myPlaylist.addtoPlaylist(WhydYouCall);
							break;
						case 7:
							myPlaylist.addtoPlaylist(KneeSocks);
							break;
						case 8:
							myPlaylist.addtoPlaylist(IWannaBeYours);
							break;
						default:
							break;
						}
						break; // P case 2 break
					case 3:
						NightAtOpera.display2();
						cout << "\n 0: EXIT" << endl << endl;
						int NAPLay;
						cin >> NAPLay;
						switch (NAPLay) {
						case 1:
							myPlaylist.addtoPlaylist(Bohemian);
							break;
						case 2:
							myPlaylist.addtoPlaylist(Killer);
							break;
						case 3:
							myPlaylist.addtoPlaylist(DontStop);
							break;
						case 4:
							myPlaylist.addtoPlaylist(DeathOnTwo);
							break;
						case 5:
							myPlaylist.addtoPlaylist(SombodyTolove);
							break;
						default:
							break;
						}
						break;// P case 3 break
					}
					break; //case 1 shwoing albums
				case 2:
					Rock.display2();
					cout << "\n Enter The Number Where The Song You Are Looking to at" << endl;
					int allSong;
					cin >> allSong;
					switch (allSong) {
					case 1:
						TheNewAbnormal.display2();
						cout << "\n 0: EXIT" << endl;
						cout << endl;
						int newAbnnormalChoice;
						cin >> newAbnnormalChoice;
						switch (newAbnnormalChoice) {
						case 1:
							myPlaylist.addtoPlaylist(OdeToTheMets);
							break;
						case 2:
							myPlaylist.addtoPlaylist(Selfless);
							break;
						case 3:
							myPlaylist.addtoPlaylist(TheAdultsAreTalking);
							break;
						case 4:
							myPlaylist.addtoPlaylist(EternalSummer);
							break;
						case 5:
							myPlaylist.addtoPlaylist(AttheDoor);
							break;
						case 6:
							myPlaylist.addtoPlaylist(Brooklyn);
							break;
						case 7:
							myPlaylist.addtoPlaylist(WhyAreS);
							break;
						case 8:
							myPlaylist.addtoPlaylist(NotTheSame);
							break;
						case 9:
							myPlaylist.addtoPlaylist(BadDes);
							break;
						default:
							break;
						}
						break; //The Strokes all song phase
					case 2:
						Am.display2();
						cout << "\n 0: EXIT" << endl << endl;
						int AMPLAY;
						cin >> AMPLAY;
						switch (AMPLAY) {
						case 1:
							myPlaylist.addtoPlaylist(DoIwanna);
							break;
						case 2:
							myPlaylist.addtoPlaylist(RUMine);
							break;
						case 3:
							myPlaylist.addtoPlaylist(Arabella);
							break;
						case 4:
							myPlaylist.addtoPlaylist(OneForTheRoad);
							break;
						case 5:
							myPlaylist.addtoPlaylist(No1Party);
							break;
						case 6:
							myPlaylist.addtoPlaylist(WhydYouCall);
							break;
						case 7:
							myPlaylist.addtoPlaylist(KneeSocks);
							break;
						case 8:
							myPlaylist.addtoPlaylist(IWannaBeYours);
							break;
						default:
							break;
						}
						break; // AM all song phase

					case 3:
						NightAtOpera.display2();
						cout << "\n 0: EXIT" << endl << endl;
						int NAPLay;
						cin >> NAPLay;
						switch (NAPLay) {
						case 1:
							myPlaylist.addtoPlaylist(Bohemian);
							break;
						case 2:
							myPlaylist.addtoPlaylist(Killer);
							break;
						case 3:
							myPlaylist.addtoPlaylist(DontStop);
							break;
						case 4:
							myPlaylist.addtoPlaylist(DeathOnTwo);
							break;
						case 5:
							myPlaylist.addtoPlaylist(SombodyTolove);
							break;
						default:
							break;
						}
						break; // Night at the opera song phase

					default:
						break;
					}

					break; //case 2 Showing all songs
				}


				break; //add to playlist break
			case 2:
				myPlaylist.displayPlaylist();
				cout << endl;
				cout << "   Enter The Song's Number If You Want To Remove It From " << myPlaylist.getName() << endl;
				int RemoveIndex;
				cin >> RemoveIndex;
				switch (RemoveIndex) {
				case 1:
					myPlaylist.removePlaylist(1);
					break;
				case 2:
					myPlaylist.removePlaylist(2);
					break;
				case 3:
					myPlaylist.removePlaylist(3);
					break;
				case 4:
					myPlaylist.removePlaylist(4);
					break;
				case 5:
					myPlaylist.removePlaylist(5);
					break;
				case 6:
					myPlaylist.removePlaylist(6);
					break;
				case 7:
					myPlaylist.removePlaylist(7);
					break;
				case 8:
					myPlaylist.removePlaylist(8);
					break;
				case 9:
					myPlaylist.removePlaylist(9);
					break;
				default:
					break;

				}
				break; //show playlist break
			}
			break; //case 3 switch break
		}
		case 4:
			liked.displayLiked();
			cout << endl;
			cout << " Enter Song's Number To Remove It From Liked" << endl;
			int removeLiked;
			cin >> removeLiked;
			switch (removeLiked) {
			case 1:
				liked.removeLiked(1);
				break;
			case 2:
				liked.removeLiked(2);
				break;
			case 3:
				liked.removeLiked(3);
				break;
			case 4:
				liked.removeLiked(4);
				break;
			case 5:
				liked.removeLiked(5);
				break;
			case 6:
				liked.removeLiked(6);
				break;
			case 7:
				liked.removeLiked(7);
				break;
			case 8:
				liked.removeLiked(8);
				break;
			case 9:
				liked.removeLiked(9);
				break;
			default :
				break;
			}
			break;//case 4 switch break
	

		case 5:
			Rock.display2();
			cout << "\n Enter The Number Where The Song You Are Looking to at" << endl;
			int allSong;
			cin >> allSong;
			switch (allSong) {
			case 1:
				cout << "-----------------------------------------" << endl;
				cout << " Enter The Song's Number To Add It To Liked\n" << endl;
				TheNewAbnormal.display2();
				cout << "\n 0: EXIT" << endl;
				cout << endl;
				int newAbnnormalChoice;
				cin >> newAbnnormalChoice;
				switch (newAbnnormalChoice) {
				case 1:
					liked.addtoliked(OdeToTheMets);
					break;
				case 2:
					liked.addtoliked(Selfless);
					break;
				case 3:
					liked.addtoliked(TheAdultsAreTalking);
					break;
				case 4:
					liked.addtoliked(EternalSummer);
					break;
				case 5:
					liked.addtoliked(AttheDoor);
					break;
				case 6:
					liked.addtoliked(Brooklyn);
					break;
				case 7:
					liked.addtoliked(WhyAreS);
					break;
				case 8:
					liked.addtoliked(NotTheSame);
					break;
				case 9:
					liked.addtoliked(BadDes);
					break;
				default:
					break;
				}
				break; //The Strokes all song phase
			case 2:
				cout << "-----------------------------------------" << endl;
				cout << " Enter The Song's Number To Add It To Liked\n" << endl;
				Am.display2();
				cout << "\n 0: EXIT" << endl << endl;
				int AMPLAY;
				cin >> AMPLAY;
				switch (AMPLAY) {
				case 1:
					liked.addtoliked(DoIwanna);
					break;
				case 2:
					liked.addtoliked(RUMine);
					break;
				case 3:
					liked.addtoliked(Arabella);
					break;
				case 4:
					liked.addtoliked(OneForTheRoad);
					break;
				case 5:
					liked.addtoliked(No1Party);
					break;
				case 6:
					liked.addtoliked(WhydYouCall);
					break;
				case 7:
					liked.addtoliked(KneeSocks);
					break;
				case 8:
					liked.addtoliked(IWannaBeYours);
					break;
				default:
					break;
				}
				break; // AM all song phase

			case 3:
				cout << "-----------------------------------------" << endl;
				cout << " Enter The Song's Number To Add It To Liked\n" << endl;
				NightAtOpera.display2();
				cout << "\n 0: EXIT" << endl << endl;
				int NAPLay;
				cin >> NAPLay;
				switch (NAPLay) {
				case 1:
					liked.addtoliked(Bohemian);
					break;
				case 2:
					liked.addtoliked(Killer);
					break;
				case 3:
					liked.addtoliked(DontStop);
					break;
				case 4:
					liked.addtoliked(DeathOnTwo);
					break;
				case 5:
					liked.addtoliked(SombodyTolove);
					break;
				default:
					break;
				}
				break; // Night at the opera song phase

			default:
				break;
			}
		}
	}

}
