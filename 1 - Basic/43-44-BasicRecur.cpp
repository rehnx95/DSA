#include <bits/stdc++.h>
using namespace std;
void print(string s, int n)
{
    if (n == 0)
        return;
    cout << s << endl;
    print(s, n - 1);
}
int main()
{
    string s = "rehan";
    print(s, 5);
}