// pattern is 
// 1
// 23
// 456
// 78910

#include <iostream>
 using namespace std;

 int main(){
    int n = 4;
    int counting = 1;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<counting ;
            j++;
            counting++;
        }
        cout<<endl;
        i++;
    }
 }