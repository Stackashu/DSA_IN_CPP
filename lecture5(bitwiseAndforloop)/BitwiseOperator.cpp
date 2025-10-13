#include <iostream>
using namespace std;

int main(){
    int a = 4;
    int b = 5;
// bitwise operator operation
    cout <<"a&b  " << (a&b) <<endl;
    cout << "a|b  " << (a|b) << endl;
    cout << "~a  " << (~a) << endl; // it add one more with negative sign // first it do 1's complemet then 2's complement
    cout << "a^b  " <<(a^b) <<endl;

    // bitwise ritht and left shift 

    cout<< "19 >> 1  " << (19>>1)<< endl; //9
    cout << "19 << 1   " << (19<<1) << endl; //38
    cout<< " 5 >> 2 " << (5 >> 2) << endl;
}
