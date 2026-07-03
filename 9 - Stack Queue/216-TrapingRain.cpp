#include <bits/stdc++.h>
using namespace std;
void display(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int trap1(vector<int> &arr)
{
    int n = arr.size();
    vector<int> prefixmax(n);
    vector<int> sufixmax(n);
    prefixmax[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefixmax[i] = max(arr[i], prefixmax[i - 1]);
    }
    sufixmax[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        sufixmax[i] = max(arr[i], sufixmax[i + 1]);
    }
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < prefixmax[i] && arr[i] < sufixmax[i])
        {
            total += min(prefixmax[i], sufixmax[i]) - arr[i];
        }
    }
    return total;
}
int trap2(vector<int> &arr)
{
    int n = arr.size();
    int total = 0;
    int lm = 0, rm = 0, l = 0, r = n - 1;
    while (l < r)
    {
        if (arr[l] <= arr[r])
        {
            if (arr[l] < lm)
            {
                total += lm - arr[l];
            }
            else
            {
                lm = arr[l];
            }
            l++;
        }
        else
        {
            if (arr[r] < rm)
            {
                total += rm - arr[r];
            }
            else
            {
                rm = arr[r];
            }
            r--;
        }
    }
    return total;
}
int main()
{
    vector<int> arr = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << trap2(arr);
    // cout << trap1(arr);

}