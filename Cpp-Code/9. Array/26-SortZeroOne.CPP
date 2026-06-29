#include <iostream>
#include <vector>
using namespace std;

void sort01(vector<int> &v)
{
    int n = v.size();
    int z = 0;
    int o = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            z++;
        }
        else
        {
            o++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i < z)
            v[i] = 0;
        else
            v[i] = 1;
    }
}
void display(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    int digit;
    cout << "number of digit ";
    cin >> digit;
    vector<int> v;

    cout << "enter digits ";
    for (int i = 0; i < digit; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort01(v);
    display(v);
}
