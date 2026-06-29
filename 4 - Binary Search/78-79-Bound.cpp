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
    // lower bound means smallest idx that arr[mid]>=x

    int arr[] = {3, 4, 8, 15, 19};
    int x = 4;
    int n = 5;
    int lb = lowerbound(arr, x, n);
    int up = upperbound(arr, x, n);
    cout << lb << " " << up << endl;
}