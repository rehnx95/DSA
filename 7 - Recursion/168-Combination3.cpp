#include <bits/stdc++.h>
using namespace std;

void combination(int num, vector<int> &ds, int target, int k, vector<vector<int>> &ans)
{
    if (ds.size() == k)
    {
        if (target == 0)
        {
            ans.push_back(ds);
        }
        return;
    }
    if (target < 0 || num > 9)
        return;
    for (int i = num; i <= 9; i++)
    {
        if (i > target)
            break;
        ds.push_back(i);
        combination(i + 1, ds, target - i, k, ans);
        ds.pop_back();
    }
}

int main()
{

    int target = 9;
    int k = 3;

    vector<int> ds;
    vector<vector<int>> ans;
    combination(1, ds, target, k, ans);

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