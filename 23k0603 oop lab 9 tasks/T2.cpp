#include <iostream>
#include <string>

class Product
{
protected:
    std::string barcode;
    std::string name;

public:
    Product(std::string barcode = "", std::string name = "") : barcode(barcode), name(name) {}

    void setCode(std::string barcode) { this->barcode = barcode; }
    std::string getCode() { return barcode; }

    virtual void scanner()
    {
        std::cout << "Enter barcode: ";
        std::cin >> barcode;
        std::cout << "Enter name: ";
        std::cin >> name;
    }

    virtual void printer()
    {
        std::cout << "Barcode: " << barcode << "\n";
        std::cout << "Name: " << name << "\n";
    }
};

class PrepackedFood : public Product
{
private:
    double unitPrice;

public:
    PrepackedFood(std::string barcode = "", std::string name = "", double unitPrice = 0.0)
        : Product(barcode, name), unitPrice(unitPrice) {}

    // Access method
    void setUnitPrice(double price) { unitPrice = price; }
    double getUnitPrice() { return unitPrice; }

    void scanner() override
    {
        Product::scanner();
        std::cout << "Enter unit price: ";
        std::cin >> unitPrice;
    }

    void printer() override
    {
        Product::printer();
        std::cout << "Unit price: " << unitPrice << "\n";
    }
};

class FreshFood : public Product
{
private:
    double weight;
    double pricePerKilo;

public:
    FreshFood(std::string barcode = "", std::string name = "", double weight = 0.0, double pricePerKilo = 0.0)
        : Product(barcode, name), weight(weight), pricePerKilo(pricePerKilo) {}

    void setWeight(double weight) { this->weight = weight; }
    double getWeight() { return weight; }

    void setPricePerKilo(double price) { pricePerKilo = price; }
    double getPricePerKilo() { return pricePerKilo; }

    void scanner() override
    {
        Product::scanner();
        std::cout << "Enter weight: ";
        std::cin >> weight;
        std::cout << "Enter price per kilo: ";
        std::cin >> pricePerKilo;
    }

    void printer() override
    {
        Product::printer();
        std::cout << "Weight: " << weight << "\n";
        std::cout << "Price per kilo: " << pricePerKilo << "\n";
    }
};

int main()
{

    Product product1("123", "Product1");
    PrepackedFood food1("456", "Food1", 1.99);
    FreshFood fresh1("789", "Fresh1", 2.0, 0.99);

    Product product2;
    product2.scanner();

    PrepackedFood food2;
    food2.scanner();

    FreshFood fresh2;
    fresh2.scanner();

    Product product3;
    product3.setCode("000");
    product3.scanner();

    PrepackedFood food3;
    food3.setUnitPrice(2.99);
    food3.scanner();

    FreshFood fresh3;
    fresh3.setWeight(3.0);
    fresh3.setPricePerKilo(1.29);
    fresh3.scanner();

    product1.printer();
    food1.printer();
    fresh1.printer();

    product2.printer();
    food2.printer();
    fresh2.printer();

    product3.printer();
    food3.printer();
    fresh3.printer();

    return 0;
}