#include <iostream>
using namespace std;
class TaskList {
public:
    string tasks[3] = {"Study", "Assignment", "Exercise"};
    bool done[3] = {false, false, false};
    void markTaskDone(int index) {
        done[index] = true;
    }
    void showTasks() {
        for(int i = 0; i < 3; i++) {
            cout << tasks[i] << " - "
                 << (done[i] ? "DONE" : "PENDING") << endl;
        }
    }
};
int main() {
    TaskList list;
    list.markTaskDone(1);
    cout << "OOP Task List:\n";
    list.showTasks();
    return 0;
}
