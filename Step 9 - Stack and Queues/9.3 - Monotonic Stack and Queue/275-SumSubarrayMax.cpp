#include <bits/stdc++.h>
using namespace std;

int sum1_max(vector<int> &arr)
{
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int maxim = arr[i];
        for (int j = i; j < arr.size(); j++)
        {
            maxim = max(arr[j], maxim);
            sum = (sum + maxim);
        }
    }
    return sum;
}

vector<int> getPGE(vector<int> &arr) {
    int n = arr.size();
    stack<int> st;
    vector<int> pge_indices(n);
    
    for (int i = 0; i < n; i++) {
        while (!st.empty() && arr[st.top()] <= arr[i]) {
            st.pop();
        }
        pge_indices[i] = st.empty() ? -1 : st.top();
        st.push(i);
    }
    return pge_indices;
}

vector<int> getNGE(vector<int> &arr) {
    int n = arr.size();
    stack<int> st;
    vector<int> nge_indices(n);
    
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && arr[st.top()] < arr[i]) {
            st.pop();
        }
        nge_indices[i] = st.empty() ? n : st.top();
        st.push(i);
    }
    return nge_indices;
}

int sum2_max(vector<int> &arr) {
    int n = arr.size();
    vector<int> pge_arr = getPGE(arr);
    vector<int> nge_arr = getNGE(arr);
    
    long long total_sum = 0;
    long long mod = 1e9 + 7;
    
    for (int i = 0; i < n; i++) {
        long long left_dist = i - pge_arr[i];
        long long right_dist = nge_arr[i] - i;
        
        long long total_subarrays = (left_dist * right_dist) % mod;
        long long contribution = (total_subarrays * arr[i]) % mod;
        
        total_sum = (total_sum + contribution) % mod;
    }
    return total_sum;
}

int main()
{
    vector<int> arr = {3, 1, 2, 4};
    cout << "Brute Max: " << sum1_max(arr) << "\n";
    cout << "Optimal Max: " << sum2_max(arr) << "\n";
    return 0;
}
