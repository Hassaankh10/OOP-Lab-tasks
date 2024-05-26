#include <iostream>
#include <string>

using namespace std;

class Employee {
protected:
    string fullName;
    int employeeID;

public:
    Employee(string fullName, int employeeID)
        : fullName(fullName), employeeID(employeeID) {}

    virtual double calculateSalary() = 0;
    virtual void recordWorkHours(double regularHours, double overtimeHours,
                                  double vacationHours, double sickHours) = 0;

    virtual void printDetails() {
        cout << "Full Name: " << fullName << " ,Employee ID: " << employeeID
             << endl;
    }
};

class HourlyEmployee : public Employee {
private:
    double hourlyRate;
    double regularHours;
    double overtimeHours;
    double vacationHours;
    double sickLeaveHours;
    bool isPresent;

public:
    HourlyEmployee(string fullName, int employeeID, double hourlyRate)
        : Employee(fullName, employeeID), hourlyRate(hourlyRate),
          regularHours(0), overtimeHours(0), vacationHours(0), sickLeaveHours(0),
          isPresent(true) {}

    double calculateSalary() override {
        double total =
            (regularHours * hourlyRate) + (overtimeHours * hourlyRate * 1.5);
        return total;
    }

    void recordWorkHours(double regular, double overtime, double vacation,
                         double sick) override {
        regularHours = regular;
        overtimeHours = overtime;
        vacationHours = vacation;
        sickLeaveHours = sick;
    }

    void printDetails() override {
        Employee::printDetails();
        cout << "Hourly Rate: " << hourlyRate
             << " ,Regular Hours: " << regularHours
             << " ,Overtime Hours: " << overtimeHours << endl;
    }
};

class PayrollSystem {
public:
    void processPayroll(Employee &emp) {
        emp.printDetails();
        cout << "Salary: " << emp.calculateSalary() << endl;
    }
};

int main() {
    HourlyEmployee employee("Me", 1231, 20);
    employee.recordWorkHours(50, 4, 15, 1);
    PayrollSystem system;
    system.processPayroll(employee);
}