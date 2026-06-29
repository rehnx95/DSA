#include <bits/stdc++.h>
using namespace std;

void subset(int idx, vector<int> &ds, vector<int> &arr, vector<vector<int>> &ans, int n)
{
    // Save every subset state we arrive at (including empty [])
    ans.push_back(ds);
    
    for (int i = idx; i < n; i++)
    {
        // Skip duplicate elements
        if (i > idx && arr[i] == arr[i - 1]) continue;
        
        // Take element
        ds.push_back(arr[i]);
        
        // Move to next elements
        subset(i + 1, ds, arr, ans, n);
        
        // Backtrack
        ds.pop_back();
    }
}

int main()
{
    vector<int> arr = {1, 2, 2, 2, 3, 3};
    int n = 6;
    
    // Note: Input is already sorted here. If it wasn't, you must run sort() first.
    
    vector<int> ds;
    vector<vector<int>> ans;
    subset(0, ds, arr, ans, n);
    
    // Print results
    for (auto comb : ans)
    {
        if(comb.empty()) { cout << "[]" << endl; continue; }
        for (auto num : comb)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
