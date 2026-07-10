#include <bits/stdc++.h>
using namespace std;

int main()
{
    // peak element in an array
    // brute force approach
    int arr[] = {1, 3, 20, 4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        if ((i == 0 || arr[i] >= arr[i - 1]) && (i == n - 1 || arr[i] >= arr[i + 1]))
        {
            cout << "Peak element: " << arr[i] << endl;
            break;
        }
    }

    // better approach using binary search
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if ((mid == 0 || arr[mid] >= arr[mid - 1]) && (mid == n - 1 || arr[mid] >= arr[mid + 1]))
        {
            cout << "Peak element: " << arr[mid] << endl;
            break;
        }
        else if (mid > 0 && arr[mid - 1] > arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
}