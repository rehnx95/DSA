#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "number of digit ";
    cin >> n;
    int a[n];

    cout << "enter digits ";
    for (int i = 0; i < n ; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n ; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                cout << "duplicate found at [" << i << "," << j << "]" << endl;
            }
        }
    }
}