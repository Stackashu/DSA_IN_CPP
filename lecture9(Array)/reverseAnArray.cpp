#include <iostream>
using namespace std;

void reverseTheArray(int arr[], int size){
    int temp;
    for(int i = 0; i < size / 2; i++){
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
    cout << "Your array is reversed " << endl;
}

int main(){
    int size = 10;
    int num[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    reverseTheArray(num, size);
    cout << "Here is your reversed array" << endl;
    for(int i = 0; i < size; i++){
        cout << num[i] << endl;
    }
}