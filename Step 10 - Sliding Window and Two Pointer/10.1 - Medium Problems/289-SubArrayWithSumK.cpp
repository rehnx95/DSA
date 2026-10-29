#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {5, 2, 1, 7, 10, 10};
    int k = 14;

    int l = 0;
    int r = 0;
    int sum = 0;
    int mxl = 0;
    while (r < 6)
    {
        sum = sum + arr[r];
        if (sum > k)
        {
            sum = sum - arr[l];
            l++;
        }
        else if (sum <= k)
        {
            mxl = max(mxl, r - l + 1);
        }
        r++;
    }
    cout << mxl;
}