#include<iostream>
using namespace std;

bool isPrime(int n ){
    if(n<=1){
        return 0;
    }
    for(int i = 2; i <= n; i++){
        if(n%i == 0){
            return 0;
        }
    }
}
int main(){
    int n = 0;

    cout << "Enter a number: ";
    

}