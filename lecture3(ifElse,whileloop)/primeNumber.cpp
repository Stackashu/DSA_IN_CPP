#include <iostream>
using namespace std;

int main()
{
    int n = 5, i = 2;

    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "n is not a prime number";
            i = n;
        }
        i++;
        if(i==n){
            cout<<"n is prime";
        }
    }
}