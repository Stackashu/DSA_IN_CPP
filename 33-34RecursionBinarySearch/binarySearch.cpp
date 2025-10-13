#include <iostream>
using namespace std;

int binarySearch(int arr[], int s, int e, int t)
{
    if (s > e)
        return -1;

    int mid = s + (e - s) / 2;

    if (arr[mid] == t)
        return mid;
    else if (arr[mid] > t)
        return binarySearch(arr, s, mid - 1, t);
    else
        return binarySearch(arr, mid + 1, e, t);
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int target = 5;
    int s = 0;
    int e = size - 1;
    int idx = binarySearch(arr, s, e, target);
    if (idx != -1)
        cout << "idx:" << idx << endl;
    else
        cout << "Element not found" << endl;
}