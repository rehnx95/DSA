#include <bits/stdc++.h>
using namespace std;
vector<int> intersection(vector<int> &v1, vector<int> &v2)
{
    vector<int> v3;
    int n1 = v1.size();
    int n2 = v2.size();

    // brute tc n1*n2 sc n2
    // int vi[n2] = {0};
    // for (int i = 0; i < n1; i++)
    // {
    //     for (int j = 0; j < n2; j++)
    //     {
    //         if (v1[i] == v2[j] && vi[j] == 0)
    //         {
    //             v3.push_back(v1[i]);
    //             vi[j] = 1;
    //             break;
    //         }
    //         if (v2[j] > v1[i])
    //             break;
    //     }
    // }

    // optimal tc n1+n2 sc n2
    int i = 0, j = 0;
    while (i <= n1 && j <= n2)
    {
        if (v1[i] < v2[j])
        {

            i++;
        }
        else if (v1[i] > v2[j])
        {
            j++;
        }
        else
        {
            v3.push_back(v1[i]);
            i++;
            j++;
        }
    }
    return v3;
}
int main()
{
    vector<int> v1;

    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(6);

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    vector<int> v2;
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(3);
    v2.push_back(5);
    v2.push_back(6);
    v2.push_back(6);
    v2.push_back(7);

    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;

    vector<int> v = intersection(v1, v2);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
