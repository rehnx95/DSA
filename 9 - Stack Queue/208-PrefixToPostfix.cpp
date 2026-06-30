#include <bits/stdc++.h>
using namespace std;

// Prefix to Postfix Conversion

int main()
{
    string s = "/-ab*+def";
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
            string op = {s[i]};
            string newstr = s1 + s2 + op;
            st.push(newstr);
        }
    }
    cout << st.top();
}