#include <iostream>
using namespace std;
int main()
{
    int n = 50, i = 2, totalSum = 0;

    while (i <= n)
    {
        if (i % 2 == 0)
        {
            totalSum = totalSum + i;
        }
        i++;
    }

    cout << totalSum ;
}