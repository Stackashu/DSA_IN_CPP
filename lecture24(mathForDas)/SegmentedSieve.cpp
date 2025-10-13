
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

vector<int> sieveOfEratosthenes( int R ){
    vector<bool> prime(R+1,true);
   
    vector<int> isPrime;
    
    prime[0] = prime[1] = false;

    for(int i = 2 ; i <= R ;i++){
        if(prime[i]){
            isPrime.push_back(i);
            for(int j = 2 * i ; j <= R ; j += i){
                prime[j] = false;
            }
        }
    }
    return isPrime;
}

void segementSieve(int L , int R){
    int LI = R - L + 1;
    vector<int> primes = sieveOfEratosthenes(sqrt(R) + 1);
    vector<bool> segementNum(LI, true);

    for(int i = 0 ; i < primes.size() ; i++){
        int  p = primes[i];
        
        int start = max(p * p , (L + p - 1) / p * p);

        for( int j = start ; j <= R ; j += p){
                segementNum[j-L] = false;
        }
    }
    
    int count = 0;
    for(int i = 0; i < LI; i++){
        if(segementNum[i] && L + i >= 2){
            count++;
            cout<<L + i<<" "<<endl;
        }
    }
    cout<<count;

}

int main(){
    int l = 18 ;
    int r = 26 ;
 segementSieve(l,r);
}
