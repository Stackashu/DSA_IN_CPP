#include <iostream>
using namespace std;

int main(){

    int n = 4;
    int i = 1;
    while(i<=n){
        int j =1 ;
        while(j<=i){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
}

// pattern is 
// 1
// 22
// 333
// 4444