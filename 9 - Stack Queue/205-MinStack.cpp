#include <bits/stdc++.h>
using namespace std;
void push(stack<pair<int, int>> &st, int x)
{
    if (st.empty())
    {
        st.push({x, x});
    }
    else
    {
        st.push({x, min(x, st.top().second)});
    }
}
int getmin(stack<pair<int, int>> &st)
{
    return st.top().second;
}
int top(stack<pair<int, int>> &st)
{
    return st.top().first;
}
int main()
{
    stack<pair<int, int>> st;
}