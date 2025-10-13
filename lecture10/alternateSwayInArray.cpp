#include<iostream>
using namespace std;

void alternateSwapper(int arr[] , int size){

    for(int i = 0; i < size-1 ; i++){
        if(i % 2 == 0){
           swap(arr[i], arr[i+1]);         
        }
    }

    for(int i = 0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int n = 7;
    int num[n] = { 1,2,3,4,5,6,7};
   
alternateSwapper(num , n);
    
}