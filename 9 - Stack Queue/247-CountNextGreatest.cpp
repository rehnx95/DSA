#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q = 2;
    vector<int> indices = {0, 5};
    vector<int> arr = {3, 4, 2, 7, 5, 8, 10, 6};
    vector<int> ans;
    int i = 0;
    while (q--)
    {
        int idx = indices[i];
        int target = arr[idx];
        int count = 0;
        for (int j = idx + 1; j < arr.size(); j++)
        {
            if (arr[j] > target)
            {
                count++;
            }
        }
        ans.push_back(count);
        i++;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}