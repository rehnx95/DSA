#include <bits/stdc++.h>
using namespace std;

// void subsetsum(int idx, vector<int> &ds, int arr[], int n,vector<int>&ans)
// {
//     if(idx==n){
//     int sum=0;
//     for (int i=0;i<ds.size();i++)
//     {
//         sum=sum+ds[i];
//     }
//     ans.push_back(sum);
//     return;

// }
//     subsetsum(idx+1,ds,arr,n,ans);

//     ds.push_back(arr[idx]);
//     subsetsum(idx+1,ds,arr,n,ans);
//     ds.pop_back();

// }

void subsetsum2(int idx, int arr[], int n, vector<int> &ans, int sum)
{
    if (idx == n)
    {
        ans.push_back(sum);
        return;
    }

    // pick
    subsetsum2(idx + 1, arr, n, ans, sum + arr[idx]);

    // not pick
    subsetsum2(idx + 1, arr, n, ans, sum);
}

int main()
{
    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> ds;
    vector<int> ans;
    // subsetsum(0, ds, arr, n, ans);

    subsetsum2(0, arr, n, ans, 0);
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}