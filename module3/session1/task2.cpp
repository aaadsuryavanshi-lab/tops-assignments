#include <iostream>
using namespace std;

string task[5] = {
    "Study",
    "Complete Assignment",
    "Go to College",
    "Exercise",
    "Read Book"
};

string status[5] = {
    "PENDING",
    "PENDING",
    "PENDING",
    "PENDING",
    "PENDING"
};
void markTaskDone(int index)
{
    status[index] = "DONE";
}
int main()
{
    cout << "Task List:\n";
    for(int i = 0; i < 5; i++)
    {
        cout << i + 1 << ". " << task[i]
             << " - " << status[i] << endl;
    }
    markTaskDone(1);
    cout << "\nUpdated Task List:\n";
    for(int i = 0; i < 5; i++)
    {
        cout << i + 1 << ". " << task[i]
             << " - " << status[i] << endl;
    }
}
