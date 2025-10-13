#include <iostream>
using namespace std;

// making this as inline function to stop it from function call overhead 
inline int getMax(int a , int b ){
    return (a>b) ? a : b;
}

// default agr in fuction 
void print(int arr[] , int n , int s = 0){

}

int main(){
    int a = 4;
    int b = 2;

    int ans =  getMax(a,b);
    cout<<"ans "<<ans << endl;
    
    b = b + 10;
    
    ans = getMax(a , b);
    cout<<"ans "<<ans<<endl;
    return 0;
}