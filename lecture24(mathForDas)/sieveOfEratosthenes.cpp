#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n = 20 ;
    int count = 0;
    vector<bool> isPrime(n+1,true);

    isPrime[0] = isPrime[1] = false;

    for(int i = 2; i  <= n ; i++){
        if (isPrime[i]){
            count++;
            
            for(int j = i * i ; j <= n ; j += i){
                isPrime[j] = false;
            }
        }
    }

    cout<<count;
}