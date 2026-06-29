#include <bits/stdc++.h>
using namespace std;

int main()
{

    // brute tc n sc n
    vector<int> arr = {3, 1, -2, -5, 2, -4};
    // vector<int> posi;
    // vector<int> nega;
    // for (int i = 0; i < 6; i++)
    // {
    //     if (arr[i] > 0)
    //     {
    //         posi.push_back(arr[i]);
    //     }
    //     else
    //     {
    //         nega.push_back(arr[i]);
    //     }
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     arr[2 * i] = posi[i];
    //     arr[(2 * i) + 1] = nega[i];
    // }

    // optimal tc n sc n
    vector<int> ans(6, 0);
    int posidx = 0, negidx = 1;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] < 0)
        {
            ans[negidx] = arr[i];
            negidx += 2;
        }
        else
        {
            ans[posidx] = arr[i];
            posidx += 2;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout << ans[i] << " ";
    }
}