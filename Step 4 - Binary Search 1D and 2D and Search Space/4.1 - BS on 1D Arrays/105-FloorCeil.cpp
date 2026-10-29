#include <bits/stdc++.h>
using namespace std;
int ceiling(int arr[], int x, int n)
{
    int low = 0, high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] >= x)
        {
            ans = arr[mid];
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
int floor(int arr[], int x, int n)
{
    int low = 0, high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] <= x)
        {
            ans = arr[mid];
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int arr[] = {3, 4, 4, 7, 8, 10};
    int x = 5;
    int n = 6;
    cout << "floor is: " << floor(arr, x, n) << endl;
    cout << "ceiling is: " << ceiling(arr, x, n) << endl;
}