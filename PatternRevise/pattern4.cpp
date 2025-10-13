#include <iostream>
using namespace std;

int main(){
    int i = 1;
    while(i <= 4){
        int j = i;
        while(j!=0){
            cout<<i<<" ";
            j--;
        }
        cout<<endl;
        i++;
    }
}