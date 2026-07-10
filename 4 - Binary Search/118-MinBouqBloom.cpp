#include <bits/stdc++.h>
using namespace std;
bool bloom(int arr[], int day, int m, int k, int n)
{

    // best code for consecutive
    int noofbouq = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= day)
        {
            count++;
        }
        else
        {
            noofbouq += count / k; // think 
            count = 0;
        }
    }
    noofbouq += count / k;  // think
    if (noofbouq >= m)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int arr[] = {7, 7, 7, 7, 13, 11, 12, 7};
    int n = 8;
    int m = 2, k = 3;
    int mn = INT_MAX, mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mn = min(arr[i], mn);
        mx = max(arr[i], mx);
    }
    int low = mn, high = mx;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (bloom(arr, mid, m, k, n))
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << low << endl;
}