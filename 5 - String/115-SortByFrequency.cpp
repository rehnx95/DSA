#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string frequencySort(string s) {
        map<char, int> freq;
        for (int i = 0; i < s.size(); i++) {
            freq[s[i]]++;
        }
        vector<pair<int, char>> vec;
        for (auto it : freq) {
            vec.push_back({it.second, it.first});
        }
                for (int i = 0; i < vec.size(); i++) {
            for (int j = i + 1; j < vec.size(); j++) {
                if (vec[j].first > vec[i].first) {
                    swap(vec[i], vec[j]);
                }
            }
        }
        string ans = "";
        for (auto p : vec) {
            for (int i = 0; i < p.first; i++) {
                ans.push_back(p.second);
            }
        }
        return ans;
    }
};
