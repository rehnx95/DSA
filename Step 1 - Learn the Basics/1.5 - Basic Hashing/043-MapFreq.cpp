#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "enter array size: ";
    cin >> n;
    int arr[n];
    // map<int, int> mpp;
    unordered_map<int, int> mpp;
    // it does not sort 

    cout << "enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    // iterator in map
    // for (auto it : mpp)
    // {
    //     cout << it.first << "--" << it.second << endl;
    // }

    int q;
    cout << "enter how many queries: ";
    cin >> q;
    while (q--)
    {
        int num;
        cout << "enter num to find occurance: ";
        cin >> num;
        cout << mpp[num] << endl;
    }
}