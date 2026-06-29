#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {3, 4, 5, 1, 2};
    int low = 0, high = nums.size() - 1;
    int ans = INT_MAX;
    int idx = -1;
    while (low <= high)
    {

        int mid = low + (high - low) / 2;

        if (nums[low] <= nums[high])
        {
            if (nums[low] < ans)
            {
                idx = low;
                ans = nums[low];
            }
            break;
        }
        if (nums[mid] >= nums[low])
        {
            if (nums[low] < ans)
            {
                idx = low;
                ans = nums[low];
            }

            low = mid + 1;
        }
        else
        {
            high = mid - 1;
            if (nums[mid] < ans)
            {
                idx = mid;
                ans = nums[mid];
            }
        }
    }

    cout << idx << endl;
}