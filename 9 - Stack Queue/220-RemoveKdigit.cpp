#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "1432219";
    int k = 3;
    vector<int> st;
    for (int i = 0; i < s.size(); i++)
    {
        int el = s[i] - '0';
        while (!st.empty() && st.back() > el && k > 0)
        {
            st.pop_back();
            k--;
        }
        st.push_back(el);
    }
    while (k > 0 && !st.empty())
    {
        st.pop_back();
        k--;
    }
    string ans = "";
    for (int i = 0; i < st.size(); i++)
    {
        // Skip leading zeros
        if (ans.empty() && st[i] == 0)
        {
            continue;
        }
        ans += to_string(st[i]);
    }
    if (ans.empty())
    {
        ans = "0";
    }
    cout << ans;
}