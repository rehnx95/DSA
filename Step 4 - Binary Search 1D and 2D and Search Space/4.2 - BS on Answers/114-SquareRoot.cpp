#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 8;
    int low = 1, high = n;
    int ans;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (mid * mid >= n)
        {

            high = mid - 1;
        }
        else // mid<=sqrt(n) -> mid*mid<=n
        {
            ans = mid;
            low = mid + 1;
        }
    }
    cout << ans;
}