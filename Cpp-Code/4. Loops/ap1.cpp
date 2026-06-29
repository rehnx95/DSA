#include <iostream>
using namespace std;

int main()
{
    int a, n, d;
    cout << "enter first term ";
    cin >> a;
    cout << "enter common diffrence ";
    cin >> d;
    cout << "enter number of terms ";
    cin >> n;

    if (d > 0)
    {

        for (int i = a; i <= ((a) + (n - 1) * (d)); i += (d))
        {

            cout << i << " ";
        }
    }

    if (d < 0)
    {

        for (int i = a; i >= ((a) + (n - 1) * (d)); i += (d))
        {

            cout << i << " ";
        }
    }

    return 0;
}