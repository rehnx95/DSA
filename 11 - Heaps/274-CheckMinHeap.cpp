#include <bits/stdc++.h>
using namespace std;

bool isMinHeap(int arr[], int n)
{
    // Loop through all internal nodes
    for (int i = 1; i <= n / 2; i++)
    {
        int left = 2 * i;
        int right = 2 * i + 1;

        // Check left child
        if (left <= n && arr[i] > arr[left])
        {
            return false;
        }
        // Check right child
        if (right <= n && arr[i] > arr[right])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    // 1-indexed array (arr[0] is dummy)
    int arr[] = {-1, 10, 20, 30, 40, 50};
    int n = 5;

    if (isMinHeap(arr, n))
    {
        cout << "Given array is a Min Heap" << endl;
    }
    else
    {
        cout << "Given array is NOT a Min Heap" << endl;
    }
    return 0;
}
