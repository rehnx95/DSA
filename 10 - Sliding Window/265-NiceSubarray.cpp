#include <bits/stdc++.h>
using namespace std;
int brute(vector<int> &arr, int k)
{
    int cnt = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < arr.size(); j++)
        {
            sum = sum + (arr[j] % 2);
            if (sum == k)
            {
                cnt++;
            }
        }
    }
    return cnt;
}

// better using hashmap
int better(vector<int> &arr, int k)
{
    int cnt = 0;
    int sum = 0;
    unordered_map<int, int> mp;
    for (int i = 0; i < arr.size(); i++)
    {
        sum = sum + arr[i] % 2;
        if (sum == k)
        {
            cnt++;
        }
        if (mp.find(sum - k) != mp.end())
        {
            cnt = cnt + mp[sum - k];
        }
        mp[sum]++;
    }
    return cnt;
}
// count total subarray less than or equal to goal sum<=goal
int subarray(vector<int> &arr, int k)
{
    if (k < 0)
        return 0;
    int n = arr.size();
    int l = 0, r = 0, cnt = 0, sum = 0;
    while (r < n)
    {
        sum = sum + (arr[r] % 2);
        while (sum > k)
        {
            sum = sum - (arr[l] % 2);
            l++;
        }
        cnt = cnt + (r - l + 1);
        r++;
    }
    return cnt;
}
int optimal(vector<int> &arr, int k)
{
    int cnt1 = subarray(arr, k);
    int cnt2 = subarray(arr, k - 1);
    return cnt1 - cnt2;
}
int main()
{
    vector<int> arr = {1, 1, 2, 1, 1};
    cout << brute(arr, 3) << endl;
    cout << better(arr, 3) << endl;
    cout << optimal(arr, 3) << endl;
}