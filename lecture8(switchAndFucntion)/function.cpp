#include <iostream>
using namespace std;

int Square(){
    int a=12, b=2 ;
    int ans=1;
    for(int i = 1; i <=b; i++){
       
        ans = ans * a;
        
    }
    return ans;
}

int main(){
    int ans = Square();
    cout<<ans;

}