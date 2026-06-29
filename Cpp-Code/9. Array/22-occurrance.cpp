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

    int x;
    cout << "enter num: ";
    cin >> x;
    int occur;

    // for (int i = 0; i < n; i++)
    // {
    //     if (v[i] == x)
    //     {
    //         occur = i + 1;
    //     }
    // }

    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] == x);
        {
            occur = i + 1;
            break;
        }
    }

    cout << occur;
}