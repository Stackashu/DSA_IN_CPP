#include <iostream>
using namespace std;

void countingNumber(int n){
    for(int i = 1 ; i<=n; i++){
        cout<<i<<endl;
    }
    
}
int main(){
    int a ;
    cout<<"Enter a number :";
    cin>>a;
     countingNumber(a);
    
    
    return 0;
}