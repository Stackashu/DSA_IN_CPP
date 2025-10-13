#include <iostream>
using namespace std;

int factorial(int n){
    if(n==0 || n ==1){
        return 1;
    }
    return n * factorial(n-1);
}
int nCr(){
    int n,r;
    cout<<"Enter n :";
    cin>>n;
    cout<<endl<<"Enter r :";
    cin>>r;
    
    int ans = ( factorial(n) / factorial(r) * factorial(n-r) );
    
    return ans;
}

int main(){
    
    int ans = nCr();
    cout<<ans;
}