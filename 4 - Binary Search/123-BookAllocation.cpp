#include <bits/stdc++.h>
using namespace std;

// returns true if all books can be allocated to 'm' students
// where max pages a student can read is 'maxPages'
bool canAllocate(const vector<int> &arr, int maxPages, int m, int n)
{
    int students = 1;
    int currentPages = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (currentPages + arr[i] <= maxPages)
        {
            currentPages += arr[i];
        }
        else
        {
            // current student is full, assign to next student
            students++;
            currentPages = arr[i];
        }
    }
    return students <= m;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40};
    int n = arr.size();
    int m = 2;
    int minLimit = INT_MIN; // max element → at low each student gets 1 book
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        minLimit = max(arr[i], minLimit);
        sum += arr[i]; // at high 1 student gets all books
    }
    int low = minLimit, high = sum;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (canAllocate(arr, mid, m, n))
        {
            ans = mid;
            high = mid - 1; // valid, try smaller
        }
        else
        {
            low = mid + 1; // not valid, need more pages
        }
    }
    cout << ans;
}