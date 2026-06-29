// #include <iostream>
// using namespace std;
// //                   j-> 1 2 3 4
// // i = 1  j = 1      i-1 *
// // i = 2  j = 1,2      2 * *
// // i = 3  j = 1,2,3    3 * * *
// // i = 4  j = 1,2,3,4  4 * * * *

// int main()
// {
//     int n;

//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;

//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout <<j;
//             // cout <<i;

//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// /*

// ******       i=1 j=1,2,3,4,5,6     i + j(max) = n+1 = 7
// *****        i=2 j=1,2,3,4,5           j(max) = n+1-i
// ****         i=3 j=1,2,3,4             j<=  n+1-i
// ***          i=4 j=1,2,3
// **           i=5 j=1,2
// *            i=6 j=1

// */

// int main()
// {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n + 1 - i; j++)
//         {
//             cout << "*"; // for number * to j/i
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;

//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= 2 * i - 1; j += 2)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }

//     return 0;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << 2 * j - 1 << " ";
//         }
//         cout << endl;
//     }

//     return 0;

//     for (int i = 1; i <= n; i++)
//     {
//         int a = 1;
//         for (int j = 1; j <= i; j++)
//         {
//             cout << a << " ";
//             a += 2;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }

//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//          for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, m;

//     cin >> n >> m;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= m; j++)
//         {
//             if (i == 1 || i == n || j == 1 || j == m)
//             {
//                 cout << " * ";
//             }
//             else
//             {
//                 cout << "   ";
//             }
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;

//     cin >> n;

//     int a = 1; // declare outside

//     for (int i = 1; i <= n; i++)
//     {

//         for (int j = 1; j <= i; j++)
//         {
//             cout << a << " ";
//             a++;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int factorial(int n){
// if(n<=1){      // this is base condition
//     return 1;
// }

// return n*factorial(n-1);

// // factorial(4) = 4 * factorial(3)
// // factorial(4) = 4 * 3 * factorial(2)
// // factorial(4) = 4 * 3 * 2 * factorial(1)
// // factorial(4) = 4 * 3 * 2 * 1
// // factorial(4) = 24

// }

// int main(){
//     int a;
//     cout<<"enter number ";
//     cin>>a;
//     cout<<"factorial of "<<a<<" is "<<factorial(a);

//     return 0;
// }

// #include <iostream>
// using namespace std;   // VVVVVI

// void print(int n)
// {
//     if (n == 0)
//         return; // base

//     print(n - 1);      // call
//     cout << n << endl; // work
// }
// int main()
// {
//     int n;
//     cin >> n;
//     print(n);
// }

// #include <iostream>
// using namespace std;

// void print(int n)
// {
//     if (n == 0)
//         return;        // base
//     cout << n << endl; // work
//     print(n - 1);      // call
// }
// int main()
// {
//     int n;
//     cin >> n;
//     print(n);
// }

// #include <iostream>
// using namespace std;

// int sum(int n)
// {
//     if (n == 1)
//         return 1;
//     return n + sum(n - 1);
// }

// // sum(4) = 4 + sum(3)
// // sum(4) = 4 + 3 + sum(2)
// // sum(4) = 4 + 3 + 2 + sum(1)
// // sum(4) = 4 + 3 + 2 + 1
// // sum(4) = 10

// int main()
// {
//     int n;
//     cin >> n;
//     cout << sum(n);
// }

// #include<iostream>
// using namespace std;

// int fib(int n){
//     if(n<2){
//         return 1;
//     }
//     return fib(n-2) + fib(n-1);

// }

// int main(){
//     int a;
//     cout<<"enter num ";
//     cin>>a;
//     cout<<"the term in fibonacci sequence at position "<<a<<" is "<<fib(a)<<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int power(int a, int b)
// {
//     if (b == 0)
//         return 1;
//     return a * power(a, b - 1);
// }

// // power(2,5) = 2 * power(2,5)
// // power(2,5) = 2 * 2 * power(2,4)
// // power(2,5) = 2 * 2 * 2 * power(2,3)
// // power(2,5) = 2 * 2 * 2 * 2 * power(2,2)
// // power(2,5) = 2 * 2 * 2 * 2 * 2 power(2,1)
// // power(2,5) = 2 * 2 * 2 * 2 * 2 * power(2,0)
// // power(2,5) = 2 * 2 * 2 * 2 * 2 * 1

