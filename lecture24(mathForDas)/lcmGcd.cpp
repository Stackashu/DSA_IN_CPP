#include<iostream>
using namespace std;

int gcd(int a , int b){
    return (b == 0)? a : gcd(b,a % b);
}

int lcm(int a , int b){
    // we write the b param outside from prventing the result out of the range 2^31 -1
    return (a/gcd(a,b)) * b;
}

int main(){
    int a = 5, b = 3;
    cout<<lcm(a,b);

}