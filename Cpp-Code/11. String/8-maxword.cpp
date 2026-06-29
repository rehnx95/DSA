#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main()
{
    string str = "rehan is in ggv in college in ";
    vector<string> v;
    stringstream ss(str);
    string temp;
    while (ss >> temp)
    {
        // cout<<temp<<endl;
        v.push_back(temp);
    }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << endl;
    // }
    sort(v.begin(), v.end());
    int mxcount = 1;
    int count = 1;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] == v[i - 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        mxcount = max(count, mxcount);
    }

    count = 1;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] == v[i - 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        if (count == mxcount)
        {
            cout << v[i] << " " << mxcount << endl;
        }
    }
}