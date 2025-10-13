#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    char a = 65;

    int i = 1;
    while(i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << a;
            j++;
            
        }
        cout << endl;
        i++;
        a++;
    }
}

// pattern is 
// AAA
// BBB
// CCC