// this code is just for how we do swap with array elements 
#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int num[n] = {1,2,3,4,5};
    int temp ;

    temp = num[0];
    num[0] = num[1];
    num[1]= temp;

    for(int i = 0; i<n ; i++){
        cout<<num[i]<<endl;
    }
}