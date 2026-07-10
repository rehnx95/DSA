#include <bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> &v1, vector<int> &v2)
{
    int n1 = v1.size();
    int n2 = v1.size();
    vector<int> v3;
    int i = 0;
    int j = 0;

    while (i < n1 && j < n2)
    {
        if (v1[i] < v2[j])
        {
            if (v3.size() == 0 || v3.back() != v1[i]) // if element not already present
            {
                v3.push_back(v1[i]);
            }
            i++;
        }

        else // (v1[i] > v2[j])
        {
            if (v3.size() == 0 || v3.back() != v2[j])
            {
                v3.push_back(v2[j]);
            }
            j++;
        }
    }

    // for remaining

    while (j < n2)
    {
        if (v3.size() == 0 || v3.back() != v2[j])
        {
            v3.push_back(v2[j]);
        }
        j++;
    }

    while (i < n1)
    {
        if (v3.size() == 0 || v3.back() != v1[i])
        {
            v3.push_back(v1[i]);
        }
        i++;
    }

    return v3;
}
int main()
{
    vector<int> v1;

    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(8);

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    vector<int> v2;
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(5);
    v2.push_back(7);
    v2.push_back(10);
    v2.push_back(12);

    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;

    vector<int> v = merge(v1, v2);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
