#include <iostream>
using namespace std;

class SocialMediaUser
{
protected:
    string username;
    int followers;

public:
    void setData(string name, int f)
    {
        username = name;
        followers = f;
    }

    void displayProfile()
    {
        cout << "Username: " << username << endl;
        cout << "Followers: " << followers << endl;
    }
};

class YouTuber : public SocialMediaUser
{
    string channelName;

public:
    void setChannel(string channel)
    {
        channelName = channel;
    }

    void uploadVideo(string title)
    {
        cout << "Video " << title << " uploaded to "
             << channelName << endl;
    }
};

int main()
{
    YouTuber y1;

    y1.setData("Ananya", 1500);
    y1.setChannel("Ananya Vlogs");

    y1.displayProfile();

    y1.uploadVideo("My First Vlog");

    return 0;
}
