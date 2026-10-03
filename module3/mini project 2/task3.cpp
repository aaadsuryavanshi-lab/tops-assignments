#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file("content_list.txt");

    string line;
    int count = 1;

    cout << "Content List:" << endl;

    while (getline(file, line))
    {
        cout << count << ". " << line << endl;
        count++;
    }

    file.close();

    return 0;
}
