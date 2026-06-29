#include <iostream>
#include <vector>
using namespace std;

void sort012(vector<int> &v)
{
    int n = v.size();
    int z = 0;
    int o = 0;
    int t = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            z++;
        }
        else if (v[i] == 1)
        {
            o++;
        }
        else
        {
            t++;
        }
    }
    cout << z << " " << o << " " << t << endl;
    for (int i = 0; i < n; i++)
    {
        if (i < z)
            v[i] = 0;
        else if (i >= z && i < (o + z))
            v[i] = 1;
        else
        {
            v[i] = 2;
        }
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

    sort012(v);
    display(v);
}
