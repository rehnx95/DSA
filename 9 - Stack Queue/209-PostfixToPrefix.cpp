#include <bits/stdc++.h>
using namespace std;

// Postfix to Prefix Conversion

int main()
{
    string s = "ab-de+f*/";
    stack<string> st;
    for (int i = 0; i < s.size(); i++)
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
            string newstr = op + s2 + s1;
            st.push(newstr);
        }
    }
    cout << st.top();
}