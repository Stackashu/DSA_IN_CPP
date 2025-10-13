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
                cout << "*" << " ";
            }
            else
            {
                cout << "  ";
            }
            j++;
        }
        cout << endl;
        i++;
    }
}