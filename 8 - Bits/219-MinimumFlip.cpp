#include <bits/stdc++.h>
using namespace std;
int count(int n)
{
    int cnt = 0;
    while (n)
    {
        cnt += n & 1;
        n = n >> 1;
    }
    return cnt;
}
int main()
{
    int a = 7;
    int b = 4;
    int xorr = a ^ b;
    int miniflip = count(xorr);
    cout << miniflip;
}