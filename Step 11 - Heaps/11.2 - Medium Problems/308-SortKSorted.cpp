#include <bits/stdc++.h>
using namespace std;

void sortKSortedArray(std::vector<int> &arr, int k)
{
    int n = arr.size();

    // Create a min-heap (smallest element at the top)
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;

    // 1. Insert the first k + 1 elements into the min-heap
    // We use min(n, k + 1) to safely handle cases where array size is less than k
    for (int i = 0; i <= k && i < n; i++)
    {
        minHeap.push(arr[i]);
    }

    int index = 0;

    // 2. Process the remaining elements of the array
    for (int i = k + 1; i < n; i++)
    {
        // The smallest element in the current window goes to its correct position
        arr[index++] = minHeap.top();
        minHeap.pop();

        // Push the new element entering the window into the heap
        minHeap.push(arr[i]);
    }

    // 3. Empty the remaining elements from the heap into the array
    while (!minHeap.empty())
    {
        arr[index++] = minHeap.top();
        minHeap.pop();
    }
}

int main()
{
    std::vector<int> arr = {6, 5, 3, 2, 8, 10, 9};
    int k = 3;

    sortKSortedArray(arr, k);

    std::cout << "Sorted array: ";
    for (int num : arr)
    {
        std::cout << num << " ";
    }
    return 0;
}
