#include <iostream>
using namespace std;

int main(){
    int i = 1;
    char a = 65;
    while (i <= 4)
    {
        int j = 1;
        while (j <= i)
        {
            char w = a + 4 - j;
            cout<< w << " " ;
            j++;
        }
        cout<<endl;
        i++;
        
    }
    
}