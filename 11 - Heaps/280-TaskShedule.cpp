#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int frequencies[26] = {0};
        for (char task : tasks) {
            frequencies[task - 'A']++;
        }
        
        int f_max = 0;
        for (int i = 0; i < 26; i++) {
            f_max = max(f_max, frequencies[i]);
        }
        
        int n_max = 0;
        for (int i = 0; i < 26; i++) {
            if (frequencies[i] == f_max) {
                n_max++;
            }
        }
        
        int baseline_intervals = (f_max - 1) * (n + 1) + n_max;
        
        return max((int)tasks.size(), baseline_intervals);
    }
};

int main() {
    Solution solver;
    
    vector<char> tasks1 = {'A', 'A', 'A', 'B', 'B', 'B'};
    int n1 = 2;
    cout << "Test Case 1 Output: " << solver.leastInterval(tasks1, n1) << endl;
    
    vector<char> tasks2 = {'A', 'C', 'A', 'B', 'D', 'B'};
    int n2 = 1;
    cout << "Test Case 2 Output: " << solver.leastInterval(tasks2, n2) << endl;
    
    vector<char> tasks3 = {'A', 'A', 'A', 'B', 'B', 'B'};
    int n3 = 3;
    cout << "Test Case 3 Output: " << solver.leastInterval(tasks3, n3) << endl;
    
    return 0;
}
