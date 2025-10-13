#include <iostream>
using namespace std;

int pivotElement(int arr[],int size)
{
    int s = 0, e = size - 1, ans;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        mid = s + (e - s) / 2;
      

      if(arr[mid] >= arr[0]){
        s = mid + 1;
      }else{
        e = mid;
      }
       
    }
    return s;
    
}

int main()
{
    int size = 5;
    int arrr[size] = {7,8,9,10, 4};

    int pivot = pivotElement(arrr, size);
    cout<<pivot;
}