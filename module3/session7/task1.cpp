#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("my_fav_songs.txt");

    file << "Perfect" << endl;
    file << "Shape of You" << endl;
    file << "Believer" << endl;
    file << "Faded" << endl;
    file << "Let Me Love You" << endl;

    file.close();

    cout << "Songs saved successfully!" << endl;

    return 0;
}
