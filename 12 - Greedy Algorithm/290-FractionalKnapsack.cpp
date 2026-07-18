#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {100, 60, 100, 200};
    vector<int> w = {20, 10, 50, 50};
    double cap = 90;
    
    // Stores: {ratio, original_index}
    vector<pair<double, int>> p;
    double ans = 0;
    
    for (int i = 0; i < v.size(); i++)
    {
        p.push_back({(1.0 * v[i]) / w[i], i});
    }
    
    sort(p.begin(), p.end(), greater<pair<double, int>>());
    
    for (int i = 0; i < p.size(); i++)
    {
        if (cap == 0)
            break;
            
        int idx = p[i].second; 
        
        if (w[idx] <= cap)
        {
            cap -= w[idx];
            ans += v[idx];
        }
        else
        {
            double ratio = p[i].first;
            ans += cap * ratio;
            cap = 0;
        }
    }
    cout << ans << endl;
}
