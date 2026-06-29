#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "row ";
    cin >> n;
    cout << "column ";
    cin >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++) // second for, print row *****
        {                            // then it came out
            cout << "*";             // then endl se next line
        }                            // fir second for, print row *****
        cout << endl;                // first for, se next line me jake second for ko print krana
    }

    return 0;
}