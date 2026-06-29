#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "enter num1 ";
    cin >> a;
    cout << "enter num2 ";
    cin >> b;
    cout << "enter num3 ";
    cin >> c;
    if (a > b)
    {
        if (a > c)
        { // a>b,a>c -- a>b>c
            cout << a << " is greatest";
        }
        else
        { // a>b,c>a -- c>a>b
            cout << c << " is greatest";
        }
    }

    else
    { // b>a
        if (b > c)
        {
            cout << b << " is greatest";
        }
    }

    return 0;
}