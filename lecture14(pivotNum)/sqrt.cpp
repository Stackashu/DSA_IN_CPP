#include <iostream>
using namespace std;
int mySqrt(int x)
{
    int s = 0, e = x, ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        cout << "s" << mid << endl;
        cout << "mid" << mid << endl;

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
int main()
{
    cout << "this is your num :" << mySqrt(4);
}