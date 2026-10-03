#include <iostream>
using namespace std;
class Task {
public:
    string title;
    bool isDone = false;
    Task(string t) {
        title = t;
    }
    void markDone() {
        isDone = true;
    }
    void display() {
        cout << title << " - " << (isDone ? "DONE" : "PENDING") << endl;
    }
};
class TaskList {
public:
    Task* tasks[10];
    int count = 0;
    void addTask(string title) {
        tasks[count++] = new Task(title);
    }
    void markTaskDone(int index) {
        tasks[index]->markDone();
    }
    void showTasks() {
        for(int i = 0; i < count; i++)
            tasks[i]->display();
    }
};
int main() {
    TaskList list;
    list.addTask("Study");
    list.addTask("Assignment");
    list.addTask("Exercise");
    list.markTaskDone(1);
    list.showTasks();
}
