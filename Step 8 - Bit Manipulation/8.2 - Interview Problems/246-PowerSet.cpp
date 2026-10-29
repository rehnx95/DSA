#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums = {1, 2, 3};
    int n = nums.size();
    vector<vector<int>> ans;
    int subsets = 1 << n;
    
    for (int i = 0; i < subsets; i++) {
        vector<int> list;
        for (int j = 0; j < n; j++) {
            if ((i & (1 << j)) != 0) {
                list.push_back(nums[j]);
            }
        }
        ans.push_back(list);
    }

    for (int i = 0; i < ans.size(); i++) {
        cout << "[ ";
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << "]\n";
    }

    return 0;
}
