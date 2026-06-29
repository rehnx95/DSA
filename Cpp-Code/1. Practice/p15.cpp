#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "number of digit ";
    cin >> n;
    int a[n];

    cout << "enter digits ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != i + 1)
        {
            cout << "misisng no. is " << i + 1;
            return 0;
        }
    }
}