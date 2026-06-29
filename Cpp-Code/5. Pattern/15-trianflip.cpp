#include <iostream>
using namespace std;

/*

******       i=1 j=1,2,3,4,5,6     i + j(max) = n+1 = 7
*****        i=2 j=1,2,3,4,5           j(max) = n+1-i
****         i=3 j=1,2,3,4             j<=  n+1-i
***          i=4 j=1,2,3
**           i=5 j=1,2
*            i=6 j=1

*/

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            cout << "*"; // for number * to j/i
        }
        cout << endl;
    }

    return 0;
}
