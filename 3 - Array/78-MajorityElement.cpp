#include <bits/stdc++.h>
using namespace std;

int main()
{
    // majority element
    // brute force approach
    int arr[] = {3, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    // int maxCount = 0;
    // int majorityElement = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     int count = 0;
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             count++;
    //         }
    //     }
    //     if (count > maxCount)
    //     {
    //         maxCount = count;
    //         majorityElement = arr[i];
    //     }
    // }
    // cout << majorityElement << endl;

    // better approach using hash map
    // unordered_map<int, int> mp;
    // for (int i = 0; i < n; i++)
    // {
    //     mp[arr[i]]++;
    // }
    // for (auto it : mp)
    // {
    //     if (it.second > n / 2)
    //     {
    //         cout << it.first << endl;
    //         break;
    //     }
    // }

    // optimal approach using moore's voting algorithm

    int count = 0;
    int candidate = 0;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            candidate = arr[i];
        }
        if (arr[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    cout << candidate << endl;
}