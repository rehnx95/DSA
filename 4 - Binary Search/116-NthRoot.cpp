#include <bits/stdc++.h>
using namespace std;
int power(int mid, int n, int m)
{
    // return 1 if = m
    // return 0 if < m
    // return 2 if > m
    long long p = 1;
    for (int i = 1; i <= n; i++)
    {
        p = p * mid;
        if (p > m)  // greater than m so eliminate right half
            return 2;
    }
    if (p == m)   // found mid^n print ans
        return 1;
    return 0;    // less than m so eliminate left half
}
int main()
{
    int n = 4;
    int m = 256;
    int low = 1, high = m;
    int ans=-1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        int p = power(mid, n, m); // mid^n
        if (p == 1)
        {
            ans = mid;
            break;
        }
        else if (p == 2)
        {
            high = mid - 1;
        }
        else // p = 0
        {
            low = mid + 1;
        }
    }
    cout << ans<<endl;
}