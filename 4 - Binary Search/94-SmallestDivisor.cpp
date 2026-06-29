#include <bits/stdc++.h>
using namespace std;
int divisor(const vector<int> &arr, int d)
{
    int n = arr.size();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int divisor = (arr[i] + (d - 1)) / d;
        sum += divisor;
    }
    return sum;
}

int main()
{
    vector<int> arr = {1, 2, 5, 9};
    int low = 1;
    int high = *max_element(arr.begin(), arr.end());
    int limit = 7;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (divisor(arr, mid) <= limit)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << low;
}