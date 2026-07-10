#include <bits/stdc++.h>
using namespace std;

bool checkSubsequence(int idx, int arr[], int n, int s, int sum)
{
    if (idx == n)
    {
        if (s == sum)
        {
            return true;
        }
        return false;
    }

    s += arr[idx];
    if (checkSubsequence(idx + 1, arr, n, s, sum) == true)
    {
        return true;
    }

    s -= arr[idx];
    if (checkSubsequence(idx + 1, arr, n, s, sum) == true)
    {
        return true;
    }

    return false;
}

int main()
{
    int arr[] = {2, 1, 1};
    int n = 3;
    int sum = 2;
    
    if (checkSubsequence(0, arr, n, 0, sum))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
