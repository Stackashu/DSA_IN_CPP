#include <iostream>
using namespace std;

int main(){
    int i = 5 ;
    int& j = i ;
    cout<<"i "<<&i<<endl;
    cout<<"j "<<&j<<endl;
    j++;
    cout<<"i "<<i<<endl;
    cout<<"j "<<j<<endl;
    i++;
    cout<<"i "<<i<<endl;
    cout<<"j "<<j<<endl;

}