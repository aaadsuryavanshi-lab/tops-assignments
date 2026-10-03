#include <iostream>
using namespace std;

class Task
{
public:
    string title;
    bool isDone;
    Task(string t)
    {
        title = t;
        isDone = false;
    }
    void markDone()
    {
        isDone = true;
    }
    void display()
    {
        cout << title << " - ";
        if(isDone)
            cout << "DONE" << endl;
        else
            cout << "PENDING" << endl;
    }
};
int main()
{
    Task t1("Complete Assignment");
    t1.display();
    t1.markDone();
    t1.display();
}
