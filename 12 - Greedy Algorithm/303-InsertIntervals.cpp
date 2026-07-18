#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 1. BRUTE FORCE APPROACH (Insert everything first, then merge using .back())
vector<vector<int>> insertBruteForce(vector<vector<int>>& intervals, vector<int>& newInterval) {
    vector<vector<int>> ans;
    int idx = intervals.size();
    
    // Step A: Insert elements chronologically based on start time
    for (int i = 0; i < intervals.size(); i++) {
        if (intervals[i][0] > newInterval[0]) {
            idx = i;
            break;
        }
        ans.push_back(intervals[i]);
    }
    ans.push_back(newInterval);
    for (int i = idx; i < intervals.size(); i++) {
        ans.push_back(intervals[i]);
    }
    
    // Step B: Merge overlapping elements
    vector<vector<int>> finalans;
    finalans.push_back(ans[0]);
    
    for(int i = 1; i < ans.size(); i++) {
        if(finalans.back()[1] >= ans[i][0]) {
            finalans.back()[1] = max(finalans.back()[1], ans[i][1]);
        } else {
            finalans.push_back(ans[i]);
        }
    }
    return finalans;
}

// 2. OPTIMAL APPROACH (Single pass logic using while loops)
vector<vector<int>> insertOptimal(vector<vector<int>>& intervals, vector<int>& newInterval) {
    vector<vector<int>> merged;
    int i = 0;
    int n = intervals.size();

    // Step A: Add all intervals that come strictly before the new interval
    while (i < n && intervals[i][1] < newInterval[0]) {
        merged.push_back(intervals[i]);
        i++;
    }

    // Step B: Merge all overlapping intervals with the new interval dynamically
    while (i < n && intervals[i][0] <= newInterval[1]) {
        newInterval[0] = min(newInterval[0], intervals[i][0]);
        newInterval[1] = max(newInterval[1], intervals[i][1]);
        i++;
    }
    merged.push_back(newInterval); 

    // Step C: Add all remaining intervals that come strictly after
    while (i < n) {
        merged.push_back(intervals[i]);
        i++;
    }

    return merged;
}

int main() {
    vector<vector<int>> intervals = {{1, 2}, {3, 4}, {5, 7}, {8, 10}, {12, 16}};
    vector<int> add = {6, 8};

    cout << "--- Testing Brute Force Approach ---" << endl;
    vector<vector<int>> bruteResult = insertBruteForce(intervals, add);
    for (int i = 0; i < bruteResult.size(); i++) {
        cout << "{" << bruteResult[i][0] << ", " << bruteResult[i][1] << "} ";
    }
    cout << "\n\n";

    cout << "--- Testing Optimal Approach ---" << endl;
    vector<vector<int>> optimalResult = insertOptimal(intervals, add);
    for (int i = 0; i < optimalResult.size(); i++) {
        cout << "{" << optimalResult[i][0] << ", " << optimalResult[i][1] << "} ";
    }
    cout << endl;

    return 0;
}
