#include <bits/stdc++.h>
using namespace std;

void permutation(vector<int> &ds, vector<int> &arr, vector<int> &hash, vector<vector<int>> &ans)
{
    if (ds.size() == arr.size())
    {
        ans.push_back(ds);
        return;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (hash[i] == 0)
        {
            ds.push_back(arr[i]);
            hash[i]++;
            permutation(ds, arr, hash, ans);
            ds.pop_back();
            hash[i]--;
        }
    }
}

void permutation2(int idx, vector<int> &arr, vector<vector<int>> &ans)
{
    if (idx == arr.size())
    {
        ans.push_back(arr);
        return;
    }
    for (int i = idx; i < arr.size(); i++)
    {
        swap(arr[idx], arr[i]);
        permutation2(idx + 1, arr, ans);
        swap(arr[idx], arr[i]);
    }
}

int main()
{
    vector<int> arr = {1, 2, 3};
    vector<int> hash(arr.size(), 0);
    vector<int> ds;
    vector<vector<int>> ans;
    // permutation(ds, arr, hash, ans);
    permutation2(0, arr, ans);

    // Print results
    for (auto comb : ans)
    {
        for (auto num : comb)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}