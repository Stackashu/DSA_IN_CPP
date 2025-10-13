#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
    
        while (j <= n)
        {
            cout<<n-j+1;
            j++;
        }
        cout << endl;
        i++;
    }
}

// pattern is
// 4321
// 4321
// 4321
// 4321