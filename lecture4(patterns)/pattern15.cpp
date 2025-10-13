#include <iostream>
 using namespace std;

 int main(){
    int n = 3;

    char a = 'A';

    int i = 1;
    while(i<=n){

        int j =1;
        while(j<=n){
            cout<<a;
            j++;
            a++;
        }
        cout<<endl;
        i++;
        a-=2;
    }
 }

//  pattern is 
// ABC
// BCD
// CDE
