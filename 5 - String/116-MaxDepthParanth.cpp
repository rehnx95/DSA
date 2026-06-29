#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxDepth(string s)
    {
        int n = s.size();

        int depth = 0;
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                depth++;
                mx = max(mx, depth);
            }
            else if (s[i] == ')')
            {
                depth--;
            }
        }
        return mx;
    }
};
