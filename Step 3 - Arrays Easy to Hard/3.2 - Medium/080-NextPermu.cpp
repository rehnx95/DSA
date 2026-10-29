#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {2, 1, 5, 4, 3, 0, 0};

    int n = 7;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int pvt = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            pvt = i;
            break;
        }
    }
    for (int i = n - 1; i > pvt; i--)
    {
        if (arr[i] > arr[pvt])
        {
            swap(arr[i], arr[pvt]);
            break;
        }
    }
    reverse(arr.begin() + pvt + 1, arr.end());
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}