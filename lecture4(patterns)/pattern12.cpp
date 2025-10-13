#include <iostream>
using namespace std;

int main(){
    int n = 3 ;
    char a = 65;

    int i = 1;
    while(i<=n){

        int j = 1;
        while(j<=i){
            cout<<a;
            j++;
        }
        cout<<endl;
        i++;
        a++;
    }
}

// pattern is 
// A
// BB
// CCC