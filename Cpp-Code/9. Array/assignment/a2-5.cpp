#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            a[i] = a[i] * 2;
        }
        else
        {
            a[i] = a[i] + 10;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i]<<" ";
    }
}