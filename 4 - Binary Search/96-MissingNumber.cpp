#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {5, 7, 10, 12};
    int n = arr.size();
    int k = 6;

    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        // Calculate how many numbers are missing up to index 'mid'
        int missing = arr[mid] - (mid + 1);

        if (missing < k)
        {
            low = mid + 1; // Look to the right
        }
        else
        {
            high = mid - 1; // Look to the left
        }
    }

    // The magic formula derived above
    cout << low + k;

    // int count = 0;
    // int j = 0;

    // int i = 1;
    // while (count < k)
    // {
    //     if (j < n && arr[j] == i)
    //     {
    //         j++;
    //     }
    //     else
    //     {
    //         count++;
    //     }
    //     if (count == k)
    //     {
    //         cout << i;
    //         break;
    //     }
    //     i++;
    // }

    // vector<int> miss(mxx + 1, 0);
    // int n2 = miss.size();
    // for (int i = 0; i < n; i++)
    // {
    //     miss[arr[i]]++;
    // }
    // int count = 0;
    // for (int i = 1; i < n2; i++)
    // {
    //     if (miss[i] == 0)
    //     {
    //         count++;
    //     }
    //     if (count == k)
    //     {
    //         cout << i;
    //         break;
    //     }
    // }
}