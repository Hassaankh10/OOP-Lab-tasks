#include <iostream>
#include <string>

using namespace std;

class RetailItem {
private:
    string description;
    int unitsOnHand;
    double price;

public:
    // Constructor
    RetailItem(string description, int unitsOnHand, double price) {
        this->description = description;
        this->unitsOnHand = unitsOnHand;
        this->price = price;
    }

    // Accessor methods
    string getDescription() const {
        return description;
    }

    int getUnitsOnHand() const {
        return unitsOnHand;
    }

    double getPrice() const {
        return price;
    }

    // Mutator methods
    void setDescription(string description) {
        this->description = description;
    }

    void setUnitsOnHand(int unitsOnHand) {
        this->unitsOnHand = unitsOnHand;
    }

    void setPrice(double price) {
        this->price = price;
    }
};

int main() {
    // Create three RetailItem objects and store the given data
    RetailItem item1("Jacket", 12, 5990.95);
    RetailItem item2("Designer Jeans", 40, 3432.95);
    RetailItem item3("Shirt", 20, 2494.95);

    // Display the data for each RetailItem object
    cout << "Item #1\t " << item1.getDescription() << "\t\t Units on Hand: " << item1.getUnitsOnHand() << "\t Price: " << item1.getPrice() << endl;
    cout << "Item #2\t " << item2.getDescription() << "\t\t Units on Hand: " << item2.getUnitsOnHand() << "\t Price: " << item2.getPrice() << endl;
    cout << "Item #3\t " << item3.getDescription() << "\t\t Units on Hand: " << item3.getUnitsOnHand() << "\t Price: " << item3.getPrice() << endl;
    return 0;
}
