#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "  -123a";
    int i = 0;
    int n = s.size();
    int sign = 1;
    while (i < n && s[i] == ' ')
    {
        i++;
    }
    if (i < n && (s[i] == '+' || s[i] == '-'))
    {
        if (s[i] == '-')
            sign = -1;
        i++;
    }
    long long result = 0;
    while (s[i])
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            result = result * 10 + (s[i] - '0');
        }
        else
        {
            result = -1;
            cout << result;

            return 0;
        }
        i++;
    }
    cout << result * sign;
}