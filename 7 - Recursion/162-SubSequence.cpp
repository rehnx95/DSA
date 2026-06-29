#include <bits/stdc++.h>
using namespace std;

// void subsequence(int idx, vector<int> ds, int arr[], int n, vector<vector<int>> &ans)
// {
//     if (idx == n)
//     {
//         ans.push_back(ds);
//         return;
//     }
//     // not take
//     subsequence(idx + 1, ds, arr, n, ans);

//     // take
//     ds.push_back(arr[idx]);
//     subsequence(idx + 1, ds, arr, n, ans);
// }

void subsequence(int idx, vector<int> &ds, int arr[], int n)
{
    if (idx == n)
    {
        for (auto it : ds)
        {
            cout << it << " ";
        }
        if (ds.size() == 0)
        {
            cout << "{}";
        }
        cout << endl;
        return;
    }

    // take
    ds.push_back(arr[idx]);
    subsequence(idx + 1, ds, arr, n);
    ds.pop_back();

    // not take
    subsequence(idx + 1, ds, arr, n);
}
int main()
{
    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> ds;
    subsequence(0, ds, arr, n);

    // vector<int> ds;
    // vector<vector<int>> ans;
    // subsequence(0, ds, arr, n, ans);

    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << "[ ";
    //     for (int j = 0; j < ans[i].size(); j++)
    //     {
    //         cout << ans[i][j] << " ";
    //     }
    //     cout << "]" << endl;
    // }
}