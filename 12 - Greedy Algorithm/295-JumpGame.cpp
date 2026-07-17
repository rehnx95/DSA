#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 1, 1, 0, 2, 5};
    int mx = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (i > mx)
        {
            cout << false;
            return 0;
        }
        mx = max(mx, (i + arr[i]));
    }
    cout << true;
}