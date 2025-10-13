#include <iostream>
using namespace std;

// this is a global scope varibable accessible in each scope 
int score = 15;
// pass by reference 
void a(int& a){
    a++;
    
}
int main(){
    // i local for this main scope 
    int i = 5;
    a(i);
    


    return 0;
}