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