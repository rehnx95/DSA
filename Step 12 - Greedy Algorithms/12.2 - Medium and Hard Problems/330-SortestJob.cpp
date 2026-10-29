#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {4, 3, 7, 1, 2};
    sort(arr.begin(), arr.end());
    int t = 0;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum = sum + t;
        t = t + arr[i];
    }
    cout << double((sum) / arr.size()) << endl;
}