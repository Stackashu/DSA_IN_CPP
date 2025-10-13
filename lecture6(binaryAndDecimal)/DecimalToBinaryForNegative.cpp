#include<iostream>
using namespace std;
#include <math.h>

int main(){
    int n = 5;
    int i = 0;
    int ans = 0;
    
    while(n != 0){
        int bit = n & 1;
        ans = (bit * pow(10,i)) + ans;
        n = n>> 1;
        i++;
    }

    cout<<~ans+1;
        
        
    
}

// this code is supposed to convert a decimal number to binary and then reverse the binary number. But the code will give wrong answer 
// you can run this code on online cPP compiler;