#include <iostream>
using namespace std;

int main(){
    int n =  4;
    
    int a = 10100101;
    int b = 2;
    int c = 1, d = 1, e = 1;
    cout<< "result " <<(( c ^ d) ^ e) <<endl;
    int ans = a % b ;
    cout << ans;
}