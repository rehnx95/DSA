#include <bits/stdc++.h>
using namespace std;

void combination(int idx, vector<int> &ds, vector<int> &arr, vector<vector<int>> &ans, int target)
{
    // Match found
    if (target == 0)
    {
        ans.push_back(ds);
        return;
    }

    for (int i = idx; i < arr.size(); i++)
    {
        // Skip duplicate elements
        if (i > idx && arr[i] == arr[i - 1])
            continue;

        // Element too big, stop loop
        if (arr[i] > target)
            break;

        // Take element
        ds.push_back(arr[i]);
        combination(i + 1, ds, arr, ans, target - arr[i]); // Move to i + 1 & subtract
        ds.pop_back();
    }
}

int main()
{
    vector<int> arr = {1, 1, 1, 2, 2};
    int target = 4;

    // Crucial fix: Sort array to handle duplicates properly
    sort(arr.begin(), arr.end());

    vector<int> ds;
    vector<vector<int>> ans;
    combination(0, ds, arr, ans, target);

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
