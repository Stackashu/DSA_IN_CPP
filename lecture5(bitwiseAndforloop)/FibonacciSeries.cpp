
#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int first = 0;
    int second = 1;
    int totalSum = 0;
    cout << first << " " << second << " ";
    for (int i = 0; i < n-2; i++)
    {
        totalSum = first + second;
        cout << totalSum << " ";
        first = second;
        second = totalSum;
    }
}