#include <iostream>
using namespace std;
class Movie
{
    string movieName;
    float rating;
public:
    Movie(string name, float r)
    {
        movieName = name;
        rating = r;
    }
    Movie(Movie &m)
    {
        movieName = m.movieName;
        rating = m.rating;
    }
    void display()
    {
        cout << "Movie Name: " << movieName << endl;
        cout << "Rating: " << rating << "/5" << endl;
    }
};
int main()
    Movie m1("Avengers", 4.5);
    Movie m2(m1);
    cout << "Original Movie:" << endl;
    m1.display();
    cout << endl;
    cout << "Copied Movie:" << endl;
    m2.display();
    return 0;
}
