#include <iostream>
using namespace std;

class SocialMediaUploader
{
public:
    virtual void uploadContent()
    {
        cout << "Uploading content..." << endl;
    }
};

class InstagramUploader : public SocialMediaUploader
{
public:
    void uploadContent()
    {
        cout << "Uploading photo or reel on Instagram" << endl;
    }
};

class YouTubeUploader : public SocialMediaUploader
{
public:
    void uploadContent()
    {
        cout << "Uploading video on YouTube" << endl;
    }
};

int main()
{
    InstagramUploader i1;
    YouTubeUploader y1;

    i1.uploadContent();
    y1.uploadContent();

    return 0;
}
