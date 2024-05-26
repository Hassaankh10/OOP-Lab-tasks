#include <iostream>
using namespace std;

class Payroll
{
private:
    int employeeId[7] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
    int hours[7];
    double payRate[7];
    double wages[7];

public:
    void sethours(int h, int i)
    {
        this->hours[i] = h;
    }
    void setpayrate(double p, int i)
    {
        this->payRate[i] = p;
    }
    void setwage(double p, int h, int i)
    {
        this->wages[i] = payRate[i] * hours[i] * 30;
    }
    void display(int i)
    {
        cout << "EmployeeID :" << employeeId[i] << endl;
        cout << "hours :" << hours[i] << endl;
        cout << "Payrate :" << payRate[i] << endl;
        cout << "Wage :" << wages[i] << endl;
    }
};

int main()
{
    Payroll c[7];
    for (int i = 0; i < 7; i++)
    {
        int h;
        double p;
        cout << "Enter hours for employee " << i << endl;
        cin >> h;
        cout << "enter the payrate for employee " << i << endl;
        cin >> p;
        c[i].sethours(h, i);
        c[i].setpayrate(p, i);
        c[i].setwage(p, h, i);
    }
    for (int i = 0; i < 7; i++)
    {
        cout << "here is the detail of employee" << i << endl;
        c[i].display(i);
    }

    return 0;
}
