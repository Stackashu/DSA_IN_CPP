#include <iostream>
using namespace std;

int climb(int n){
    if(n<0) return 0;
    if(n==0) return 1;

    return climb(n-1) + climb(n-2);
}
int main(){
    int n = 5;
    int ways = climb(n);
    cout<<ways;
}