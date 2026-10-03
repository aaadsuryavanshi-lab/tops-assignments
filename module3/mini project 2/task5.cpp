#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file("content_list.txt");

    string content[50];
    int count = 0;

    while (getline(file, content[count]))
    {
        count++;
    }

    file.close();

    cout << "Content List:" << endl;

    for (int i = 0; i < count; i++)
    {
        cout << i + 1 << ". " << content[i] << endl;
    }

    int choice;

    cout << "\nEnter content number to delete: ";
    cin >> choice;

    ofstream outFile("content_list.txt");

    for (int i = 0; i < count; i++)
    {
        if (i != choice - 1)
        {
            outFile << content[i] << endl;
        }
    }

    outFile.close();

    cout << "\nUpdated Content List:" << endl;

    for (int i = 0; i < count; i++)
    {
        if (i != choice - 1)
        {
            cout << i + 1 << ". " << content[i] << endl;
        }
    }

    cout << "Content deleted successfully!" << endl;

    return 0;
}
