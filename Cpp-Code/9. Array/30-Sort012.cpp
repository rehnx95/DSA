#include <iostream>
#include <vector>
using namespace std;

void sort012(vector<int> &v)
{
    int n = v.size();
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high)
    {

        if (v[mid] == 0)
        {
            swap(v[mid], v[low]);
            low++;
            mid++;
        }

        else if (v[mid] == 1)
        {
            mid++;
        }
        else // (v[mid] == 2)
        {
            swap(v[mid], v[high]);
            high--;
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
