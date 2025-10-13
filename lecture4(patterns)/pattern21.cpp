#include <iostream>
using namespace std;

 int main(){


    int n = 5;
    int i =1 ;
    while(i<=n){

        int j =1 ;
        while(j<=n-i+1){
        cout<<j<<" ";
        j++;
        }
       
        int k = 1;
        while(k<i){
            cout<<"* ";
            k++;
        }

        int l = 1;
        while(l<i){
            cout<<"* ";
            l++;
        }

        int m = 1+i-1;
        while(m<=n){
            cout<<n-m+1<<" ";
            m++;
        }
        cout<<endl;
        i++;

    }
 }

//  pattern is 
// 1 2 3 4 5 5 4 3 2 1 
// 1 2 3 4 * * 5 4 3 2 
// 1 2 3 * * * * 5 4 3 
// 1 2 * * * * * * 5 4 
// 1 * * * * * * * * 5 