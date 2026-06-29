#include <iostream>
using namespace std;

int main()
{
    // int arr[] = {1, 3, 1, 4, 5};
    // int size = sizeof(arr) / sizeof(int);
    // cout << size;

    int n;
    cout << "enter size of array ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // arr[2]=3;

    // for (int i = 0; i <= 4; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // cout << endl;

    // for (int i = 0; i <= 4; i++)
    // {
    //     cout << arr[i] * 2 << " ";
    // }

    // cout << endl;

    // for (int i = 4; i >= 0; i--)
    // {
    //     cout << arr[i] << " ";
    // }
}

// #include <iostream>
// using namespace std;

//  int size=10, arr[size];
//  size=10

// int main()
// {
//     int arr[] = {2, 3, 2, 7, 5, 7};
//     int n = sizeof(arr) / 4;
//     for (int i = 0; i <= n-1; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }