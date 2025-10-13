#include <iostream>
 using namespace std;

 int main(){
    int n =4;
    int i=1;
    while(i<=n){

        int j =1;
        while(j<=n){
            if(i<=j){
                cout<<"*  ";
            }else{
                cout<< "   ";
            }
            j++;
        }
        cout<<endl;
        i++;
    }
 }

//  pattern is 
// *  *  *  *  
//    *  *  *  
//       *  *  
//          *  