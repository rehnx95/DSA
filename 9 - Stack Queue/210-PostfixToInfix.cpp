#include <bits/stdc++.h>
using namespace std;

// Postfix to Infix Conversion

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
            string newstr = "(" + s2 + s[i] + s1 + ")";
            st.push(newstr);
        }
    }
    cout << st.top();
}