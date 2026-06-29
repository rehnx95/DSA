#include <bits/stdc++.h>
using namespace std;

int subsequence(int idx, int arr[], int n, int s, int sum)
{
    if (idx == n)
    {
        if (s == sum)
        {
            return 1;
        }
        return 0;
    }

    // take
    s += arr[idx];
    int take = subsequence(idx + 1, arr, n, s, sum);
    
    // not take
    s -= arr[idx];
    int notTake = subsequence(idx + 1, arr, n, s, sum);

    return take + notTake;
}

int main()
{
    int arr[] = {2, 1, 1};
    int n = 3;
    int sum = 2;
    cout << subsequence(0, arr, n, 0, sum) << endl;
}