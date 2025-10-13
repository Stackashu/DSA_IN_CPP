#include <iostream>
using namespace std;

int main(){
    int count = 1;
    int n = 3;
    while(n > 0){
        int j = 3;
        while(j!=0){
            cout<<count<<" ";
            count++;
            j--;
        }
        cout<<endl;
        n--;
    }
}