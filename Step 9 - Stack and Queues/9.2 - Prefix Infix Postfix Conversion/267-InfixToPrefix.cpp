#include <bits/stdc++.h>
using namespace std;

// Infix to Prefix Conversion

int priority(char op)
{
    switch (op)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    case '^':
        return 3;
    default:
        return 0;
    }
}

int main()
{
    stack<char> st;
    string ans = "";
    string infix = "(a+b)*c-d+f";
    int n = infix.size();

    // FIX 1: Correctly reverse the string first, then swap '(' and ')'
    reverse(infix.begin(), infix.end());
    for (int i = 0; i < n; i++)
    {
        if (infix[i] == '(')
            infix[i] = ')';
        else if (infix[i] == ')')
            infix[i] = '(';
    }

    for (int i = 0; i < infix.size(); i++)
    {
        char c = infix[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            ans += c;
        }
        else if (c == '(')
        {
            st.push(c);
        }
        else if (c == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            if (!st.empty())
            {
                st.pop();
            }
        }
        // for operator
        else
        {
           // rule 1: put operator in low to high priority order
           // rule 2: if operator is same and op is ^ then only add top to ans and pop top el
           // rule 3: otherwise add in stack (whether it is equal or not just follow rule 1)

            while (!st.empty() && (priority(st.top()) > priority(c) || (priority(st.top()) == priority(c) && c == '^')))
            {
                // it violate rule one or op is same and op is ^
                ans += st.top();
                st.pop();
            }
            // follow rule 1
            st.push(c);
        }
    }

    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }

    // Reverse 
    reverse(ans.begin(), ans.end());

    cout << "Final Prefix: " << ans << endl; // Correct Output: +- * + a b c d f
    return 0;
}
