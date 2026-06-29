#include <iostream>
using namespace std;

int main()
{
    int n, x;
    int count = 0;
    cout << "number of digit ";
    cin >> n;
    int arr[n];

    cout << "enter digits ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Enter element ";
    cin >> x;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > x)
        {
            count++;
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    cout << count;
}