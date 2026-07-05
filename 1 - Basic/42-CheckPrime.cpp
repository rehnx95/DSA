#include <bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    int cnt = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
            if (n / i != i)
            {
                cnt++;
            }
        }
    }
    return cnt == 2;
}
int main()
{
    cout << prime(8);
}