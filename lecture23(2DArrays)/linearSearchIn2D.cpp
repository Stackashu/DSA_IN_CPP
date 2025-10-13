#include<iostream>
using namespace std;

bool isPresent(int arr[3][3], int row , int col, int target){

    for(int i = 0 ; i < row ; i++){
        for( int j = 0 ; j < col ; j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}
int  main(){
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int target = 66;
    if(isPresent(arr, 3, 3,target)){
        cout<<"Element "<< target <<" is present in the array"<<endl;
    }else{
        cout<<"Element is not present"<<endl;
    }

}