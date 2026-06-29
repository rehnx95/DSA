// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cout<<i;
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     if (n % 2 == 0)
//         cout << "even";
//     else
//         cout << "odd";
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum = sum + i;
//     }
//     cout<<sum;
// }

// #include <iostream>
// using namespace std;
// int square(int n){
//     return n*n;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     square(n);
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
//             cout<<" * ";
//         }
//         cout<<endl;
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
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include <iostream>
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
//     cout << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum = sum + arr[i];
//     }
//     cout << sum;
// }

// #include <iostream>
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
//     cout << endl;
//     int mx = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]>mx){
//             mx = arr[i];
//         }
//     }
//     cout<<mx;

// }

// #include <iostream>
// using namespace std;
// int print(int n){
//     if(n==0) return 1;
//     print(n-1);
//     cout<<n<<" ";
// }
// int main()
// {
//     int n;
//     cin>>n;
//     print(n);
// }

// #include <iostream>
// using namespace std;
// int fact(int n)
// {
//     if (n == 0 || n == 1)
//         return 1;

//     return n * fact(n - 1);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     if (n < 0)
//     {
//         cout << "invalid";
//         return 0;
//     }
//     cout << fact(n);
// }
