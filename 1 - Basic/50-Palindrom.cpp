#include <bits/stdc++.h>
using namespace std;
// Checks if an array is a palindrome
bool palindrom(vector<int> &arr, int i)
{
    int n = arr.size();
    if (i >= n / 2)
        return true;
    if (arr[i] != arr[n - i - 1])
        return false;
    return palindrom(arr, i + 1);
}
int main()
{
    vector<int> arr = {1, 2, 3, 2, 1};
    cout << palindrom(arr, 0) << endl;
}