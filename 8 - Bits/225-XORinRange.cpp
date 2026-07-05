#include <bits/stdc++.h>
using namespace std;
int xorbrute(int n)
{
    int xorr = 0;
    for (int i = 0; i <= n; i++)
    {
        xorr = xorr ^ i;
    }
    return xorr;
}
int xoroptimal(int n)
{
    if (n % 4 == 1)
        return 1;
    else if (n % 4 == 2)
        return n + 1;
    else if (n % 4 == 3)
        return 0;
    else
        return n;
}
int xorinrange(int left, int right)
{
    return xoroptimal(left) ^ xoroptimal(right);
}
int main()
{
    int n = 13;
    int left = 4;
    int right = 7;
    cout << xorbrute(n) << endl;
    cout << xoroptimal(n) << endl;
    cout << xorinrange(left, right) << endl;
}