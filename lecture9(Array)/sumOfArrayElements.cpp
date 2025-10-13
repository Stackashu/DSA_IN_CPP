#include <iostream>
using namespace std;


int main(){
    int n = 10;
    int num[n] = {1,2,3,4,5,6,7,8,9,10};
    int sum = 0;
    for(int i = 0; i<n ; i++){
    sum +=num[i];
    }
    cout<<"Sum of the Array is :" <<sum<<endl;
}