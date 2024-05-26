#include <iostream>
using namespace std;
bool hasSubsetSum(int arr[], int size, int targetSum)
{
    if (targetSum == 0)
        return true;
    if (size == 0 || targetSum < 0)
        return false;
    if (arr[size - 1] > targetSum)
        return hasSubsetSum(arr, size - 1, targetSum);
    return hasSubsetSum(arr, size - 1, targetSum) ||
           hasSubsetSum(arr, size - 1, targetSum - arr[size - 1]);
}
int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size], targetSum;
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the number for index [" << i << "]: ";
        cin >> arr[i];
    }
    cout << "Enter the target sum to achieve: ";
    cin >> targetSum;
    if (hasSubsetSum(arr, size, targetSum))
        cout << "Subset with sum " << targetSum << " exists." << endl;
    else
        cout << "No subset with sum " << targetSum << " exists." << endl;
    return 0;
}
