#include <bits/stdc++.h>
using namespace std;
vector<string> ans;
void generate(string curr, int n)
{
    if (curr.size() == n)
    {
        ans.push_back(curr);
        return;
    }
    generate(curr + "0", n);
    if (curr.empty() || curr.back() != '1')
    {
        generate(curr + "1", n);
    }
}

int main()
{

    int n = 3;
    generate("", n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}