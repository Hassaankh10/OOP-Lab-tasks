#include <iostream>
#include <string>
using namespace std;

class RestaurantMeal {
protected:
    string itemName;
    double itemPrice;

public:
    RestaurantMeal(string name, double price) : itemName(name), itemPrice(price) {}

    void display() const {
        cout << "Restaurant Meal: " << itemName << ", Price: Rs. " << itemPrice << endl;
    }

    double getPrice() const {
        return itemPrice;
    }
};

class HotelService {
protected:
    string serviceName;
    double serviceFee;
    int roomNumber;

public:
    HotelService(string name, double fee, int room) : serviceName(name), serviceFee(fee), roomNumber(room) {}

    void display() const {
        cout << "Hotel Service: " << serviceName << ", Fee: Rs. " << serviceFee << ", Room Number: " << roomNumber << endl;
    }

    double getFee() const {
        return serviceFee;
    }
};

class RoomServiceMeal : public RestaurantMeal, public HotelService {
public:
    RoomServiceMeal(string name, double price, int roomNumber)
        : RestaurantMeal(name, price), HotelService("room service", 400.0, roomNumber) {}

    void display() const {
        cout << "Room Service Meal: " << endl;
        RestaurantMeal::display();
        HotelService::display();
        double totalPrice = getPrice() + getFee();
        cout << "Total Cost: Rs. " << totalPrice << endl;
    }
};

int main() {
    RoomServiceMeal meal("Steak Dinner", 2000.0, 1202);
    meal.display();

    return 0;
}
