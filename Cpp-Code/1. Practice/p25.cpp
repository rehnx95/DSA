// #include <iostream>
// using namespace std;
// // sum of array using recursion
// int sum(int a[], int n)
// {
//     if (n == 0)
//         return 0;
//     return a[n - 1] + sum(a, n - 1);
// }
// //  a[4] + sum(a, 4)+
// //  a[4] + a[3] + sum(a, 3)
// //  a[4] + a[3] + a[2] + sum(a, 2)
// //  a[4] + a[3] + a[2] + a[1] + sum(a, 1)
// //  a[4] + a[3] + a[2] + a[1] + a[0] + sum(a, 0)
// //  a[4] + a[3] + a[2] + a[1] + a[0] + 0

// int main()
// {
//     int n;
//     cout << "number of digit ";
//     cin >> n;
//     int a[n];

//     cout << "enter digits ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
//     cout << "sum: " << sum(a, n) << endl;
// }