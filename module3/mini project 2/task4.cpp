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
    string newStatus;

    cout << "\nEnter content number to update: ";
    cin >> choice;
    cin.ignore();

    cout << "Enter new status: ";
    getline(cin, newStatus);

    int pos = content[choice - 1].rfind("|");

    content[choice - 1] = content[choice - 1].substr(0, pos + 2) + newStatus;

    ofstream outFile("content_list.txt");

    for (int i = 0; i < count; i++)
    {
        outFile << content[i] << endl;
    }

    outFile.close();

    cout << "Status updated successfully!" << endl;

    return 0;
}
