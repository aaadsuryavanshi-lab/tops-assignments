#include <iostream>
using namespace std;
class FoodOrder {
public:
    int orderId;
    string restaurantName;
    bool isDelivered;
    FoodOrder(int id, string name) {
        orderId = id;
        restaurantName = name;
        isDelivered = false;
    }
    void markDelivered() {
        isDelivered = true;
        cout << "Order " << orderId << " has been delivered!" << endl;
    }
};
int main() {
    FoodOrder order(101, "Pizza Hut");
    order.markDelivered();
    return 0;
}
