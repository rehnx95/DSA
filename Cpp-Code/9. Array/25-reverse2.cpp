#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void display(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
void reversepart(vector<int> &v, int f, int l)
{
    for (int i = f - 1, j = l - 1; i <= j; i++, j--)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
    // reverse(v.begin()+i,v.end()+j+1);
}

// two pointer method
void reverse(vector<int> &v)
{
    for (int i = 0, j = v.size() - 1; i <= j; i++, j--)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
    // reverse(v.begin(),v.end());
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

    // reverse(v);
    // display(v);

    // part reverse

    // int f, l;
    // cout << "enter first index " << endl;
    // cin >> f;
    // cout << "enter last index " << endl;
    // cin >> l;

    // reversepart(v, f, l);
    // display(v);
}
