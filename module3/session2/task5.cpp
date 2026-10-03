#include <iostream>
using namespace std;
struct Order {
    int orderId;
    string restaurantName;
    bool isDelivered;
};
class FoodOrder {
public:
    int orderId;
    string restaurantName;
    bool isDelivered;
    FoodOrder(Order o) {
        orderId = o.orderId;
        restaurantName = o.restaurantName;
        isDelivered = o.isDelivered;
    }
    void markDelivered() {
        isDelivered = true;
        cout << "Order " << orderId << " has been delivered!" << endl;
    }
};
int main() {
    Order o;
    cout << "Enter Order ID: ";
    cin >> o.orderId;
    cout << "Enter Restaurant Name: ";
    cin >> o.restaurantName;
    o.isDelivered = false;
    FoodOrder order(o);
    order.markDelivered();
    return 0;
}
