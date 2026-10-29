#include <bits/stdc++.h>
using namespace std;
int maxscore(vector<int> &cardPoints, int k)
{
    int n = cardPoints.size();
    int lsum = 0;
    for (int i = 0; i < k; i++)
    {
        lsum = lsum + cardPoints[i];
    }
    int mx = lsum;
    int rsum = 0;
    int ridx = n - 1;
    for (int i = k - 1; i >= 0; i--)
    {
        lsum = lsum - cardPoints[i];
        rsum = rsum + cardPoints[ridx];
        ridx--;
        mx = max(mx, lsum + rsum);
    }
    return mx;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int k = 3;
    int score = maxscore(arr, k);
}