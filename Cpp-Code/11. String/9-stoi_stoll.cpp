#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // string s1 = "12345";
    // int x1 = stoi(s1);
    // cout << x1 << endl;

    // string s2 = "12345456789098";
    // long long x2 = stoll(s2);
    // cout << x2 << endl;

    int n;
    cin >> n;
    string a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int mx = stoi(a[0]);
    string mxS = a[0];

    for (int i = 1; i < n; i++)
    {
        int x = stoi(a[i]);
        if (x > mx)
        {
            mx = x;
            mxS = a[i];
        }
    }
    cout << mx << " " << mxS;

    return 0;
}