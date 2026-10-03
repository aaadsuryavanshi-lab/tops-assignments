#include <iostream>
using namespace std;

class Flipkart
{
public:
    void searchProduct(string productName)
    {
        cout << "Searching for: " << productName << endl;
    }

    void searchProduct(string productName, string category)
    {
        cout << "Searching for: " << productName
             << " in " << category << " category" << endl;
    }
};

int main()
{
    Flipkart f1;

    f1.searchProduct("Laptop");
    f1.searchProduct("Shoes", "Fashion");

    return 0;
}
