#include <bits/stdc++.h>
using namespace std;
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// void reversepart(int arr[], int f, int l)
// {
//     while (f <= l)
//     {
//         int temp = arr[f];
//         arr[f] = arr[l];
//         arr[l] = temp;
//         f++;
//         l--;
//     }
// }

void leftrotate(int arr[], int n, int k)
{
    int temp[k];
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = k; i < n; i++)
    {
        arr[i - k] = arr[i];
    }
    for (int i = n - k; i < n; i++)
    {
        arr[i] = temp[i - (n - k)];
    }
}
int main()
{
    int arr[] = {2, 4, 3, 5, 6, 7, 5, 7, 9};
    int n = 9;
    display(arr, n);
    int k;
    cout << "enter k: ";
    cin >> k;
    if (k > n)
        k = k % n;
    // reversepart(arr, 0, k - 1);
    // reversepart(arr, k, n - 1);
    // reversepart(arr, 0, n - 1);
    leftrotate(arr,n,k);
    display(arr, n);
}