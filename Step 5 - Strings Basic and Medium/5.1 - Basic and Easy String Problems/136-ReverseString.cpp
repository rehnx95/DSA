#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "  hello      world";
    int n = s.length();
    string ans = "";
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++)
    {
        string word = "";
        while (i < n && s[i] != ' ')
        {
            word += s[i];
            i++; // after while loop it point to space then for loop start from there
        }
        reverse(word.begin(), word.end());
        if (word.length() > 0)
        {
            ans += " " + word;
        }
    }
    cout << ans.substr(1);
}