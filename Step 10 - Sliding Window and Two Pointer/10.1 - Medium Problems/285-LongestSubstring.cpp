#include <bits/stdc++.h>
using namespace std;

int brute(string s)
{
    int n = s.size();
    int mxl = 0;
    for (int i = 0; i < n; i++)
    {
        unordered_map<char, int> mp;
        for (int j = i; j < n; j++)
        {
            if (mp.find(s[j]) != mp.end())
            {
                break;
            }
            else
            {
                mp[s[j]]++;
            }
        }
        mxl = max(mxl, (int)mp.size());
    }
    return mxl;
}

int optimal(string s)
{
    int n = s.size();
    // assign all ascii to be -1
    vector<int> hash(256, -1);
    int l = 0, r = 0;
    int mxl = 0;
    int len = 0;
    while (r < n)
    {
        // check if it is not visited
        if (hash[s[r]] != -1)
        {
            if (hash[s[r]] >= l)
            {
                // update l to next character
                l = hash[s[r]] + 1;
            }
        }
        len = r - l + 1;
        mxl = max(len, mxl);
        // vvi sited the character, update the index
        // update the index of the character
        hash[s[r]] = r;
        r++;
    }
    return mxl;
}
int main()
{
    string s = "abcdbzaef";
    cout << optimal(s) << endl;
    cout<< brute(s) << endl;
}