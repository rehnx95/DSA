#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,0,1,1,1};
    int x = 0;
    int n = 5;

    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            cout << mid;
            break;
        }
        if (arr[low] == arr[mid] && arr[mid] == arr[high])
        {
            low++;
            high--;
            continue;
        }
        // check left sorted
        if (arr[low] < arr[mid])
        {
            // check if x is on left
            if (arr[low] <= x && x <= arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        // check right sorted
        else
        {
            // check if x is on right
            if (arr[mid] <= x && x <= arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
}