#include <bits/stdc++.h>
using namespace std;

long long mini;

void push(stack<long long> &st, long long x)
{
    if (st.empty())
    {
        mini = x;
        st.push(x);
    }
    else
    {
        if (x >= mini)
        {
            st.push(x);
        }
        else
        {
            // Encode the previous minimum into the stack
            st.push(2 * x - mini);
            mini = x;
        }
    }
}

void pop(stack<long long> &st)
{
    if (st.empty())
        return;

    long long topVal = st.top();
    st.pop();

    // If topVal is less than mini, it means it was an encoded value
    if (topVal < mini)
    {
        mini = 2 * mini - topVal; // Decode to the previous minimum
    }
}

long long top(stack<long long> &st)
{
    if (st.empty())
        return -1;

    long long topVal = st.top();
    if (topVal >= mini)
    {
        return topVal;
    }
    else
    {
        return mini;
    }
}

long long getMin()
{
    return mini;
}

int main()
{
    stack<long long> st;

    push(st, 5);
    push(st, 3);
    push(st, 8);
    push(st, 2);

    cout << "Current Min: " << getMin() << "\n"; // Outputs 2
    cout << "Top Element: " << top(st) << "\n";  // Outputs 2

    pop(st);
    cout << "Min after pop: " << getMin() << "\n"; // Outputs 3
    cout << "Top after pop: " << top(st) << "\n";  // Outputs 8

    return 0;
}
