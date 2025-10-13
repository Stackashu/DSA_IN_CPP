#include <iostream>
using namespace std;

int update(int **ptr){
    ptr= ptr + 1;
    cout<<"inside address change " << ptr << endl;
    *ptr = *ptr + 1;
    // cout<<
    cout<<"inside address change " << *ptr << endl;

    **ptr = **ptr + 1;
    cout<<"inside value change **ptr" << **ptr <<endl;
}
int main(){
    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr; // fixed typo: prt2 -> ptr2
    int ***ptr3 = &ptr2;
     int ****ptr4 = &ptr3;
    cout << "i: " << i << endl;
    cout << "&i: " << &i << endl;
    cout<<"------------------" << endl;
    // cout << "*ptr: " << *ptr << endl;
    // cout << "ptr: " << ptr << endl;
    // cout << "&ptr: " << &ptr << endl;
    // cout << "*ptr: " << *ptr << endl;
    // cout << "ptr: " << ptr << endl;
    // cout << "&ptr: " << &ptr << endl;
    cout<<"------------------" << endl;
    cout << "*ptr2 " << *ptr2 << endl;
    cout << "**ptr2: " << **ptr2 << endl;
    cout << "ptr2: " << ptr2 << endl;
    cout << "&ptr2: " << &ptr2 << endl;
    update(ptr2);
    cout<<"------------------" << endl;
    cout << "*ptr2 " << *ptr2 << endl;
    cout << "**ptr2: " << **ptr2 << endl;
    cout << "ptr2: " << ptr2 << endl;
    cout << "&ptr2: " << &ptr2 << endl;
    cout<<"------------------" << endl;
    // cout<< "*ptr3 " << *ptr3<< endl; 
    // cout<< "**ptr3 " << **ptr3 << endl;
    // cout << "***ptr3 : " << ***ptr3 << endl;
    // cout << "ptr3: " << ptr3 << endl;
    // cout << "&ptr3: " << &ptr3 << endl;

    // cout<<"------------------" << endl;
    // cout<< "*ptr4 " << *ptr4<< endl; //address of second pointer
    // cout<< "**ptr4 " << **ptr4 << endl;//address of first pointer 
    // cout << "***ptr4 : " << ***ptr4 << endl; // address of 5
    // cout << "****ptr4 : " << ****ptr4 << endl;  // value 5
    // cout << "ptr4 : " << ptr4 << endl; //address of just behind one's pointer 
    // cout << "&ptr4: " << &ptr4 << endl;// address of self pointer 

    
}