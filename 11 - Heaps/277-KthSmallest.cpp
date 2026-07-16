#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    vector<int> nums = {7, 10, 4, 3, 20, 15};
    int k = 3;

    priority_queue<int> maxHeap;

    for (int i = 0; i < k; i++) {
        maxHeap.push(nums[i]);
    }

    for (int i = k; i < nums.size(); i++) {
        if (nums[i] < maxHeap.top()) {
            maxHeap.pop();
            maxHeap.push(nums[i]);
        }
    }

    cout << maxHeap.top() << endl;

    return 0;
}
