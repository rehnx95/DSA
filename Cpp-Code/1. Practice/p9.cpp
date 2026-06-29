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
//     int mx = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         mx = max(arr[i], mx);
//     }
//     cout << "max is " << mx << endl;
//     int smx = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != mx)
//         {
//             smx = max(arr[i], smx);
//         }
//     }
//     cout << "second max is " << smx << endl;
// }