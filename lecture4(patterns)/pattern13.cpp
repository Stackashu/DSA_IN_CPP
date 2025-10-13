#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    char a = 65;

    int i = 1;
    while (i <= n)
    {

        int j = 1;
        while (j <= i)
        {
            cout << a;
            j++;
            a++;
        }
        cout << endl;
        i++;

    
    }
}

// pattern is 
// A
// BC
// DEF
// GHIJ