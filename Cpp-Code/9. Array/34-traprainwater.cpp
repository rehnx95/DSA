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

    pg[n - 1] = -1;
    maxx = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        pg[i] = min(pg[i], maxx);
        if (maxx < v[i])
        {
            maxx = v[i];
        }
    }

    // calculating water
    int water = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (v[i] < pg[i])
        {
            water += (pg[i] - v[i]);
        }
    }
    cout << water;
}

// class Solution {
// public:
//     int trap(vector<int>& height) {
//         int n = height.size();
//         int pg[n];
//         int maxx = height[0];
//         pg[0] = -1;
//         for (int i = 1; i < n; i++) {
//             pg[i] = maxx;
//             if (maxx < height[i]) {
//                 maxx = height[i];
//             }
//         }
//         pg[n - 1] = -1;
//         maxx = height[n - 1];
//         for (int i = n - 2; i >= 0; i--) {
//             pg[i] = min(pg[i], maxx);
//             if (maxx < height[i]) {
//                 maxx = height[i];
//             }
//         }
//         int water = 0;
//         for (int i = 1; i < n - 1; i++) {
//             if (height[i] < pg[i]) {
//                 water += (pg[i] - height[i]);
//             }
//         }
//         return water;
//     }
// };