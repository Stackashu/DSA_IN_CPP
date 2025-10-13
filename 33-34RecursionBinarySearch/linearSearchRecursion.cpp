#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int t)
{
    if (size == 0)
        return -1;

    if (arr[0] == t)
        return 0;
    else
    {
        int idx = linearSearch(arr + 1, size - 1, t);
        if (idx == -1)
            return -1;
        else
            return idx + 1;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int search = 1;
    int element = linearSearch(arr, 5, search);
    if (element != -1)
        cout << "got element at :" << element << endl;
    else
        cout << "element not found" << endl;
}