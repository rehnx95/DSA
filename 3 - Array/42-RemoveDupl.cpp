#include <bits/stdc++.h>
using namespace std;

int main()
{
    // brute tc nlogn + n  sc n
    int arr[] = {1, 1, 2, 2, 2, 3, 3};
    set<int> st;
    for (int i = 0; i < 7; i++)
    {
        st.insert(arr[i]);  
    }
    int idx = 0;
    for (auto it : st)   
    {
        arr[idx] = it;
        idx++;
    }
    cout << idx;

    // optimal tc n sc 1
    // int arr[] = {1, 1, 2, 2, 2, 3, 3};
    // int i = 0;
    // for (int j = 1; j < 7; j++)
    // {
    //     if (arr[i] != arr[j])
    //     {
    //         arr[i + 1] = arr[j];
    //         i++;
    //     }
    // }
    // cout << i + 1;
}