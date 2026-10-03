#include <iostream>
#include <string>
using namespace std;

string tasks[5];
int taskCount = 0;

void addTask(const string &task) {
    if (taskCount < 5) {
        tasks[taskCount] = task;
        taskCount++;
    } else {
        cout << "Task list is full! Cannot add more than 5 tasks.\n";
    }
}

void printTasks() {
    cout << "\nYour Tasks:\n";
    for (int i = 0; i < taskCount; i++) {
        cout << i + 1 << ". " << tasks[i] << "\n";
    }
}

int main() {
    string input;
    int n;
    cout << "How many tasks do you want to add? (max 5): ";
    cin >> n;
    if (n < 1 || n > 5) {
        cout << "Invalid number of tasks. Please enter between 1 and 5.\n";
        return 1;
    }
    cin.ignore(); 
    for (int i = 0; i < n; i++) {
        cout << "Enter task " << i + 1 << ": ";
        getline(cin, input);
        addTask(input);
    }
    printTasks();
    return 0;
}

