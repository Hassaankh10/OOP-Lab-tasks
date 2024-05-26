#include <iostream>
using namespace std;
void recursiveswap(int &a, int &b)
{
    int temp;
    if (a == b)
    {
        a = a + 1;
        recursiveswap(a, b);
    }
    else
    {
        temp = a;
        a = b;
        b = temp;
    }
}
int main()
{
    int x, y;
    cout << "Enter the value of x " << endl;
    cin >> x;
    cout << "Enter the value of y " << endl;
    cin >> y;
    cout << "Value of x & y Before swapping : " << x << " :: " << y << endl;
    recursiveswap(x, y);
    cout << "Value of x & y After swapping  : " << x << " :: " << y << endl;

    return 0;
}