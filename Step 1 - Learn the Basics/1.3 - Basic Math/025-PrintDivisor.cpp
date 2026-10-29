#include <bits/stdc++.h>
using namespace std;
vector<int> divisor(int n)
{
    vector<int> ans;
    for (int i = 0; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ans.push_back(i);
            if (n / i != i)
            {
                ans.push_back(n / i);
            }
        }
    }
    return ans;
}
int main()
{
    int n = 60;
}