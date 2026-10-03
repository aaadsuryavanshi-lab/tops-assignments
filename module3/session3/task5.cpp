#include <iostream>
#include <fstream>
using namespace std;

class Playlist
{
    string playlistName;

public:
    Playlist()
    {
        playlistName = "My Favourites";
        cout << "Playlist created: " << playlistName << endl;
    }

    ~Playlist()
    {
        ofstream file("autosave.txt");

        file << playlistName;

        file.close();

        cout << "Playlist auto-saved!" << endl;
    }
};

int main()
{
    Playlist p1;

    return 0;
}
