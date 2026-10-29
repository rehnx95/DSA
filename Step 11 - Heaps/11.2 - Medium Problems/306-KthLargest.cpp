#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    vector<int> nums = {3, 2, 1, 5, 6, 4};
    int k = 2;

    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int i = 0; i < k; i++)
    {
        minHeap.push(nums[i]);
    }

    for (int i = k; i < nums.size(); i++)
    {
        if (nums[i] > minHeap.top())
        {
            minHeap.pop();
            minHeap.push(nums[i]);
        }
    }

    cout << minHeap.top() << endl;

    return 0;
}
