#include <bits/stdc++.h>

using namespace std;
int brute(int arr[], int n, int k)
{
    int leng = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        // this for is used to determine subarray
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            // int sum = 0;
            // for (int k = i; k <= j; k++)
            // {
            //     sum += arr[k];
            // }
            if (sum == k)
            {
                leng = max(leng, j - i + 1);
            }
        }
    }
    return leng;
}
int better(int arr[], int n, int k)
{
    map<long long, int> presum;
    long long sum = 0;
    int mxlen = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum == k)
        {
            mxlen = max(mxlen, i + 1);
        }
        long long rem = sum - k;
        if (presum.find(rem) != presum.end())
        {
            int len = i - presum[rem];
            mxlen = max(mxlen, len);
            if (presum.find(sum) == presum.end())
            {
                presum[sum] = i;
            }
        }
    }
    return mxlen;
}
int optimal(int arr[], int n, int k)
{
    int left = 0, right = 0;
    long long sum = arr[0];
    int mxlen = 0;
    while (right < n)
    {
        while (left <= right && sum > k)
        {
            sum = sum - arr[left];
            left++;
        }
        if (sum == k)
        {
            mxlen = max(mxlen, right - left + 1);
        }
        right++;
        if (right < n)
        {
            sum = sum + arr[right];
        }
    }
    return mxlen;
}
int main()
{
    int arr[] = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    int n = 10;
    int k = 3;
    int leng1 = brute(arr, n, k);
    int leng2 = better(arr, n, k);
    int leng3 = optimal(arr, n, k);

    cout << leng1 << " " << leng2 << " " << leng3;
}