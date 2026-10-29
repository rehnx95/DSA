#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "((()))";
    string ans = "";
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            count++;
            if (count > 1)
            {
                ans += '(';
            }
        }
        else if (s[i] == ')')
        {
            count--;
            if (count > 0)
            {
                ans += ')';
            }
        }
    }
    cout << ans;
}