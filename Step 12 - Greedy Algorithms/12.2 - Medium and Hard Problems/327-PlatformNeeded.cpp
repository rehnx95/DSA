#include <bits/stdc++.h>
using namespace std;

int brute(vector<int> &arr, vector<int> &dep)
{
    int mxcnt = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        int cnt = 1;

        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;

            if (arr[i] >= arr[j] && arr[i] <= dep[j])
            {
                cnt++;
            }
        }
        mxcnt = max(mxcnt, cnt);
    }
    return mxcnt;
}

int better(vector<int> &arr, vector<int> &dep)
{
    vector<pair<int, char>> events;

    for (int i = 0; i < arr.size(); i++)
    {
        events.push_back({arr[i], 'a'});
    }
    for (int i = 0; i < dep.size(); i++)
    {
        events.push_back({dep[i], 'd'});
    }

    sort(events.begin(), events.end());

    int cnt = 0;
    int mxcnt = 0;

    for (auto it : events)
    {
        if (it.second == 'a')
            cnt++;
        else
            cnt--;

        mxcnt = max(mxcnt, cnt);
    }
    return mxcnt;
}

int optimal(vector<int> &arr, vector<int> &dep)
{
    sort(arr.begin(), arr.end());
    sort(dep.begin(), dep.end());

    int n = arr.size();
    int a = 1;
    int d = 0;
    int cnt = 1;
    int mxcnt = 1;

    while (a < n && d < n)
    {
        if (arr[a] <= dep[d])
        {
            cnt++;
            a++;
        }
        else
        {
            cnt--;
            d++;
        }
        mxcnt = max(mxcnt, cnt);
    }
    return mxcnt;
}

int main()
{
    vector<int> arr = {900, 945, 955, 1100, 1500, 1800};
    vector<int> dep = {920, 1200, 1130, 1150, 1900, 2000};
    cout << better(arr, dep) << endl;
    cout << brute(arr, dep) << endl;
    cout << optimal(arr, dep) << endl;
    return 0;
}
