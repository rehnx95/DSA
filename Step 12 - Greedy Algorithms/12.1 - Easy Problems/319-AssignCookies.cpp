#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> greed = {1, 5, 3, 3, 4};
    vector<int> cookiessize = {4, 2, 1, 2, 1, 3};
    sort(greed.begin(), greed.end());
    sort(cookiessize.begin(), cookiessize.end());
    int left = greed[0];
    int right = cookiessize[0];
    while (cookiessize.size() > right)
    {
        if (greed[left] <= cookiessize[right])
        {
            left++;
            right++;
        }
        else
        {
            right++;
        }
    }
    cout << left;
}