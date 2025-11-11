#include <iostream>
using namespace std;

void update(int *p){
    p++;
    cout<<p<<endl;
}

int main(){
    int arr [10] = {0};
    cout<<"Address of arr is :"<<arr<<endl;
    cout<<"Address of arr is :"<<&arr[0]<<endl;
    cout<<"Address of arr is :"<<&arr<<endl;

    cout<<"Value of arr is :"<<*arr<<endl; 

    int i = 5;
    cout<<"Value of i is :"<<i[arr]<<endl;
    i[arr] = 5;
    cout<<"Value of i is :"<<i[arr]<<endl;

    int n = 10;
    int *p = &n;
    cout<<"Value of arr is :"<< n <<endl;
    update(arr);
    cout<<"Value of arr is :"<< n <<endl;



} 