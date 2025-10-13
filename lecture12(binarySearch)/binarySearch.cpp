#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }

        if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n = 5;
    int odd[n] = {2, 14, 25, 27, 50};

    int m = 6;
    int even[m] = {1, 2, 3, 4, 5, 6};

    int evenSearch = binarySearch(odd, n, 27);
    cout << "Even search " << evenSearch << endl;

    int oddSearch = binarySearch(even, m, 5);
    cout << "odd search " << oddSearch << endl;
}