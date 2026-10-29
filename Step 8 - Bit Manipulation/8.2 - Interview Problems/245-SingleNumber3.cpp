#include <bits/stdc++.h>
using namespace std;
vector<int> single3(vector<int> &arr)
{
    vector<int> ans;
    long xorr = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        xorr = xorr ^ arr[i];
    }
    int rightmost = ((xorr & (xorr - 1)) ^ xorr);
    int b1 = 0, b2 = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if ((arr[i] & rightmost) != 0)
        {
            b1 = b1 ^ arr[i];
        }
        else
        {
            b2 = b2 ^ arr[i];
        }
    }
    ans.push_back(b1);
    ans.push_back(b2);
    return ans;
}
int main()
{
    vector<int> arr = {2, 4, 2, 14, 8, 7, 7, 8};
    vector<int> result = single3(arr);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}