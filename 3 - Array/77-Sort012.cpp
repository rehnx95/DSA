#include <bits/stdc++.h>
using namespace std;

int main()
{
    // sort 0 1 2
    // brute force approach
    int arr[] = {0, 1, 2, 0, 1, 2, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    // sort(arr, arr + n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // better approach using counting sort
    // int count0 = 0, count1 = 0, count2 = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == 0)
    //         count0++;
    //     else if (arr[i] == 1)
    //         count1++;
    //     else
    //         count2++;
    // }
    // int i = 0;
    // while (count0--)
    // {
    //     arr[i++] = 0;
    // }
    // while (count1--)
    // {
    //     arr[i++] = 1;
    // }
    // while (count2--)
    // {
    //     arr[i++] = 2;
    // }
    // for (int j = 0; j < n; j++)
    // {
    //     cout << arr[j] << " ";
    // }

    // optimal approach using dutch national flag algorithm
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
}