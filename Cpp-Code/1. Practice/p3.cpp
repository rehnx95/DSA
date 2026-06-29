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