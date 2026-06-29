#include <bits/stdc++.h>
using namespace std;

bool ship(const vector<int> &arr, int w, int d)
{
    int n = arr.size();
    int sum = 0;
    int count = 0;
    
    for (int i = 0; i < n; i++)
    {
        // Safety check: if a package exceeds capacity, it's impossible
        if (arr[i] > w) return false; 
        
        sum = sum + arr[i];
        if (sum == w)
        {
            count++;
            sum = 0;
        }
        else if (sum > w)
        {
            count++;
            sum = arr[i];
        }
    }
    if (sum > 0)
    {
        count++;
    }
    return count <= d;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = arr.size();
    int d = 5;
    
    int sum = 0;
    int max_element_val = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        max_element_val = max(max_element_val, arr[i]);
    }
    
    // Lower bound must be the heaviest package
    int low = max_element_val; 
    int high = sum;
    
    while (low <= high)
    {
        // Safe from overflow
        int mid = low + (high - low) / 2; 
        if (ship(arr, mid, d))
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
