#include <iostream>
using namespace std;

class SocialMediaUser
{
protected:
    string username;

public:
    void setData(string name)
    {
        username = name;
    }
};

class InstagramInfluencer : public SocialMediaUser
{
public:
    void postStory(string storyTitle)
    {
        cout << username << " posted a new story: "
             << storyTitle << endl;
    }
};

int main()
{
    InstagramInfluencer i1;

    i1.setData("Ananya");

    i1.postStory("My New Story");

    return 0;
}
