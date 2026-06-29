#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {3, 3, 7, 7, 10, 11, 11};
    int n = 7;
    int low = 1, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] != arr[mid + 1] && arr[mid] != arr[mid - 1])
        {
            cout << arr[mid] << endl;
        }
        if (mid % 2 == 0)
        {
            if (arr[mid] == arr[mid + 1]) // if it true element is on right half
            {                             // so eliminate the left half
                low = mid + 1;
            }
            else // if it true element is on left half
                 // so eliminate the right half
            {
                high = mid - 1;
            }
        }
        else
        {
            if (arr[mid] == arr[mid - 1]) // if it true element is on right half
                                          // so eliminate the left half
            {
                low = mid + 1;
            }
            else // if it true element is on left half
                 // so eliminate the right half
            {
                high = mid - 1;
            }
        }
    }
}