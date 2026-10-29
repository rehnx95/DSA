#include <bits/stdc++.h>
using namespace std;
bool recu(string s, int idx, int open)
{
    if (open < 0)
        return false;
    if (idx == s.size())
        return open == 0;
    if (s[idx] == '(')
    {
        return recu(s, idx + 1, open + 1);
    }
    else if (s[idx] == ')')
    {
        return recu(s, idx + 1, open - 1);
    }
    else
    {
        return recu(s, idx + 1, open + 1) ||
               recu(s, idx + 1, open - 1) ||
               recu(s, idx + 1, open);
    }
}
bool brute(string s)
{
    return recu(s, 0, 0);
}
bool optimal(string s)
{
    int mn = 0, mx = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            mn++;
            mx++;
        }
        else if (s[i] == ')')
        {
            mn--;
            mx--;
        }
        else
        {
            mn--;
            mx++;
        }
        if (mn < 0)
            mn = 0;
        if (mx < 0)
            return false;
    }
    return mn == 0;
}
int main()
{
    string s = "(*())(";
    cout << brute(s) << endl;
    cout << optimal(s) << endl;
}