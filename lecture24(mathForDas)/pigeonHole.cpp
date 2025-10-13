#include <iostream>
#include <unordered_map>
using namespace std;

bool pigeonHolePrincipal(int arr[5])
{
    unordered_map<int, int> birthdays;
    for (int i = 0; i < 5; i++) {
        birthdays[arr[i]]++;
    }

    for (const auto &pair : birthdays)
    {
        if (pair.second > 1)
        {
            cout << "yes it follows pigeonHole principal " << pair.first << endl;
            return true;
        }
    }
    cout << "No, it is not present" << endl;
    return false;
}
int main()
{
    int size = 5;
    int birthday[size] = {1, 2, 3, 4, 3};
    pigeonHolePrincipal(birthday);
}