#include <bits/stdc++.h>
using namespace std;
int lowerbound(int arr[], int x, int n)
{
    int low = 0, high = n - 1;
    int ans = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] >= x)
        {
            high = mid - 1;
            ans = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
int upperbound(int arr[], int x, int n)
{
    int low = 0, high = n - 1;
    int ans = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
        {
            high = mid - 1;
            ans = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int arr[] = {5, 7, 7, 8, 8, 10};
    int x = 8;
    int n = 6;

    // brute tc n sc 1
    //     int ans1 = -1;
    //     int ans2 = -1;
    //     int low1 = 0, low2 = 0, high1 = n - 1, high2 = n - 1;
    //     while (low1 <= high1)
    //     {
    //         int mid1 = (low1 + high1) / 2;
    //         if (arr[mid1] >= x)
    //         {
    //             ans1 = mid1;
    //             high1 = mid1 - 1;
    //         }
    //         else
    //         {
    //             low1 = mid1 + 1;
    //         }
    //     }

    //     while (low2 <= high2)
    //     {
    //         int mid2 = (low2 + high2) / 2;
    //         if (arr[mid2] <= x)
    //         {
    //             ans2 = mid2;
    //             low2 = mid2 + 1;
    //         }
    //         else
    //         {
    //             high2 = mid2 - 1;
    //         }
    //     }
    // if (ans1 != -1 && arr[ans1] != x)
    //     ans1 = -1;
    // if (ans2 != -1 && arr[ans2] != x)
    //     ans2 = -1;
    //     cout << ans1 << " " << ans2 << endl;

    // optimal tc logn sc 1
    int lb = lowerbound(arr, x, n);
    int ub = upperbound(arr, x, n);

    if (lb == n || arr[lb] != x)
    {
        cout << -1 << " " << -1 << endl;
        return 0;
    }
    cout << lb << " " << ub - 1 << endl;
}