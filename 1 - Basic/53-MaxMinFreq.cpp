#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {2, 3, 2, 1, 2, 1};
    unordered_map<int, int> mpp;

    for (int i = 0; i < 6; i++)
    {
        mpp[arr[i]]++;
    }

    for (auto it : mpp)
    {
        cout << it.first << "--" << it.second << endl;
    }
    int maxx = 0;
    int minn = INT_MAX;
    for (auto it : mpp)
    {
        if (it.second > maxx)
        {
            maxx = it.second;
        }
        if (it.second < minn)
        {
            minn = it.second;
        }
    }
    cout << maxx << endl;
    cout << minn << endl;
}