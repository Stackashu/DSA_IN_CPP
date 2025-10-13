#include <iostream>
using namespace std;

int main(){
    int n = 8;
    bool isPrime = true;
    for(int i = 2 ; i < n ; i++){
        if(n%i==0){
            cout << n << " is not a prime number" << endl;
            isPrime = false;
            break;

        }
       
    }
    if(isPrime == true){
        cout<<"n is a prime number";
    }


}