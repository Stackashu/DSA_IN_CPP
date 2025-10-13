#include <iostream>
using namespace std;

// Function to find the first and last position of target in arr[]
void findPosition(int arr[], int size, int target)
{
    int position[2] = {-1, -1};

    // Find first occurrence
    int s = 0, e = size - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == target)
        {
            position[0] = mid;
            e = mid - 1; // look for earlier occurrence
        }
        else if (arr[mid] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    // Find last occurrence
    s = 0, e = size - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == target)
        {
            position[1] = mid;
            s = mid + 1; // look for later occurrence
        }
        else if (arr[mid] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    cout << position[0] << " " << position[1] << endl;
}

int main()
{
    int arr[7] = {1, 2, 3, 3, 3, 3, 4};
    int target = 3;
    int size = sizeof(arr) / sizeof(arr[0]);
    findPosition(arr, size, target);
}