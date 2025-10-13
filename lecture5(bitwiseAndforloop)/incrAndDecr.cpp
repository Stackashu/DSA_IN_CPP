#include <iostream>
using namespace std;

int main(){
   
    int a = 5;
    int b = 5;

    // Post-increment operator
    cout << "Post-increment operator:" << endl;
    cout << "Value of a: " << a << endl;
    cout << "Value of a++: " << a++ << endl;
    cout << "Value of a after a++: " << a << endl;

    // Pre-increment operator
    cout << "\nPre-increment operator:" << endl;
    cout << "Value of b: " << b << endl;
    cout << "Value of ++b: " << ++b << endl;
    cout << "Value of b after ++b: " << b << endl;

    // Post-decrement operator
    cout << "\nPost-decrement operator:" << endl;
    cout << "Value of a: " << a << endl;
    cout << "Value of a--: " << a-- << endl;
    cout << "Value of a after a--: " << a << endl;

    // Pre-decrement operator
    cout << "\nPre-decrement operator:" << endl;
    cout << "Value of b: " << b << endl;
    cout << "Value of --b: " << --b << endl;
    cout << "Value of b after --b: " << b << endl;

 
}
