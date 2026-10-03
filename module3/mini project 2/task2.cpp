#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("content_list.txt", ios::app);

    string title, platform, status;
    int views;

    cout << "Enter content title: ";
    getline(cin, title);

    cout << "Enter platform: ";
    getline(cin, platform);

    cout << "Enter views: ";
    cin >> views;
    cin.ignore();

    cout << "Enter status: ";
    getline(cin, status);

    file << title << " | " << platform << " | "
         << views << " | " << status << endl;

    file.close();

    cout << "Content saved successfully!" << endl;

    return 0;
}
