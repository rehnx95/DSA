#include <iostream>

using namespace std;
void insertion(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j - 1], arr[j]);
            j--;
        }
    }
}
int main()
{
    int arr[] = {6, 5, 4, 3, 2, 1};
    int n = 6;
    insertion(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}