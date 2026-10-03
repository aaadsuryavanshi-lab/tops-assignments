#include <iostream>
using namespace std;
class Playlist {
public:
    string name;
    string songs[10];
    int count = 0;
    Playlist(string n) {
        name = n;
    }
    void addSong(string songTitle) {
        songs[count++] = songTitle;
    }
    void displaySongs() {
        cout << "Songs List:" << endl;
        for(int i = 0; i < count; i++)
            cout << songs[i] << endl;
    }
};
int main() {
    Playlist p("My Playlist");
    p.addSong("Perfect");
    p.addSong("Shape of You");
    p.addSong("Believer");
    p.displaySongs();
    return 0;
}
