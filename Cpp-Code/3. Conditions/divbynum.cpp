#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "number ";
    cin >> n;
    if (n % 5 == 0 and n % 3 == 0)
    {
        cout << "divisible by 5 and 3 ";
        return 0;
    }

    if (n % 5 == 0 or n % 3 == 0)
    {
        cout << "divisible by 5 or 3 ";
    }

    else
    {
        cout << "not divisible ";
    }

    return 0;
}