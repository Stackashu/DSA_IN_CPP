#include <iostream>
using namespace std;

int Partition(int *arr, int s, int e)
{
    int pivot = arr[s];
    int count = 0;

    for (int i = s + 1; i < e; i++)
    {
        if (arr[i] < pivot)
            count++;
    }

    swap(arr[s], arr[s + count]);
    pivot = s + count;

    int i = 0;
    int j = e - 1;
    while (i < j)
    {
        if (arr[i] > arr[pivot] && arr[j] < arr[pivot])
        {
            swap(arr[i++], arr[j--]);
        }
        if (arr[i] > arr[pivot] && arr[j] > arr[pivot])
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return pivot;
}

void QuickSort(int *arr, int s, int e)
{
    if (s >= e)
        return;

    int p = Partition(arr, s, e);
    QuickSort(arr, s, p);
    QuickSort(arr, p + 1, e);
}
int main()
{
    int arr[10] = {15, -7, 22, 3, -19, 1, 10, -12, 6, 8};
    int size = 10;
    int s = 0;
    QuickSort(arr, s, size);
    for (auto num : arr)
    {
        cout << num << " ";
    }
}