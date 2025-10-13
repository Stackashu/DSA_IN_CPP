#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n = 7;
    int ans = 0;
    int i = 0;

    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10,i) ) + ans;
        n = n >> 1;
        i++;
    }
    cout << ans;
    return 0;
}

// the code is correct but answer is wrong and can also maybe wrong in your device 
// run this code on online cpp compiler 