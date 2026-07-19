#include <bits/stdc++.h>
using namespace std;

int sum1(vector<int> &arr)
{
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int minim = arr[i];
        for (int j = i; j < arr.size(); j++)
        {
            minim = min(arr[j], minim);
            sum = (sum + minim);
        }
    }
    return sum;
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

int sum2_min(vector<int> &arr)
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

int main()
{
    vector<int> arr = {3, 1, 2, 4};
    cout << sum1(arr) << endl;
    cout << sum2_min(arr);
}
