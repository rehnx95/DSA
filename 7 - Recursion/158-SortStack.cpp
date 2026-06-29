#include <bits/stdc++.h>
using namespace std;

// sort arr is similar to sort stack

void insert(vector<int> &v, int temp)
{
    if (v.size() == 0 || v[v.size() - 1] <= temp)
    {
        v.push_back(temp);
        return;
    }
    int val = v[v.size() - 1];
    v.pop_back();
    insert(v, temp);
    v.push_back(val);
}
void sortarr(vector<int> &v)
{
    if (v.size() == 1)
        return;
    int temp = v[v.size() - 1];
    v.pop_back();
    sort(v.begin(), v.end());
    insert(v, temp);
}
int main()
{
    vector<int> arr = {2, 4, 9, 1};
    sortarr(arr);
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
}