#include <iostream>
using namespace std;

class SocialMediaUser
{
    string username;
    int followers;

public:
    void displayProfile()
    {
        cout << "Username: " << username << endl;
        cout << "Followers: " << followers << endl;
    }

    void setData(string name, int f)
    {
        username = name;
        followers = f;
    }
};

int main()
{
    SocialMediaUser user1;

    user1.setData("Ananya", 1500);

    user1.displayProfile();

    return 0;
}
