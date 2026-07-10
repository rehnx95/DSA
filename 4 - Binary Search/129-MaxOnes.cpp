#include <bits/stdc++.h>
using namespace std;
int lowerbound(int arr[], int x, int n)
{
    int low = 0, high = n - 1;
    int ans = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] >= x)
        {
            high = mid - 1;
            ans = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int matrix[4][4] = {{1, 1, 1, 1},
                        {0, 0, 1, 1},
                        {0, 1, 1, 1},
                        {1, 1, 1, 1}};
    int n = 4, m = 4;
    // brute
    //     int mx = -1;
    //     int idx = -1;
    //     for (int i = 0; i < n; i++)
    //     {
    //         int sum = 0;
    //         for (int j = 0; j < m; j++)
    //         {
    //             sum = sum + matrix[i][j];
    //         }
    //         if (sum > mx)
    //         {
    //             mx = sum;
    //             idx = i;
    //             break;
    //         }
    //     }
    //     cout << idx;

    // optimal tc nlogm sc 1
    // since 1's are on right side we can use binary search to find first occurence of 1 and then number of 1's will be m - index of first 1
    
    int mx = -1;
    int idx = -1;
    for (int i = 0; i < n; i++)
    {
        int noones = m - lowerbound(matrix[i], 1, n);
        if (noones >= mx)
        {
            mx = noones;
            idx = i;
        }
    }
    cout << idx;
}