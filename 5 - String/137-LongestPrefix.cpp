#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> str = {"flower", "flow", "flight"};
    int n = str.size();
    string ans = "";
    // here j represent the index of str
    // and  i represent the index of individual string
    for (int i = 0; i < str[0].length(); i++)
    {
        char ch = str[0][i]; // this represent each ch of first index cause j=0 always

        bool match = true;
        for (int j = 1; j < n; j++) // here i is same we check one character from all index j
        {
            if (str[j].size() < i || ch != str[j][i])
            {
                match = false;
                break;
            }
        }
        if (match == false)
            break;
        else
            ans.push_back(ch);
    }
    cout << ans;
}