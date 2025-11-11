#include <iostream>
using namespace std;

int main(){
    // Address of a variable is the memory address of the variable
    int a = 5;
    int b = a;
    cout<<"Address of a is :"<<&a<<endl;
    b++;
    cout<<"Value of a is :"<<a<<endl;
    cout<<"Address of b is :"<<&b<<endl;
    cout<<"Value of b is :" << b << endl;

    int *ptr = &a;

    cout<<"Address of a is :"<<ptr<<endl; //memory address of a
    cout<<"Value of a is :"<<*ptr<<endl; //value of a
    (*ptr)++;
    cout<<"Address of a is :"<<ptr<<endl; //memory address of a
    cout<<"Value of a is :"<<*ptr<<endl; //value of a
    cout<<"Value of a is :"<<a<<endl; //value of a

    int *q = ptr;
    cout<<"Address of a is :"<<q<<endl; //memory address of a
    cout<<"Value of a is :"<<*q<<endl; //value of a


    int z = 10;
    int *r = &z;
    cout<<"Address of a is :"<<r<<endl; //memory address of a
    cout<<"Value of a is :"<<*r<<endl; //value of a

    return 0;  
}