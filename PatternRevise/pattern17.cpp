#include <iostream>
using namespace std;

int main(){
    int i = 1;
    while (i <= 4)
    {
        int j = 1;
        int count = 1;
        while (j <= 4)
        {
            if(i <= j){
                cout<<count+j-1<<" ";
            }else{
                cout<<"  ";
            }
            j++;
        }
        cout<<endl;
        i++;
    }
}