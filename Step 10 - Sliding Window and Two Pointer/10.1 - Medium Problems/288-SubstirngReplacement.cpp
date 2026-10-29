#include <bits/stdc++.h>
using namespace std;
int brute(string s, int k)
{
    int mxl = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int hash[26] = {0};
        int mxfreq = 0;
        for (int j = i; j < s.size(); j++)
        {
            hash[s[j] - 'A']++;
            mxfreq = max(mxfreq, hash[s[j] - 'A']);
            int change = (j - i + 1) - mxfreq;
            if (change <= k)
            {
                mxl = max(mxl, j - i + 1);
            }
            else
                break;
        }
    }
    return mxl;
}
int better(string s, int k)
{
    int l = 0, r = 0, mxfreq = 0, mxl = 0;
    int hash[26] = {0};
    while (r < s.size())
    {
        hash[s[r] - 'A']++;
        mxfreq = max(mxfreq, hash[s[r] - 'A']);
        while ((r - l + 1) - mxfreq > k)
        {
            hash[s[l] - 'A']--;
            mxfreq = 0;
            for (int i = 0; i < 26; i++)
            {
                mxfreq = max(mxfreq, hash[i]);
            }
            l = l + 1;
        }
        if ((r - l + 1) - mxfreq <= k)
        {
            mxl = max(mxl, (r - l + 1));
        }
        r++;
    }
    return mxl;
}
int optimal(string s, int k)
{
    int l = 0, r = 0, mxfreq = 0, mxl = 0;
    int hash[26] = {0};
    while (r < s.size())
    {
        hash[s[r] - 'A']++;
        mxfreq = max(mxfreq, hash[s[r] - 'A']);
        if ((r - l + 1) - mxfreq > k)
        {
            hash[s[l] - 'A']--;
            l = l + 1;
        }
        if ((r - l + 1) - mxfreq <= k)
        {
            mxl = max(mxl, (r - l + 1));
        }
        r++;
    }
    return mxl;
}

int main()
{
    string s = "AABABBA";
    cout << brute(s, 2) << endl;
    cout << better(s, 2) << endl;
    cout << optimal(s, 2) << endl;
}