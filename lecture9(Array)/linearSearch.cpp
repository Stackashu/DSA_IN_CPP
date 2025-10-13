#include <iostream>
using namespace std;

void linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout << "Number found at index: " << i << endl;
            break;
        };
    };
}

int main()
{
    int searchThisNumber = 54;
    int size = 10;

    int num[size] = {11, 2, 34, 3, 4353, 54, 6, 46, 4, 5};

    linearSearch(num, size, searchThisNumber);
}