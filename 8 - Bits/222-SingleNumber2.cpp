#include <bits/stdc++.h>
using namespace std;

int single2brute(vector<int> &arr)
{
    int ans = 0;
    for (int i = 0; i < 32; i++)
    {
        int cnt = 0;
        for (int j = 0; j < arr.size(); j++)
        {
            if (((arr[j] >> i) & 1) != 0)
            {
                cnt++;
            }
        }
        if (cnt % 3 != 0)
        {
            ans = ans | (1 << i);
        }
    }
    return ans;
}

int single2better(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    for (int i = 1; i < arr.size(); i += 3)
    {
        if (arr[i] != arr[i - 1])
        {
            return arr[i - 1];
        }
    }
    return arr[arr.size() - 1];
}

int single2optimal(vector<int> &arr)
{
    int ones = 0, twos = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ones = (ones ^ arr[i]) & ~twos;
        twos = (twos ^ arr[i]) & ~ones;
    }
    return ones;
}

int main()
{
    vector<int> arr = {5, 5, 5, 6, 4, 4, 4};
    cout << single2brute(arr) << "\n";
    cout << single2better(arr) << "\n";
    cout << single2optimal(arr) << "\n";
    return 0;
}
