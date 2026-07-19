#include <bits/stdc++.h>
using namespace std;

// 1. BRUTE FORCE APPROACH
// Time Complexity: O(N^2) - Uses nested loops to scan circularly
// Space Complexity: O(1) - No extra data structures used (excluding output array)
vector<int> nextGreaterCircularBrute(vector<int> &arr)
{
    int n = arr.size();
    vector<int> ans(n, -1); 

    for (int i = 0; i < n; i++)
    {
        // Check next n-1 positions in a circular manner
        for (int j = i + 1; j < i + n; j++)
        {
            int idx = j % n; // Wrap around index using modulo
            if (arr[idx] > arr[i])
            {
                ans[i] = arr[idx]; 
                break; // Stop immediately once found            
            }
        }
    }
    return ans; 
}

// 2. OPTIMAL APPROACH (Monotonic Stack)
// Time Complexity: O(N) - Each element is pushed and popped at most twice
// Space Complexity: O(N) - Used by the stack to store elements
vector<int> nextGreaterCircularOptimal(vector<int> &arr) {
    int n = arr.size();
    vector<int> ans(n, -1);
    stack<int> st;

    // Loop from 2N-1 down to 0 to simulate doubling the array
    for (int i = 2 * n - 1; i >= 0; i--) {
        // Pop smaller or equal elements since they can't be the next greater
        while (!st.empty() && st.top() <= arr[i % n]) {
            st.pop();
        }

        // Fill answers only for the actual elements (0 to n-1 indices)
        if (i < n) {
            if (!st.empty()) {
                ans[i] = st.top();
            }
        }
        
        // Push current element to stack for elements to its left
        st.push(arr[i % n]);
    }
    return ans;
}

int main()
{
    // Test Example Array
    vector<int> arr = {3, 8, 4, 1, 2};
    
    cout << "Original Array: ";
    for (int x : arr) cout << x << " ";
    cout << "\n\n";

    // Run Brute Force
    vector<int> brute_ans = nextGreaterCircularBrute(arr);
    cout << "Brute Force Result: ";
    for (int x : brute_ans) cout << x << " ";
    cout << "\n";

    // Run Optimal
    vector<int> optimal_ans = nextGreaterCircularOptimal(arr);
    cout << "Optimal Stack Result: ";
    for (int x : optimal_ans) cout << x << " ";
    cout << "\n";

    return 0;
}
