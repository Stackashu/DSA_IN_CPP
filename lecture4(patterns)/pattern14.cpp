#include <iostream>
 using namespace std; 

 int main(){
    int n  = 4;
    

    int i = 1;
    while(i<=n){

        int j = 1;
        char a = 'A' + n - i;
        while(j<=i){
       cout<<a;
       j++;
       a++;
        }
        cout<<endl;
        i++;
    }
 }

//  pattern is 
// D
// CD
// BCD
// ABCD