#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "num ";
    cin >> n;
    if (n <= 1)
        cout << "no pr no co";
    for (int i = 2; i <= n / 2; i++)
    {

        if (n % i == 0)
        {
            cout << "not prime";
            return 0;
        }
    }

    cout << "prime";

    return 0;
}