#include <bits/stdc++.h>
using namespace std;

// returns number of painters needed if max units per painter is 'maxUnits'
int countPainters(vector<int> &arr, int maxUnits, int n)
{
    int painters = 1;
    int currentUnits = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (currentUnits + arr[i] <= maxUnits)
        {
            currentUnits += arr[i];
        }
        else
        {
            painters++;
            currentUnits = arr[i];
        }
    }
    return painters;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50};
    int n = arr.size();
    int k = 2;
    int minLimit = INT_MIN; // max element → minimum possible answer
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        minLimit = max(arr[i], minLimit);
        sum += arr[i];
    }
    int low = minLimit, high = sum;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (countPainters(arr, mid, n) <= k)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << ans;
}