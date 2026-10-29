#include <bits/stdc++.h>
using namespace std;
bool canplace(const vector<int> &arr, int minid, int cows)
{
    int n = arr.size();
    int nocows = 1;
    int lastposition = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - lastposition >= minid) // cow can be keep
        {
            nocows++;
            lastposition = arr[i];
        }
        if (nocows >= cows)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    vector<int> arr = {0, 3, 4, 7, 10, 9}; // distance btw consecutive represent distance to keep cows
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int cows = 4;
    int low = 1;
    int high = arr.back() - arr.front();
    int ans = -1;
    while (low <= high) // run from 1 (minimum distance btw any two cows is 1)
    {                   // till max distance that is high-low
        int mid = (low + high) / 2;
        if (canplace(arr, mid, cows))
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << ans;
}