#include <iostream>
using namespace std;

void  uniqueElement(int arr[], int size)
{
    int uni = 0;
    for( int i = 0 ; i<size ; i++){
       uni ^= arr[i];
    }
     cout<<uni<<endl;
}

int main()
{
    int n = 9;
    int num[n] = {0, 2, 3, 0, 3, 2, 5, 5, 1};

    uniqueElement(num, n);
}