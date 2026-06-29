#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cout << "number of digit ";
    cin >> n;
    int arr[n];

    cout << "enter digits ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter target ";
    cin >> x;
    // for (int i = 0; i <= n - 1; i++)
    // {
    //     if (x == arr[i])
    //     {
    //         cout << x << " is found at " << i - 1 << " position";
    //         return 0;
    //     }
    // }
    cout << "Enter position ";
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (x == (i + 1))
        {
            cout << "element found at " << (i + 1) << " is " << arr[i];
            return 0;
        }
    }
}