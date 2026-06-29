#include <bits/stdc++.h>
using namespace std;

int main()
{
    // two sum
    // brute force approach
    int arr[] = {2, 7, 11, 15};
    int target = 9;
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "Indices: " << i << ", " << j << endl;
                cout << "Values: " << arr[i] << ", " << arr[j] << endl;
                break;
            }
        }
    }

    // optimized approach using hash map
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int complement = target - arr[i];
        if (mp.find(complement) != mp.end())
        {
            cout << "Indices: " << mp[complement] << ", " << i << endl;
            cout << "Values: " << complement << ", " << arr[i] << endl;
            break;
        }
        mp[arr[i]] = i;
    }
}