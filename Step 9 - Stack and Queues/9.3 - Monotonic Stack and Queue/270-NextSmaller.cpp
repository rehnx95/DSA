#include <bits/stdc++.h>
using namespace std;
vector<int> nextgreater1(vector<int> &arr)
{
    int n = arr.size();
    vector<int> ans(n, -1); // Initialize all answers with -1

    for (int i = 0; i < n; i++)
    {
        // Inner loop finds the next greater element to its right
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                ans[i] = arr[j]; // Found the next greater element
                break;           // Move to the next element in the outer loop
            }
        }
    }
    return ans;
}
vector<int> nextgreater2(vector<int> &arr)
{
    int n = arr.size();
    stack<int> st;
    vector<int> ans(n, -1); // Initialize all with -1 by default

    // Traverse from right to left
    for (int i = n - 1; i >= 0; i--)
    {
        // Pop all elements from stack that are smaller than or equal to current element
        while (!st.empty() && st.top() >= arr[i])
        {
            st.pop();
        }

        // If stack is not empty, the top element is the next greater element
        if (!st.empty())
        {
            ans[i] = st.top();
        }

        // Always push the current element onto the stack for elements to its left
        st.push(arr[i]);
    }
    return ans;
}

int main()
{
    vector<int> arr = {4, 8, 5, 2, 25};
    vector<int> ans = nextgreater2(arr);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
