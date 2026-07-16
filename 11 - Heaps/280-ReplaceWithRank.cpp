#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {20, 15, 26, 2, 98, 6};
    vector<int> sorted = arr;
    sort(sorted.begin(), sorted.end());
    map<int, int> mpp;
    int rank = 1;
    for (int i = 0; i < sorted.size(); i++)
    {
        mpp[sorted[i]] = rank;
        rank++;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] = mpp[arr[i]];
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}