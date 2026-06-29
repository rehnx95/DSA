#include <iostream>
using namespace std;

void reverse(int arr[], int i, int j)
{
    while (i < j)
    {
        swap(arr[i],arr[j]);

        // int temp = arr[i];
        // arr[i] = arr[j];
        // arr[j] = temp;
        
        i++;
        j--;
    }
}
int main()
{
    int n;
    cout << "number of digit ";
    cin >> n;
    int a[n];

    cout << "enter digits ";
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> a[i];
    }

    // normal

    for (int i = 0; i <= n - 1; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    // reversing process
    reverse(a, 0, n - 1);
    // reverse(a, 1, 3);


    // reversed
    cout << endl;
    for (int i = 0; i <= n - 1; i++)
    {
        cout << a[i] << " ";
    }
}
