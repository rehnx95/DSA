#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char op;
    cout << "enter first number ";
    cin >> a;

    cout << "enter operator ";

    cin >> op;
    cout << "enter second number ";
    cin >> b;

    if (op == '+')
        cout << a + b;

    if (op == '-')
        cout << a - b;

    if (op == '*')
        cout << a * b;

    if (op == '/')
        cout << a / b;

    return 0;
}