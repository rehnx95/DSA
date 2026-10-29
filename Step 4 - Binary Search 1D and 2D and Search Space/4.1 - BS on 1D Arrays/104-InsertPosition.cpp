#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 3, 5, 7};
    int x = 6;
    int n = 4;
    int ans = n;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << ans << endl;
}