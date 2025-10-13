#include <iostream>
using namespace std;

int main(){
    int n = 2;

    switch (n)
    {
    case 1: cout<< "First";
            continue;
            
    case 2 : cout<< "Second";
        break;
    default: cout<< "nothing";
        break;
    }           
}