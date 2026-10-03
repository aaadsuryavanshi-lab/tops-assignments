#include <iostream>
using namespace std;

class Content
{
    string title;
    string platform;
    int views;
    string status;

public:
    void setData(string t, string p, int v, string s)
    {
        title = t;
        platform = p;
        views = v;
        status = s;
    }

    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Platform: " << platform << endl;
        cout << "Views: " << views << endl;
        cout << "Status: " << status << endl;
    }
};

int main()
{
    Content c1;

    c1.setData("My First Video", "YouTube", 1500, "Published");

    c1.display();

    return 0;
}
