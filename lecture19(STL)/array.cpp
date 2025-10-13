#include <iostream>
// for using array stl 
#include <array>
using namespace std;

int main(){

    int a[5] = {1,2,3,4,5};

    //arraystl < typeOfData, number of elements > and it is static that's why it is not used most of they time thats why vectors come.
    array<int,5> a = {1,2,3,4,5};
    int size = a.size();
     cout << "Size of array is: " << a.at(3)<< endl;
     cout<<a.empty()<<endl; //returns 0 because it is not empty
     cout<<a.front()<<endl; //returns 1 because it gives first ele
     cout<<a.back()<<endl; //returns 5 bcause it gives last ele
}