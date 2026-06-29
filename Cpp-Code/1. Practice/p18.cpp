// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "number of digit ";
//     cin >> n;
//     int a[n];
//     int b[n];
//     int c[n];

//     cout << "enter digits in first array ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     cout << endl;
//     cout << "enter digits in second array ";

//     for (int i = 0; i < n; i++)
//     {
//         cin >> b[i];
//     }
//     cout << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << b[i] << " ";
//     }
//     cout << endl;
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (a[i] == b[j])
//             {
//                 c[count] = a[i];
//                 count++;
//                 break;
//             }
//         }
//     }

//     for (int i = 0; i < count; i++)
//     {
//         cout << c[i] << " ";
//     }
//     cout << endl;
// }