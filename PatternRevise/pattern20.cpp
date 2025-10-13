#include <iostream>
using namespace std;

int main(){
    int i = 1;
    int n = 5;
    while(i <= 5){
        
        int j = 1;
        while (j <= n-i+1)
        {
            cout<<j<<" ";
            j++;
        }
        
        int k = 1;
        while (k < i)
        {
            cout<<"*"<<" ";
            k++;
        }
        
        int l = 1;
        while (l <= i-1)
        {
            cout<<"*"<<" ";
            l++;
        }
        
        int m = 1+i-1 ;
        while (m <= n)
        {
            cout<<n-m+1 <<" ";
            m++;
        }
        cout<<endl;
        i++;
        
    }
}