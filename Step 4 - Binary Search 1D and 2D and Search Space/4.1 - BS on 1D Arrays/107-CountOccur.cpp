#include <bits/stdc++.h>
using namespace std;

int main()
{
    // count occurrences of a number in a sorted array

    // brute force approach
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 2;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }
    cout << count << endl;

    // better approach using binary search
    int first = lower_bound(arr, arr + n, x) - arr;
    int last = upper_bound(arr, arr + n, x) - arr;
    cout << last - first << endl;
}