// int main()
// {
//     int a, b;
//     cout << "ENTER BASE ";
//     cin >> a;
//     cout << "ENTER POWER ";
//     cin >> b;
//     cout << power(a, b);
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     // int arr[] = {1, 3, 1, 4, 5};
//     // int size = sizeof(arr) / sizeof(int);
//     // cout << size;

//     int n;
//     cout << "enter size of array ";
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

//     // arr[2]=3;

//     // for (int i = 0; i <= 4; i++)
//     // {
//     //     cout << arr[i] << " ";
//     // }

//     // cout << endl;

//     // for (int i = 0; i <= 4; i++)
//     // {
//     //     cout << arr[i] * 2 << " ";
//     // }

//     // cout << endl;

//     // for (int i = 4; i >= 0; i--)
//     // {
//     //     cout << arr[i] << " ";
//     // }
// }

// // #include <iostream>
// // using namespace std;

// //  int size=10, arr[size];
// //  size=10

// // int main()
// // {
// //     int arr[] = {2, 3, 2, 7, 5, 7};
// //     int n = sizeof(arr) / 4;
// //     for (int i = 0; i <= n-1; i++)
// //     {
// //         cout << arr[i] << " ";
// //     }
// // }

// #include <iostream>
// #include <climits>  // method 1

// using namespace std;

// int main()
// {
//     int n, m;
//     cout << "number of digit ";
//     cin >> n;
//     int arr[n];

//     cout << "enter digits ";
//     for (int i = 0; i <= n - 1; i++)
//     {
//         cin >> arr[i];
//     }

//     int mx = arr[0]; // intialise               :method 1
// int mx = INT_MIN;
// INT_MIN = minm possible :method 2

//  method 1

// for (int i = 0; i <= n - 1; i++)
// {
//     if (arr[i] > mx) // can be minimum
//     {
//         mx = arr[i];
//         m = i;
//         // update
//     }
// }
// cout << "max is found at " << (m + 1) << " is " << mx;

// cout << endl;

//  method 2

// for (int i = 0; i <= n - 1; i++)
// {
//     mx = max(mx, arr[i]);   // max is inbuilt function
// }
// cout << "max is " << mx;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "number of digit ";
//     cin >> n;
//     int arr[n];

//     cout << "enter digits ";
//     for (int i = 0; i <= n - 1; i++)
//     {
//         cin >> arr[i];
//     }

//     int sum = 0;

//     for (int i = 0; i <= n - 1; i++)
//     {
//         sum = sum + arr[i];
//     }
//     cout << sum;
// }

// #include <iostream>
// using namespace std;

// void reverse(int arr[], int i, int j)
// {
//     while (i < j)
//     {
//         swap(arr[i],arr[j]);

//         // int temp = arr[i];
//         // arr[i] = arr[j];
//         // arr[j] = temp;

//         i++;
//         j--;
//     }
// }
// int main()
// {
//     int n;
//     cout << "number of digit ";
//     cin >> n;
//     int a[n];

//     cout << "enter digits ";
//     for (int i = 0; i <= n - 1; i++)
//     {
//         cin >> a[i];
//     }

//     // normal

//     for (int i = 0; i <= n - 1; i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;

//     // reversing process
//     reverse(a, 0, n - 1);
//     // reverse(a, 1, 3);

//     // reversed
//     cout << endl;
//     for (int i = 0; i <= n - 1; i++)
//     {
//         cout << a[i] << " ";
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "number of digit ";
//     cin >> n;
//     int arr[n];

//     cout << "enter digits ";
//     for (int i = 0; i <= n - 1; i++)
//     {
//         cin >> arr[i];
//     }

//     int even = 0, odd = 0;

//     for (int i = 0; i <= n - 1; i++)
//     {
//         if (arr[i] % 2 == 0)
//         {
//             even++;
//         }
//         else
//             odd++;
//     }
//     cout<<"even "<<even<<endl;
//     cout<<"odd "<<odd<<endl;


// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, m, o;
//     cout << "number of digit ";
//     cin >> n;
//     int arr[n];

//     cout << "enter digits ";
//     for (int i = 0; i <= n - 1; i++)
//     {
//         cin >> arr[i];
//     }
//     int max = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//             m = i;
//         }
//     }
//     cout << "max is found at " << (m + 1) << " is " << max << endl;
//     int smx = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         if ((arr[i] > smx) && arr[i] != max)
//         {
//             smx = arr[i];
//             o = i;
//         }
//     }
//     cout << "second max is found at " << (o + 1) << " is " << smx;
// }