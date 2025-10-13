#include <iostream>
using namespace std;

int main(){
    int i = 1;
    while(i <= 4){
        int j = 1,count=i;
        while(j <= i){
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}