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

class Podcaster : public SocialMediaUser
{
    string podcastName;

public:
    void setPodcast(string name)
    {
        podcastName = name;
    }

    void publishEpisode(string episodeTitle)
    {
        cout << "Episode " << episodeTitle << " published on "
             << podcastName << endl;
    }
};

int main()
{
    Podcaster p1;

    p1.setData("Ananya", 2000);
    p1.setPodcast("Ananya Talks");

    p1.publishEpisode("My First Episode");

    return 0;
}
