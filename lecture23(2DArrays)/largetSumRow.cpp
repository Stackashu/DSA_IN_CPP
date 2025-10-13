#include<iostream>
using namespace std;


void largetSumRow(int arr[3][3] , int row , int col){
    int max = -1;
    int maxRow = -1;
    for (int i  = 0 ; i < row ; i++){
        int sum = 0;
        for( int j = 0; j < col; j++){
            sum += arr[i][j];
        }
        if (sum > max){
            max = sum;
            maxRow = i+1;
        }
    }

    cout<<"Max sum is "<<max<<" at row "<<maxRow<<endl;
}

int main(){
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    largetSumRow(arr, 3, 3);
}