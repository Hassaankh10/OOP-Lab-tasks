#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter the nnumber you want to find if it is prime or not\n";
    cin >> num;
    if ((num % 2 != 0 && num % 3 != 0 && num % 5 != 0 && num % 7 != 0) || (num == 2 || num == 3 || num == 5 || num == 7))
    {
        cout << "this is a prime number\n";
    }
    else
    {
        cout << "this is not a prime number\n";
    }

    return 0;
}