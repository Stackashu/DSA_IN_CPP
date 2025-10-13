#include <iostream>
using namespace std;

int main(){
    int i = 1;
    char a = 65;
    while (i <= 3)
    {
        int j = 1;
        while(j <= i){
            cout<<a<<" ";
            j++;
        }
        a++;
        cout<<endl;
        i++;

    }
    
}