#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    while (i <= 4)
    {
        int j = 1;
        while (j <= 4)
        {
            if (i <= j)
            {
                cout << "  ";
            }
            j++;
        }

        int k = 1;
        while (k <= i)
        {
            cout << k << " ";
            k++;
        }

        int l = 1;
        while (l <= i - 1)
        {
            cout << l<< " ";
            l++;
        }
        cout << endl;
        i++;
    }
}