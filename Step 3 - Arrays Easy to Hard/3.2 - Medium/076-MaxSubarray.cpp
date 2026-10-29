#include <bits/stdc++.h>
using namespace std;

int main()
{
    // maximum subarray sum
    // brute force approach
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    // int maxSum = INT_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     int currentSum = 0;
    //     for (int j = i; j < n; j++)
    //     {
    //         currentSum += arr[j];
    //         maxSum = max(maxSum, currentSum);
    //     }
    // }
    // cout << maxSum << endl;

    // better approach using prefix sum
    // int prefixSum[n];
    // prefixSum[0] = arr[0];
    // for (int i = 1; i < n; i++)
    // {
    //     prefixSum[i] = prefixSum[i - 1] + arr[i];
    // }
    // int maxSum = INT_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         int currentSum = prefixSum[j] - (i > 0 ? prefixSum[i - 1] : 0);
    //         maxSum = max(maxSum, currentSum);
    //     }
    // }
    // cout << maxSum << endl;

    // optimal approach using kadane's algorithm
    int maxSum = arr[0];
    int currentSum = arr[0];
    for (int i = 1; i < n; i++)
    {
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }
    cout << maxSum << endl;
}