#include <iostream>
using namespace std;
class Playlist {
public:
    string name;
    string createdOn;
    bool isPublic;
    Playlist(string n, string date, bool p) {
        name = n;
        createdOn = date;
        isPublic = p;
    }
    void togglePublic() {
        isPublic = !isPublic;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Public: " << (isPublic ? "Yes" : "No") << endl;
    }
};
int main() {
    Playlist p("My Songs", "19-09-2026", true);
    p.display();
    p.togglePublic();
    p.display();
    p.togglePublic();
    p.display();
    return 0;
}
