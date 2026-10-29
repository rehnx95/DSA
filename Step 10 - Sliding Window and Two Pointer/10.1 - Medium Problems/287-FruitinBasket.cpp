#include <bits/stdc++.h>
using namespace std;
int brute(vector<int> &arr)
{
    int mxl = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        map<int, int> mpp;
        int l = 0;
        for (int j = i; j < arr.size(); j++)
        {
            mpp[arr[j]]++;
            if (mpp.size() > 2)

                break;
            l++;
        }
        mxl = max(l, mxl);
    }
    return mxl;
}
int better(vector<int> &arr)
{
    int l = 0, r = 0, mxl = 0;
    map<int, int> mpp;
    int n = arr.size();
    while (r < n)
    {
        mpp[arr[r]]++;
        if (mpp.size() > 2)
        {
            while (mpp.size() != 2)
            {
                mpp[arr[l]]--;
                if (mpp[arr[l]] == 0)
                    mpp.erase(arr[l]);
                l++;
            }
        }
        mxl = max(r - l + 1, mxl);
        r++;
    }
    return mxl;
}
int optimal(vector<int> &arr)
{
    int l = 0, r = 0, mxl = 0;
    map<int, int> mpp;
    int n = arr.size();
    while (r < n)
    {
        mpp[arr[r]]++;
        if (mpp.size() > 2)
        {
            mpp[arr[l]]--;
            if (mpp[arr[l]] == 0)
                mpp.erase(arr[l]);
            l++;
        }
        mxl = max(r - l + 1, mxl);
        r++;
    }
    return mxl;
}
int main()
{
    vector<int> arr = {3, 3, 3, 1, 2, 1, 1, 2, 3, 3, 4};
    cout << brute(arr) << endl;
    cout << better(arr) << endl;
    cout << optimal(arr) << endl;
}