#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, x;
    cout << "number of digit ";
    cin >> n;
    vector<int> v;

    cout << "enter digits ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "Enter target ";
    cin >> x;
    for (int i = 0; i < v.size() - 1; i++) // 1 to second last
    {
        for (int j = i + 1; j < v.size(); j++) // next to last
        {
            if (v[i] + v[j] == x)
            {
                cout << "(" << (i + 1) << "," << (j + 1) << ")" << endl;
                cout << v[i] << " + " << v[j] << " = " << x << endl;
                break;
            }
        }
    }
}