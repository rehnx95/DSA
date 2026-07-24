#include <bits/stdc++.h>
using namespace std;

vector<int> brute(vector<int> &nums)
{
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        if (ans.size() == 0 || ans[0] != nums[i])
        {
            int count = 0;

            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                {
                    count++;
                }
            }
            if (count > nums.size() / 3)
            {
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
}
vector<int> better(vector<int> &nums)
{
    unordered_map<int, int> mp;
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }
    for (auto it : mp)
    {
        if (it.second > nums.size() / 3)
        {
            ans.push_back(it.first);
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {1, 2, 3, 1, 1, 2, 2};
    vector<int> result = brute(nums);
    for (int i : result)
    {
        cout << i << " ";
    }
    return 0;
}