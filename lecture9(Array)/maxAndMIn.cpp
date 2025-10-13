#include <iostream>
using namespace std;


int main(){
    int n = 5;
    int arr[5] ={2,3,5,4,1};

    int max = arr[0];
    int min = arr[0];

    for( int i = 0 ; i<n ; i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    };
    cout<<"Max: "<<max<<endl;
    cout<<"Min: "<<min<<endl;
}