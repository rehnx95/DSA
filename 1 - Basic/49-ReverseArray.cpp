#include <bits/stdc++.h>
using namespace std;
// Reverses an array using a single pointer
void reverse(vector<int> &arr, int i)
{
    int n = arr.size();
    if (i >= n / 2)
        return;
    swap(arr[i], arr[n - i - 1]);
    reverse(arr, i + 1);
}
int main()
{
    vector<int> arr = {1, 2, 3, 2, 1};
    reverse(arr, 0);
}