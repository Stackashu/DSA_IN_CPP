#include <iostream>
#include <algorithm>
using namespace std;

void sort012(int arr[])
{
    int i = 0;
    int k = 0;
    int j = 7 - 1;

    while (k<= j)
    {
      if(arr[k]==0){
        swap(arr[i],arr[k]);
        i++;
        k++;
      }else if(arr[k]==1){
        k++;
      }else{
        swap(arr[k],arr[j]);
        j--;
      }
    }
}

int main()
{
    int arr1[6] = {0,1,1,1,1,0}
    int arr[7] = {0, 1, 2, 0, 1, 2, 2};
    cout<<"sorted array"<<endl;
    sort012(arr);

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
}