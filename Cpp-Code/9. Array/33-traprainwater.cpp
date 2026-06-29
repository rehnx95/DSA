#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
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

    // previous greatest element
    vector<int> pg(n);
    pg[0] = -1;
    int maxx = v[0];
    for (int i = 1; i < n; i++)
    {
        pg[i] = maxx;
        if (maxx < v[i])
        {
            maxx = v[i];
        }
    }
    // display(pg);

    // next greatest element
    vector<int> ng(n);
    ng[n - 1] = -1;
    maxx = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        ng[i] = maxx;
        if (maxx < v[i])
        {
            maxx = v[i];
        }
    }
    // display(ng);

    // minimum array
    vector<int> mini(n);
    for (int i = 0; i < n; i++)
    {
        mini[i] = min(pg[i], ng[i]);
    }
    // display(mini);

    // calculating water
    int water = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (v[i] < mini[i])
        {
            water += (mini[i] - v[i]);
        }
    }
    cout << water;
}