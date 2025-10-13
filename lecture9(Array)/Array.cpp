#include <iostream>
using namespace std;

void update(int arr[], int size)
{
    arr[2] = 120;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    //     int num[10];
    // //  in the array only first element is explicit is set and another is intialised automaticaly as 0
    //     int arr[10] = {0};
    //      int arr2[10] ={1}

    int arraaa[3] = {1, 2, 3};

    update(arraaa, 3);
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << arraaa[i] << endl;
    // }
}