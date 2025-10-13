#include<iostream>
using namespace std;
bool searchMatrix(int arr[][3], int target, int row, int col) {
    int up = 0;
    int right = col - 1;

    while (up <= row-1 && right >= 0) {

        int ele = arr[up][right];
        cout<<"ele: "<<ele<<endl;
        cout<<"up: "<<up<<endl;
        cout<<"right: "<<right<<endl;

        if (ele == target) {
            return 1;
        } else if (ele < target) {
            up++;
        } else if(ele > target) {
            right--;
        }
    }

    return 0;
}
int main(){
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int target = 5;
    int row = sizeof(arr)/sizeof(arr[0]);
    int col = sizeof(arr[0])/sizeof(arr[0][0]);
    if (searchMatrix(arr, target, row, col)) {
        cout << "Element found" << endl;
    } else {
        cout << "Element not found" << endl;
    }
}