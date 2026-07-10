#include <bits/stdc++.h>
using namespace std;

// returns number of subarrays needed if max sum per subarray is 'maxSum'
int countSplits(const vector<int> &arr, int maxSum, int n)
{
    int subarrays = 1;
    int currentSum = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (currentSum + arr[i] <= maxSum)
        {
            currentSum += arr[i];
        }
        else
        {
            subarrays++;
            currentSum = arr[i];
        }
    }
    return subarrays;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 3;
    int n = arr.size();
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
        if (countSplits(arr, mid, n) <= k)
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