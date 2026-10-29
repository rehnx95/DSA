#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {3, 4, 5, 1, 2};
    int low = 0, high = nums.size() - 1;
    int mn = INT_MAX;

    while (low <= high)
    {

        int mid = low + (high - low) / 2;

        // if both left right are sorted
        if (nums[low] <= nums[high])
        {
            mn = min(mn, nums[low]);
            break;
        }
        
        if (nums[mid] >= nums[low])
        {
            mn = min(mn, nums[low]);
            low = mid + 1;
        }
        else
        {
            mn = min(mn, nums[mid]);

            high = mid - 1;
        }
    }

    cout << mn << endl;
}