#include <iostream>
using namespace std;

int main(){

    int n = 5 , i= 1 , totalSum=0;
    

    while(i<=n){
     totalSum = totalSum + i;
     i++;
    }

    cout<<totalSum<<endl;
}