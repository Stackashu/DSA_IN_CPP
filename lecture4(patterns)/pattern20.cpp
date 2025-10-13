#include <iostream>
using namespace std;

int main(){
    int n = 4;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n-i+1){
            cout<<"  ";
            j++;
        }
        int k = 1;
        while(k<=i){
            cout<<k<<" ";
            k++;
        }
        int l = 1;
        while(l<=i-1){
            cout<<i-l<<" ";
            l++;
        }
    cout<<endl;
    i++;
    }
}

// pattern is 
//       1 
//     1 2 1 
//   1 2 3 2 1 
// 1 2 3 4 3 2 1 
