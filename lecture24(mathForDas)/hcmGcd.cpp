#include<iostream>
using namespace std;

int gcd(int a, int b) {
    if( b == 0){
        return a ;
    }

    if(a == 0){
        return b;
    }
    
    while(a != b){

        if(a>b){
            a = a - b ;
        }else{
            b = b - a;
        }
    }
    return a ;
}
int main(){
    int a = 74,b = 24;
    cout<< gcd(a,b)<<endl;
}