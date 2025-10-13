#include <iostream>
using namespace std;

bool palindrome( string &w, int i)
{
    int n = w.length() / 2;
    if (i >= n) return true;
    if (w[i] != w[w.length() - i - 1]) return false;
    return palindrome(w, i + 1);
}

int main()
{
    string w = "naman";
    bool pali = palindrome(w, 0);
    cout << "palindrome: " << (pali ? "true" : "false") << endl;
}