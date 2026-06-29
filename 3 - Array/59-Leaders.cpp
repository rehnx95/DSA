#include <bits/stdc++.h>
using namespace std;

int main()
{
    // brute tc n^2 sc 1
    //  2 loop solution


    // optimal tc n sc n
    // traverse from right and keep track of max element and if current element is greater than max
    int arr[] = {10, 22, 12, 0, 3, 6};
    vector<int> ans;
    int leader = INT16_MIN;
    for (int i = 5; i >= 0; i--)
    {
        if (arr[i] > leader)
        {
            ans.push_back(arr[i]);
            leader = arr[i];
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}