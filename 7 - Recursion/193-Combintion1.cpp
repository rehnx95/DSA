#include <bits/stdc++.h>
using namespace std;

// void combination1(int idx, vector<int> &ds, int arr[], int n, int s, int sum)
// {
//     if (s == sum)
//     {
//         for (auto it : ds)
//         {
//             cout << it << " ";
//         }
//         cout << endl;
//         return;
//     }
//     if (s > sum || idx == n)
//         return;

//     s += arr[idx];
//     ds.push_back(arr[idx]);
//     combination1(idx, ds, arr, n, s, sum);
//     s -= arr[idx];
//     ds.pop_back();

//     combination1(idx + 1, ds, arr, n, s, sum);
// }

void combination2(int idx, vector<int> &ds, int arr[], int n, int sum)
{
    // Match found
    if (sum == 0)
    {
        for (auto it : ds)
            cout << it << " ";
        cout << endl;
        return;
    }

    // Stop invalid paths
    if (sum < 0 || idx == n)
        return;

    // Take element
    if (arr[idx] <= sum)
    {
        ds.push_back(arr[idx]);
        combination2(idx, ds, arr, n, sum - arr[idx]); // Same index to reuse
        ds.pop_back();
    }

    // Skip element
    combination2(idx + 1, ds, arr, n, sum); // Next index
}

int main()
{
    int arr[] = {2, 3, 6, 7};
    int n = 4;
    int sum = 7;
    vector<int> ds;
    // combination1(0, ds, arr, n, 0, sum);
    combination2(0, ds, arr, n, sum);
}