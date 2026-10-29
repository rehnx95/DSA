#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void selection(int arr[], int n)
{

    for (int i = 0; i <= n - 2; i++)
    {
        int idx = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[idx])
            {
                idx = j;
            }
        }
        swap(arr[i], arr[idx]);
    }
}
int main()
{

    int arr[] = {6, 5, 4, 3, 2, 1};

    int n = 6;
    selection(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}