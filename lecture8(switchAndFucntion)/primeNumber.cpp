#include <iostream>
using namespace std;

void primeNumber(int n ){
    bool isPrime = true;
    for(int i = 2; i<n;i++){
        if(n % i == 0){
            cout<<"It is not prime number.";
            isPrime =  false;
        }
    }
      if(isPrime){
            cout<<"It is a prime number.";
        }
        
}
int main(){
    int a ;
    cout<<"Enter a number  for prime check:";
    cin>>a;
    primeNumber(a);
    
    
    return 0;
}