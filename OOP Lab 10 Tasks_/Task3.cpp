#include <iostream>
using namespace std;

class Furniture {
    string name;
    int price;
    int quantity;

public:
    Furniture() {}
    Furniture(string n, int p, int q) : name(n), price(p), quantity(q) {}

    // Overload the + operator
    Furniture operator+(const Furniture &f1) {
        Furniture result;
        result.name = name + " and " + f1.name;
        result.price = price + f1.price;
        result.quantity = (quantity <= f1.quantity) ? quantity : f1.quantity;
        return result;
    }

    void display() {
        cout << "Name of the furniture is: " << name << endl;
        cout << "Price of the furniture is: " << price << endl;
        cout << "Quantity of the furniture is: " << quantity << endl;
    }
};

int main() {
    Furniture f("Wooden Chair", 50, 10);
    Furniture f1("Glass Table", 100, 20);
    
    Furniture combined = f + f1;
    combined.display();

    return 0;
}
