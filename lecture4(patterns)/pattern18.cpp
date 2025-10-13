#include <iostream>
using namespace std;

int main(){
    int n = 4;
    int i = 1; 
    while(i<=n){

        int j = 1;
        while(j<=n){
            if(i<=j){
                cout<<i<<"  ";
                
            }else{
                cout<<"   ";
            }
            j++;
        }
        cout<<endl;
        i++;
    }
}

// pattern is 
// 1  1  1  1  
//    2  2  2  
//       3  3  
//          4  