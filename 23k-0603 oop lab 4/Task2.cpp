#include <iostream>
#include <string>

using namespace std;

class CustomerAccount
{
private:
    string customerName;
    string typeOfAccount;
    string accountNumber;
    double currentBalance;

public:
    CustomerAccount(string name, string accountType, string accNumber, double initialBalance)
        : customerName(name), typeOfAccount(accountType), accountNumber(accNumber), currentBalance(initialBalance) {}

    string getCustomerName() const
    {
        return customerName;
    }

    string getTypeOfAccount() const
    {
        return typeOfAccount;
    }

    string getAccountNumber() const
    {
        return accountNumber;
    }

    double getCurrentBalance() const
    {
        return currentBalance;
    }
    void credit(double amount)
    {
        if (amount > 0)
        {
            currentBalance += amount;
            cout << "Credited $" << amount << ". New balance: $" << currentBalance << endl;
        }
        else
        {
            cout << "Invalid credit amount." << endl;
        }
    }
    void debit(double amount)
    {
        if (amount > 0 && amount <= currentBalance)
        {
            currentBalance -= amount;
            cout << "Debited $" << amount << ". New balance: $" << currentBalance << endl;
        }
        else
        {
            cout << "Invalid debit amount or insufficient funds." << endl;
        }
    }
};

int main()
{
    CustomerAccount account1("Alice", "Savings", "123456789", 1000.0);
    CustomerAccount account2("Bob", "Checking", "987654321", 500.0);
    CustomerAccount account3("Charlie", "Savings", "567890123", 1500.0);
    account1.credit(200.0);
    account2.debit(50.0);
    account3.credit(300.0);
    account1.debit(1200.0);
    cout << "Account 1 - Name: " << account1.getCustomerName() << ", Balance: $" << account1.getCurrentBalance() << endl;
    cout << "Account 2 - Name: " << account2.getCustomerName() << ", Balance: $" << account2.getCurrentBalance() << endl;
    cout << "Account 3 - Name: " << account3.getCustomerName() << ", Balance: $" << account3.getCurrentBalance() << endl;
    return 0;
}
