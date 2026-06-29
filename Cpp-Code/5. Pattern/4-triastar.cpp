#include <iostream>
using namespace std;
//                   j-> 1 2 3 4
// i = 1  j = 1      i-1 *
// i = 2  j = 1,2      2 * *
// i = 3  j = 1,2,3    3 * * *
// i = 4  j = 1,2,3,4  4 * * * *

int main()
{
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
