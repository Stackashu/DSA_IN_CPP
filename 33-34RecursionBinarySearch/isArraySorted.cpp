#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    if (size == 0 || size == 1)
        return true;
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        int ans = isSorted(arr + 1, size - 1);
        return ans;
    }
}
int main()
{
    int arr[7] = {1, 2, 9, 4, 5, 6, 7};
    int sort = isSorted(arr, 7);
    cout << "sort hai "<<sort  << endl;
}