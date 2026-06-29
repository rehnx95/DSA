#include <iostream>
#include <vector>
using namespace std;
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
    int n;
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

    display(v);
    cout << v.size() << endl;

    vector<int> v2(v.size());

    for (int i = 0; i < v.size(); i++)
    {

        v2[i] = v[v.size() - 1 - i];
    }
    display(v2);
}
