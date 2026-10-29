#include <bits/stdc++.h>
using namespace std;
bool ls(int arr[], int n)
{
    for (int i = 0; i < 9; i++)
    {
        if (arr[i] == n)
        {
            return true;
        }
    }
    return false;
}
int main()
{

    // brute tc n^2 sc 1
    // int arr[] = {102, 105, 100, 1, 101, 103, 2, 104, 1};
    // int longest = 1;
    // for (int i = 0; i < 9; i++)
    // {
    //     int x = arr[i];
    //     int count = 1;
    //     while (ls(arr, x + 1) == true)
    //     {
    //         x = x + 1;
    //         count = count + 1;
    //     }
    //     longest = max(longest, count);
    // }
    // cout << longest;


    // better tc nlogn sc 1
    // sort the array and then count the longest consecutive sequence

    // vector<int> a = {100, 102, 100, 101, 101, 4, 3, 2, 3, 2, 5, 1, 1, 2};
    // sort(a.begin(), a.end());
    // int n = a.size();
    // int lastsmall = INT16_MIN;
    // int cnt = 0;
    // int longestt = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     if (a[i] - 1 == lastsmall)  // for same number
    //     {
    //         cnt += 1;
    //         lastsmall = a[i];
    //     }
    //     else if (lastsmall != a[i])  // for new number
    //     {
    //         cnt = 1;
    //         lastsmall = a[i];
    //     }
    //     longestt = max(longestt, cnt);
    // }
    // cout << longestt;

    // optimal tc n sc n
    vector<int> a = {100, 102, 100, 101, 101, 4, 3, 2, 3, 2, 5, 1, 1, 2};
    int m = a.size();
    int longesttt = 1;
    unordered_set<int> st;
    for (int i = 0; i < m; i++)
    {
        st.insert(a[i]);
    }
    for (auto it : st)
    {
        if (st.find(it - 1) == st.end())  // st.end point after the loop which means if that 
        {                                 // element is found it point to some it then it does not equal to last pointer
            int cnt = 1;                  // use to locate first element of consecutive num
            int x = it;
            while (st.find(x + 1) != st.end())
            {
                x = x + 1;
                cnt = cnt + 1;
            }
            longesttt = max(cnt, longesttt);
        }
    }
    cout << longesttt;
}