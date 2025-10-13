#include <iostream>
using namespace std;

void reverse(string &w, int i) {
    int n = w.length();
    if (i >= n / 2) return;
    swap(w[i], w[n - i - 1]);
    reverse(w, i + 1);
}

int main()
{
    string word = "ashish verma";
    reverse(word, 0);
    cout << word << endl;
}