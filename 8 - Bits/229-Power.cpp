#include <bits/stdc++.h>
using namespace std;
int fastpow(double x, int n)
{
    if (n == 0)
        return 1.0;
    if (n == 1)
        return x;
    if (n % 2 == 0)
    {
        return fastpow(x * x, n / 2); // half the power double the base
    }
    return x * fastpow(x * x, n / 2); // if it power is odd take one base and power will be even
}
int power(double x, int n)
{
    int ex = n;
    if (ex < 0)
    {
        ex = -ex;
        x = 1.0 / x;
    }
    return fastpow(x, ex);
}
int powr(int x, int n)
{
    int m = n;
    int ans = 1;
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            ans = ans * x;
            n = n - 1;
        }
        else
        {
            n = n / 2;
            x = x * x;
        }
    }
    if (m < 0)
        return 1 / ans;
    return ans;
}
int main()
{
    int a;
    int b;
    cin >> a >> b;
    power(a, b);
}