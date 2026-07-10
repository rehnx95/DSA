#include <bits/stdc++.h>
using namespace std;
int maxel(int nums[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, nums[i]);
    }
    return maxi;
}
int caltotalhr(int nums[], int mid, int n)
{
    int totalhr = 0;
    for (int i = 0; i < n; i++)
    {
        totalhr += (nums[i] + (mid - 1)) / mid;
    }
    return totalhr;
}
int main()
{
    int nums[] = {3, 6, 7, 11};
    int n = 4;
    int h = 8;
    int ans = -1;
    int low = 1, high = maxel(nums, n);
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int totalhr = caltotalhr(nums, mid, n);
        if (totalhr <= h)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << ans << endl;
}