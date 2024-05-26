#include <iostream>
using namespace std;
class vehicle
{
private:
    string Type, Model;
    int ManufactureYear;

public:
    void set(string typ, string model, int yr)
    {
        this->ManufactureYear = yr;
        this->Type = typ;
        this->Model = model;
    }
    void display()
    {
        cout << "The vehicle Type : " << Type << endl;
        cout << "The vehicle Model : " << Model << endl;
        cout << "The vehicle Manufacture Year : " << ManufactureYear << endl;
    }
};
int main()
{
    vehicle a1, a2, a3;
    a1.set("Car", "AA067", 2000);
    a1.display();
    a2.set("Truck"," FA603", 2017);
    a2.display();
    a3.set("Helicopter"," IBBU7869", 2004);
    a3.display();
    return 0;
}