#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {0, 2, 2, 2, 3, 3, 4, 5, 6, 6, 6, 6, 7};

                int i = 0;

    for (int j = 1; j < arr.size(); j++)
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }

    cout << "total unique numbers are " << (i + 1) << endl;
}