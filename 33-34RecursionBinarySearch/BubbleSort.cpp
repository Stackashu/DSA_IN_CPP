#include <iostream>
using namespace std;

void BubbleSort(int arr[], int len)
{
    if (len == 0 || len == 1)
    {
        return;
    }

    // One pass of bubble: put the largest element at the end
    for (int i = 0; i < len - 1; ++i)
    {
        // cout<<"value of i : "<<i;
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    // Recursive call for the rest
    BubbleSort(arr, len - 1);
}

int main()
{
    int arr[10] = {7, 2, 9, 1, 6, 3, 8, 0, 5, 4};
    int len = 10;
    BubbleSort(arr, len);
    cout << "array is sorted now!" << endl;
    cout << "Sorted array: ";
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}