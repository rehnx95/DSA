#include <bits/stdc++.h>
using namespace std;
int brute(vector<int> &arr, int k)
{
    int mxl = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        int zero = 0;
        for (int j = i; j < arr.size(); j++)
        {
            if (arr[i] == 0)
                zero++;
            if (zero <= k)
                mxl = max(mxl, j - i + 1);
            else
                break;
        }
    }
    return mxl;
}
int better(vector<int> &arr, int k)
{
    int n = arr.size();
    int l = 0, r = 0;
    int mxl = 0;
    int z = 0;
    while (r < n)
    {
        if (arr[r] == 0)
        {
            z++;
        }

        while (z > k)
        {
            if (arr[l] == 0)
                z--;
            l++;
        }
        if (z <= k)
        {
            mxl = max(mxl, r - l + 1);
        }

        r++;
    }
    return mxl;
}
int optimal(vector<int> &arr, int k)
{
    int n = arr.size();
    int l = 0, r = 0;
    int mxl = 0;
    int z = 0;
    while (r < n)
    {
        if (arr[r] == 0)
        {
            z++;
        }

        if (z > k)
        {
            if (arr[l] == 0)
                z--;
            l++;
        }
        if (z <= k)
        {
            mxl = max(mxl, r - l + 1);
        }

        r++;
    }
    return mxl;
}
int main()
{
    vector<int> arr = {1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0};
    cout << optimal(arr, 2);
}