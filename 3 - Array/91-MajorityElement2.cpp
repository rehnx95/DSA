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
vector<int> optimal(vector<int> &nums)
{
    vector<int> ans;
    int cnt1 = 0, cnt2 = 0;
    int el1 = INT_MIN;
    int el2 = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        if (cnt1 == 0 && nums[i] != el2)
        {
            cnt1 = 1;
            el1 = nums[i];
        }
        else if (cnt2 == 0 && nums[i] != el1)
        {
            cnt2 = 1;
            el2 = nums[i];
        }
        else if (el1 == nums[i])
            cnt1++;
        else if (el2 == nums[i])
            cnt2++;
        else
        {
            cnt1--;
            cnt2--;
        }
    }
    cnt1 = 0;
    cnt2 = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (el1 == nums[i])
            cnt1++;
        if (el2 == nums[i])
            cnt2++;
    }
    int mini = (int)(nums.size() / 3) + 1;
    if (cnt1 >= mini)
        ans.push_back(el1);
    if (cnt2 >= mini)
        ans.push_back(el2);
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