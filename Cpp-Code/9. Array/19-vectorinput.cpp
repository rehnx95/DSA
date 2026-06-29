#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    // vector<int> v(5);
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> v[i];
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << v[i] << " ";
    // }

    // this will not work as size is not declare

    // vector<int> v;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cin >> v[i];
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << v[i] << " ";
    // }
}