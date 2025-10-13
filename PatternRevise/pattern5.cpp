#include <iostream>
using namespace std;

int main(){
    int count = 1;
    int i = 1;
    while(i <= 4){
        int j = i;
        while(j != 0){
            cout<<count<<" ";
            count++;
            j--;

        }
        cout<<endl;
        i++;
    }
}