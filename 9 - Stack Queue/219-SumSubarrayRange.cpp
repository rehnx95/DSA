#include <bits/stdc++.h>
using namespace std;

int sumrange1(vector<int> &arr)
{
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int minim = arr[i];
        int maxim = arr[i];
        for (int j = i; j < arr.size(); j++)
        {
            minim = min(arr[j], minim);
            maxim = max(arr[j], maxim);
            sum = (sum + (maxim - minim));
        }
    }
    return sum;
}

vector<int> getPGE(vector<int> &arr)
{
    int n = arr.size();
    stack<int> st;
    vector<int> pge_indices(n);

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && arr[st.top()] <= arr[i])
        {
            st.pop();
        }
        pge_indices[i] = st.empty() ? -1 : st.top();
        st.push(i);
    }
    return pge_indices;
}

vector<int> getNGE(vector<int> &arr)
{
    int n = arr.size();
    stack<int> st;
    vector<int> nge_indices(n);

    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && arr[st.top()] < arr[i])
        {
            st.pop();
        }
        nge_indices[i] = st.empty() ? n : st.top();
        st.push(i);
    }
    return nge_indices;
}

vector<int> getNSE(vector<int> &arr)
{
    int n = arr.size();
    stack<int> st;
    vector<int> nse_indices(n);

    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && arr[st.top()] > arr[i])
        {
            st.pop();
        }
        nse_indices[i] = st.empty() ? n : st.top();
        st.push(i);
    }
    return nse_indices;
}

vector<int> getPSEE(vector<int> &arr)
{
    int n = arr.size();
    stack<int> st;
    vector<int> psee_indices(n);

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && arr[st.top()] >= arr[i])
        {
            st.pop();
        }
        psee_indices[i] = st.empty() ? -1 : st.top();
        st.push(i);
    }
    return psee_indices;
}

int sum_max(vector<int> &arr)
{
    int n = arr.size();
    vector<int> pge_arr = getPGE(arr);
    vector<int> nge_arr = getNGE(arr);

    long long total_sum = 0;
    long long mod = 1e9 + 7;

    for (int i = 0; i < n; i++)
    {
        long long left_dist = i - pge_arr[i];
        long long right_dist = nge_arr[i] - i;

        long long total_subarrays = (left_dist * right_dist) % mod;
        long long contribution = (total_subarrays * arr[i]) % mod;

        total_sum = (total_sum + contribution) % mod;
    }
    return total_sum;
}

int sum_min(vector<int> &arr)
{
    int n = arr.size();
    vector<int> psee_arr = getPSEE(arr);
    vector<int> nse_arr = getNSE(arr);

    long long total_sum = 0;
    long long mod = 1e9 + 7;

    for (int i = 0; i < n; i++)
    {
        long long left_dist = i - psee_arr[i];
        long long right_dist = nse_arr[i] - i;

        long long total_subarrays = (left_dist * right_dist) % mod;
        long long contribution = (total_subarrays * arr[i]) % mod;

        total_sum = (total_sum + contribution) % mod;
    }
    return total_sum;
}

int sumrange2(int max_val, int min_val)
{
    long long mod = 1e9 + 7;
    return (max_val - min_val + mod) % mod;
}

int main()
{
    vector<int> arr = {3, 1, 2, 4};
    int max_sum = sum_max(arr);
    int min_sum = sum_min(arr);

    cout << "Brute Range Sum: " << sumrange1(arr) << "\n";
    cout << "Optimal Range Sum: " << sumrange2(max_sum, min_sum) << "\n";
    return 0;
}
