#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2, 4, 3, 1};
    int n = 5;

    // brute tc n^2 sc 1
    // for (int i = 1; i <= n; i++)
    // {
    //     int flag = 0;
    //     for (int j = 0; j < n-1; j++)
    //     {
    //         if (arr[j] == i)
    //         {
    //             flag = 1;
    //             break;
    //         }
    //     }
    //     if (flag == 0)
    //     {
    //         cout << i;
    //     }
    // }

    // better tc n sc 1
    // int hash[n + 1] = {0};
    // for (int i = 0; i < n-1; i++)
    // {
    //     hash[arr[i]] = 1;
    // }
    // for (int i = 1; i <= n; i++)
    // {
    //     if (hash[i] == 0)
    //     {
    //         cout << i;
    //     }
    // }

    // optimal1 tc n sc 1
    // int sum = (n * (n + 1)) / 2;
    // int s2 = 0;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     s2 = s2 + arr[i];
    // }
    // int mn = sum - s2;

    // cout << mn;

    // optimal2 tc n sc 1
    int xor1 = 0;
    int xor2 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        xor2 = xor2 ^ arr[i];
        xor1 = xor1 ^ (i + 1);
    }
    xor1 = xor1 ^ n;
    int mn = xor1 ^ xor2;
    cout << mn;
}