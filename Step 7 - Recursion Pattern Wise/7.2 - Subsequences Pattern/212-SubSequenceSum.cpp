#include <bits/stdc++.h>
using namespace std;

void subsequence(int idx, vector<int> &ds, vector<int> &arr, int n, int s, int sum)
{
    if (idx == n)
    {
        if (s == sum)
        {
            for (auto it : ds)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }

    // take
    ds.push_back(arr[idx]);
    s += arr[idx];
    subsequence(idx + 1, ds, arr, n, s, sum);

    // not take
    ds.pop_back();
    s -= arr[idx];
    subsequence(idx + 1, ds, arr, n, s, sum);
}
int main()
{
    vector<int> arr = {2, 1, 1};
    int n = 3;
    int sum = 2;
    vector<int> ds;
    // subsequence(0, ds, arr, n, 0, sum);
}