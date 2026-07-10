#include <bits/stdc++.h>
using namespace std;

vector<string> ans;
void generate(string curr, int open, int close, int n)
{
    if (curr.size() == 2 * n)
    {
        ans.push_back(curr);
        return;
    }
    if (open < n)
    {
        generate(curr + "(", open + 1, close, n);
    }
    if (close < open)
    {
        generate(curr + ")", open, close + 1, n);
    }
}

int main()
{
    int n = 3;
    generate("", 0, 0, n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}