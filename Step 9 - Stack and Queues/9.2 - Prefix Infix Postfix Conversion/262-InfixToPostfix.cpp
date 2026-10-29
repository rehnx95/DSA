#include <bits/stdc++.h>
using namespace std;

// Infix to Postfix Conversion

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
    string infix = "a+b*(c^d-e)";

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
            // Check st.top() instead of 'c'
            while (!st.empty() && st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            if (!st.empty())
            {
                st.pop(); // Removes the '('
            }
        }
        // for operator
        else
        {
            // rule 1: put operator in strictly low to high priority order
            // rule 2: if operator is same it disobey rule one 
           
            while (!st.empty() && priority(st.top()) >= priority(c))
            {
                // it violate rule 1
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

    cout << "Final Postfix: " << ans << endl; // Prints: abcd^e-*+
    return 0;
}
