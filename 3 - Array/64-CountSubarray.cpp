#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // brute and better

    // int arr[] = {1, 2, 3, -3, 1, 1, 1, 4, 2, -3};
    // int k = 3;
    // int count = 0;
    // for (int i = 0; i < 10; i++)
    // {
    //     int sum = 0;
    //     for (int j = i; j < 10; j++)
    //     {
    //         sum = sum + arr[j];
    //         if (sum == k)
    //         {
    //             cout << i << " " << j << endl;
    //             count++;
    //         }
    //     }
    // }
    // cout << count;

    // optimal - prefix sum concept
    int arr[] = {1, 2, 3, -3, 1, 1, 1, 4, 2, -3};
    int k = 3;
    unordered_map<int, int> mpp;
    int presum = 0;
    int count = 0;
    mpp[0] = 1;
    for (int i = 0; i < 10; i++)
    {
        presum = presum + arr[i];
        int rem = presum - k;
        if (mpp.find(rem) != mpp.end())
        {
            count = count + mpp[rem];
        }
        mpp[presum]++;
    }
    cout << count;
}