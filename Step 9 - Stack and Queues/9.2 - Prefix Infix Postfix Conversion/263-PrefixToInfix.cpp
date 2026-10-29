#include <bits/stdc++.h>
using namespace std;

// Prefix to Infix Conversion

int main()
{
    string s = "*+pq-mn";
    stack<string> st;
    for (int i = s.size() - 1; i >= 0; i--)
    {

        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            st.push({s[i]});
        }
        else
        {
            string s1 = st.top();
            st.pop();
            string s2 = st.top();
            st.pop();
            string newstr = "(" + s1 + s[i] + s2 + ")";
            st.push(newstr);
        }
    }
    cout << st.top();
}