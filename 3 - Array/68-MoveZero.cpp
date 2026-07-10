#include <bits/stdc++.h>
using namespace std;

int main()
{
    // brute tc n sc n
    // vector<int> v = {2, 0, 6, 0, 4, 5, 0};
    // vector<int> temp;
    // for (int i = 0; i < 7; i++)
    // {
    //     if (v[i] != 0)
    //     {
    //         temp.push_back(v[i]);
    //     }
    // }
    // int n1 = v.size();
    // int n2 = temp.size();
    // int n = n1 - n2;
    // for (int i = n; i < n1; i++)
    // {
    //     temp.push_back(0);
    // }
    // for (int i = 0; i < n1; i++)
    // {
    //     cout << temp[i] << " ";
    // }

    // optimal tc n sc 1
    int arr[] = {2, 0, 6, 0, 4, 5, 0};
    int j = -1;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    for (int i = j+1; i < 7; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
}