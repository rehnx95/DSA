#include <iostream>
using namespace std;

int main()
{
    int n, m, o;
    cout << "number of digit ";
    cin >> n;
    int arr[n];

    cout << "enter digits ";
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            m = i;
        }
    }
    cout << "max is found at " << (m + 1) << " is " << max << endl;
    int smx = arr[0];
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] > smx) && arr[i] != max)
        {
            smx = arr[i];
            o = i;
        }
    }
    cout << "second max is found at " << (o + 1) << " is " << smx;
}