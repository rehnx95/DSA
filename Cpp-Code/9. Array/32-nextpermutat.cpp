#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void swapping(vector<int> &v, int a, int b)
{
    int temp = v[a];
    v[a] = v[b];
    v[b] = temp;
}

int main()
{
    // int n;
    // cout << "number of digit ";
    // cin >> n;
    // vector<int> v;

    // cout << "enter digits ";
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }

    // display(v);
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(2);
    int n = v.size();
    
    display(v);

    // 1. finding pivot index
    int idx = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i] < v[i + 1])
        {
            idx = i;
            break;
        }
    }
    if (idx == -1)
    {
        reverse(v.begin(), v.end());
        return 0;
    }
    
    // 2. sorting/revers after pivot
    reverse(v.begin() + (idx + 1), v.end());

    // 3. finding just greater element than idx
    int j = -1;
    for (int i = idx + 1; i < n; i++)
    {
        if (v[i] > v[idx])
        {
            j = i;
            break;
        }
    }
    // 4. swaping idx and j
    swapping(v, idx, j);
    display(v);
}
