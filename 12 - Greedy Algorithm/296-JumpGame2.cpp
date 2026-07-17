#include <bits/stdc++.h>
using namespace std;

int recu(int idx, int n, vector<int> &arr)
{
    if (idx >= n - 1)
        return 0;
    if (arr[idx] == 0)
        return 1e9;

    int mini = 1e9;
    for (int i = 1; i <= arr[idx]; i++)
    {
        mini = min(mini, 1 + recu(idx + i, n, arr));
    }
    return mini;
}

int brute(vector<int> &arr)
{
    return recu(0, arr.size(), arr);
}

int optimal(vector<int> &arr)
{
    int j = 0, r = 0, l = 0;
    while (r < arr.size() - 1)
    {
        int far = 0;
        for (int i = l; i <= r; i++)
        {
            far = max(far, i + arr[i]);
        }
        l = r + 1;
        r = far;
        j++;
    }
    return j;
}

int main()
{
    vector<int> arr = {2, 3, 1, 1, 4};
    cout << brute(arr) << endl;
    cout << optimal(arr) << endl;
}
