#include <iostream>
using namespace std;

int mySqrt(int x)
{
    int s = 0, e = x, ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (mid * mid == x)
        {

            return mid;
        }

        if (mid * mid < x)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

double morePrecison(int n, int tempsol, int precision)
{
    double ans = tempsol;
    double factor = 1;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int x = 37;
    int precision = 3;
    int tempSol = mySqrt(x);
    cout << "Your SQRT is " << morePrecison(x, tempSol, precision);
}