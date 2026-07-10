#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {1, 1, 2, 2, 3, 8, 8};

    // brute tc n^2 sc 1
    // for (int i = 0; i < 7; i++)
    // {
    //     int count = 0;
    //     for (int j = 0; j < 7; j++)
    //     {
    //         if (a[i] == a[j])
    //         {
    //             count++;
    //         }
    //     }
    //     if (count == 1)
    //     {
    //         cout << a[i];
    //     }
    // }

    // better tc n sc n
    // int mxx = a[0];
    // for (int i = 0; i < 7; i++)
    // {
    //     mxx = max(a[i], mxx);
    // }
    // int hash[mxx + 1] = {0};
    // for (int i = 0; i < 7; i++)
    // {
    //     hash[a[i]]++;
    // }
    // for (int i = 0; i <= mxx; i++)
    // {
    //     if (hash[i] == 1)
    //     {
    //         cout << i;
    //         break;
    //     }
    // }
    // optimal1 tc n sc 1
    // map<long long, int> mpp;
    // for (int i = 0; i < 7; i++)
    // {
    //     mpp[a[i]]++;
    // }
    // for (auto it : mpp)
    // {
    //     if (it.second == 1)
    //     {
    //         cout << it.first;
    //         break;
    //     }
    // }
    
    // optimal2 tc n sc 1
    int xr = 0;
    for (int i = 0; i < 7; i++)
    {
        xr = xr ^ a[i];
    }
    cout << xr;
}