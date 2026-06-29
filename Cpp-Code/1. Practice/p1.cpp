#include <iostream>
using namespace std;
// 5 6 13 16 17 26 29
int main()
{
    int n;
    cin >> n;
    while (n != 0)
    {
        int ld = n % 10;
        cout << ld;
        n /= 10;
    }
}