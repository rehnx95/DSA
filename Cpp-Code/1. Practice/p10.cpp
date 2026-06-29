// #include <iostream>
// #include <climits>

// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     int mn = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         mn = min(arr[i], mn);
//     }
//     cout << "min is " << mn << endl;
//     int smn = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != mn)
//         {
//             smn = min(arr[i], smn);
//         }
//     }
//     cout << "second min is " << smn;
// }