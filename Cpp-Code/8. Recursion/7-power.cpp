#include <iostream>
using namespace std;

int power(int a, int b)
{
    if (b == 0)
        return 1;
    return a * power(a, b - 1);
}

// power(2,5) = 2 * power(2,5)
// power(2,5) = 2 * 2 * power(2,4)
// power(2,5) = 2 * 2 * 2 * power(2,3)
// power(2,5) = 2 * 2 * 2 * 2 * power(2,2)
// power(2,5) = 2 * 2 * 2 * 2 * 2 power(2,1)
// power(2,5) = 2 * 2 * 2 * 2 * 2 * power(2,0)
// power(2,5) = 2 * 2 * 2 * 2 * 2 * 1

int main()
{
    int a, b;
    cout << "ENTER BASE ";
    cin >> a;
    cout << "ENTER POWER ";
    cin >> b;
    cout << power(a, b);
}
