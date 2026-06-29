#include <iostream>
#include <vector>

using namespace std;

int main()
{

    string s = "leetcode";
    vector<int> a(26, 0);
    for (int i = 0; i < a.size(); i++)
    {
        char ch = s[i];
        int ascii = (int)ch;
        a[ascii - 97]++;
    }
    int max = 0;
    for (int i = 0; i < 26; i++)
    {
        if (a[i] > max)
            max = a[i];
    }

    for (int i = 0; i < 26; i++)
    {
        if (a[i] == max)
        {
            int ascii = i + 97;
            char ch = (char)ascii;
            cout << ch << " " << max << endl;
        }
    }
}