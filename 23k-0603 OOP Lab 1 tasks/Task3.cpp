#include <iostream>
using namespace std;
int main()
{
    int arr[4] = {2, 7, 11, 15}, tar;
    cout << "Enter the target number\n";
    cin >> tar;
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] + arr[i + 1] == tar)
        {
            cout << "because nums[" << i << "]+nums[" << i + 1 << "]==" << tar << " ,we return" << i << ", " << i + 1 << endl;
            break;
        }
    }
    return 0;
}