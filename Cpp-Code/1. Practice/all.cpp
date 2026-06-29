// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     while (n != 0)
//     {
//         int ld = n % 10;
//         cout << ld;
//         n /= 10;
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int original = n;
//     int ld = n % 10;
//     int reverse = 0;
//     while (n != 0)
//     {

//         reverse = reverse*10 + ld;
//         n /= 10;
//         ld = n % 10;
        
//     }
//     if(reverse==original){
//         cout<<"palindrom";
//     } else {
//         cout<<"not palindrom";
//     }
// }

// #include <iostream>
// using namespace std;
// int power(int ld, int count)
// {
//     if (count == 0)
//         return 1;
//     return ld * power(ld, count - 1);
// }
// bool isarstrong(int n, int count)
// {
//     int original = n;
//     int sum = 0;
//     while (n != 0)
//     {
//         int ld = n % 10;
//         n /= 10;
//         sum = sum + power(ld, count);
//     }
//     if (sum == original)
//         return true;
//     else
//         return false;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int temp = n;
//     int count = 0;
//     while (temp != 0)
//     {
//         temp /= 10;
//         count++;
//     }
//     if (isarstrong(n, count))
//     {
//         cout << "Armstrong";
//     }
//     else
//     {
//         cout << "Not Armstrong";
//     }
// }

// #include <iostream>
// using namespace std;
// bool isprime(int n)
// {
//     for (int i = 2; i <= n / 2; i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
// int main()
// {
//     int n;
//     cin >> n;

//     while (n != 0)
//     {
//         if (n == 1)
//         {
//             cout << n << " is not prime nor composite";
//         }
//         if (isprime(n))
//         {
//             cout << n << " is prime";
//         }
//         else
//         {
//             cout << n << " is composite";
//         }
//         cout << endl;
//         n--;
//     }
// }

// method 1 

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

// // #include <iostream>
// // using namespace std;
// // int sumof(int n)
// // {
// //     if (n < 10)
// //     {
// //         return n;
// //     }
// //     int sum = 0;
// //     int reverse = 0;
// //     while (n != 0)
// //     {
// //         int ld1 = n % 10;
// //         reverse = reverse * 10 + ld1;
// //         n /= 10;
// //     }
// //     while (reverse != 0)
// //     {
// //         int ld = reverse % 10;
// //         if (reverse / 10 != 0)
// //         {
// //             cout << ld << " + ";
// //         }
// //         sum = sum + ld;
// //         if (reverse / 10 == 0)
// //         {
// //             cout << ld << " = " << sum;
// //         }
// //         reverse /= 10;
// //     }
// //     cout << endl;

// //     return sumof(sum);
// // }
// // int main()
// // {
// //     int n;
// //     cin >> n;
// //     cout << sumof(n);
// // }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a, b;
//     cout << "base ";
//     cin >> a;
//     cout << "power ";
//     cin >> b;
//     int power = 1;
//     for (int i = 1; i <= b; i++)
//     {
//         power = power * a;
//     }
//     cout << power;
// }

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

// #include <iostream>
// // using namespace std;

// // int main()
// // {
// //     int n;
// //     cin >> n;

// //     int arr[n];
// //     int arr2[n];
// //     for (int i = 0; i < n; i++)
// //     {
// //         cin >> arr[i];
// //     }
// //     for (int i = 0; i < n; i++)
// //     {
// //         cout << arr[i] << " ";
// //     }
// //     cout << endl;

// //     for (int i = 0; i < n; i++)
// //     {
// //         int j = n - 1 - i;
// //         arr2[i] = arr[j];
// //         cout << arr2[i] << " ";
// //     }
// // }

// #include <iostream>
// using namespace std;

// void reverse(int arr[], int i, int j)
// {
//     while (i < j)
//     {
//         swap(arr[i], arr[j]);

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

//     // int i = 0, j = n - 1;
//     //     while (i < j)
//     //     {
//     //         int temp = a[i];
//     //         a[i] = a[j];
//     //         a[j] = temp;
//     //         i++;
//     //         j--;
//     //     }

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
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] != 0)
//         {
//             a[count] = a[i];
//             count++;
//         }
//     }
//     for (int i = count; i < n; i++)
//     {
//         a[i] = 0;
//     }

//     for (int i = 0; i < n; i++)
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
//     int a[n];

//     cout << "enter digits ";
//     for (int i = 0; i < n ; i++)
//     {
//         cin >> a[i];
//     }

//     for (int i = 0; i < n ; i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[i] == a[j])
//             {
//                 cout << "duplicate found at [" << i << "," << j << "]" << endl;
//             }
//         }
//     }
// }

// #include <iostream>
// using namespace std;

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

//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] != i + 1)
//         {
//             cout << "misisng no. is " << i + 1;
//             return 0;
//         }
//     }
// }

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

// #include <iostream>
// using namespace std;
// bool perfect(int n)
// {
//     int sum = 0;
//     for (int i = 1; i <= n / 2; i++)
//     {
//         if (n % i == 0)
//         {
//             sum += i;
//         }
//     }
//     if (sum == n)
//         return true;
//     else
//         return false;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     if (perfect(n))
//     {
//         cout << "perfect number ";
//     }
//     else
//     {
//         cout << "not perfect ";
//     }
// }

// #include <iostream>
// using namespace std;
// int fact(int ld)
// {
//     if (ld <= 1)
//         return 1;
//     return ld * fact(ld - 1);
// }
// bool strong(int n)
// {
//     int original = n;
//     int sum = 0;
//     while (n)
//     {
//         int ld = n % 10;
//         sum += fact(ld);
//         n /= 10;
//     }
//     if (original == sum)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     if (strong(n))
//     {
//         cout << "strong number ";
//     }
//     else
//     {
//         cout << "not strong number ";
//     }
// }

// #include <iostream>
// using namespace std;
// void swaping(int a[], int i, int j)
// {
//     swap(a[i], a[j]);
//     // int temp = a[i];
//     // a[i] = a[j];
//     // a[j] = temp;
// }
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
//     int i, j;
//     cout << "which index has to swap ";
//     cin >> i;
//     cout << "with which index ";
//     cin >> j;
//     swaping(a, i - 1, j - 1);
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
// }

// #include <iostream>
// #include <climits>
// using namespace std;

// int largest(int a[],int n)
// {
//     int mx = INT_MIN;
//     for(int i = 0; i < n ; i++){
//         if(a[i]>mx){
//             mx = a[i];
//         }
//     }
//     return mx;
// }
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
//         cout << a[i] << " ";
//     }
//     cout << endl;
//     cout<<"largest element in this array is "<<largest(a,n);
// }

// #include <iostream>
// using namespace std;
// void print(int n)
// {
//     if (n == 0)
//         return;
//     cout << n << endl;
//     print(n - 1);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     print(n);
// }

// #include <iostream>
// using namespace std;
// int fibo(int n)
// {
//     if (n < 2)
//     {
//         return 1;
//     }
//     return fibo(n - 1) + fibo(n - 2);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << "the term in fibonacci sequence at position " << n << " is " << fibo(n) << endl;
// }

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

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int a = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << a << " ";
//             a++;
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
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout <<(char)(j+64)<< " ";
          
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
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             if (j % 2 == 0)
//             {
//                 cout << " 0 ";
//             }
//             else
//             {
//                 cout << " 1 ";
//             }
//         }
//         cout << endl;
//     }
// }