#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    int b = 4;
    char op ='+' ;
    // cout << "Enter your operator";
    // cin >> op;
    switch (op)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        if (b != 0)
            cout << a / b;
        else
            cout << "Error: Division by zero is not allowed";
        break;
    default:
        cout << "Inappropriate operator";
        break;
    }
}