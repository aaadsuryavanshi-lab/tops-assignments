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
};

class YouTuber : public SocialMediaUser
{
protected:
    string channelName;

public:
    void setChannel(string channel)
    {
        channelName = channel;
    }
};

class GamingYouTuber : public YouTuber
{
public:
    void streamGame(string gameName)
    {
        cout << username << " is now streaming "
             << gameName << " on " << channelName << endl;
    }
};

int main()
{
    GamingYouTuber g1;

    g1.setData("Ananya", 2000);
    g1.setChannel("Ananya Gaming");

    g1.streamGame("Minecraft");
    return 0;
}
