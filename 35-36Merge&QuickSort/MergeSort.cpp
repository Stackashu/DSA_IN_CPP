#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int pointer = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[pointer++];
    }
    pointer = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[pointer++];
    }

    int f = 0;
    int S = 0;
    pointer = s;
    while (f < len1 && S < len2)
    {
        if (first[f] < second[S])
        {
            arr[pointer++] = first[f++];
        }
        else
        {
            arr[pointer++] = second[S++];
        }
    }

    while (f < len1)
    {
        arr[pointer++] = first[f++];
    }
    while (S < len2)
    {
        arr[pointer++] = second[S++];
    }
}
void mergeSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);

    merge(arr, s, e);
}
int main()
{
    int arr[10] = {7, 2, 9, 1, 6, 3, 8, 0, 5, 4};
    int size = 10;
    mergeSort(arr, 0, size);
    for (int i = 0; i < size - 1; i++)
    {
        cout << arr[i] << " " << endl;
    }
}