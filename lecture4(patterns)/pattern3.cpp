#include <iostream>
using namespace std;


int main(){
    int n = 3;
    int counting = 1;
    int i = 1;
    while(i<=n){
        
        int j = 1;
        while(j<=n){
            cout<<counting;
            j++;
            counting++;
        }
        cout<<endl;
        i++;
    }
}

// patttern is 
// 123
// 456
// 789