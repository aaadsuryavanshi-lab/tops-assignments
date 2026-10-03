#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file("insta_followers.txt");

    if (!file)
    {
        cout << "File not found!" << endl;
        return 0;
    }

    string username;
    int count = 0;

    while (getline(file, username))
    {
        count++;
    }

    file.close();

    cout << "Total Followers: " << count << endl;

    return 0;
}
