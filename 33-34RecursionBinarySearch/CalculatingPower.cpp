#include <iostream>
using namespace std;

// Optimized Power calculation using Exponentiation by Squaring
int Power(int n, int powr) {
    if (powr == 0) {
        return 1;
    }
    int temp = Power(n, powr / 2);
    if (powr % 2 == 0) {
        return temp * temp;
    } else {
        return n * temp * temp;
    }
}

int main(){
    int n = 5;
    int powr = 5;
    int ans = Power(n, powr);
    cout << "ans is: " << ans;
}