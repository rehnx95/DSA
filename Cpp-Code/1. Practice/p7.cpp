// // method 1

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     while (n >= 10)
//     {
//         int temp = n;
//         int sum = 0;

//         while (temp)
//         {
//             int digit = temp % 10;

//             if (temp / 10)
//                 cout << digit << " + ";

//             sum += digit;

//             if (!(temp / 10))
//                 cout << digit << " = " << sum;

//             temp /= 10;
//         }

//         cout << endl;

//         n = sum;
//     }

//     cout << n;
// }

// //method 2

// #include <iostream>
// using namespace std;
// int sumof(int n)
// {
//     if (n < 10)
//     {
//         return n;
//     }
//     int sum = 0;
//     int reverse = 0;
//     while (n != 0)
//     {
//         int ld1 = n % 10;
//         reverse = reverse * 10 + ld1;
//         n /= 10;
//     }
//     while (reverse != 0)
//     {
//         int ld = reverse % 10;
//         sum = sum + ld;
//         if (reverse / 10 != 0)
//         {
//             cout << ld << " + ";
//         }
//         else
//         {
//             cout << ld << " = " << sum;
//         }
//         reverse /= 10;
//     }
//     cout << endl;

//     return sumof(sum);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << sumof(n);
// }