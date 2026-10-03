#include <iostream>
using namespace std;
class Playlist
{
    string playlistName;
public:
    Playlist()
    {
        playlistName = "My Favourites";
        cout << "Welcome to " << playlistName << " Playlist!" << endl;
    }
};
int main()
{
    Playlist p1;
    return 0;
}
